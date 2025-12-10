#include "stdafx.h"
char m_szData[256];
int m_iError, m_nbBits, m_bitSize, m_step, m_height;
int GetAppLastError() { return m_iError; }
const char* GetCodeString() { return m_szData; }
void SetResultCode(HWND hwnd) {
	char szBuf[32], szBin[2048];
	int i;
	BYTE mask;
	const char* p = GetCodeString();
	GetDlgItemText(hwnd, IDC_BINARY, szBuf, 64);
	if (!lstrcmp(szBuf, TEXT_BTN1))
		SetDlgItemText(hwnd, IDC_EDITRES, GetCodeString());
	else {
		szBin[0] = 0;
		for (i = 0; i < m_bitSize; i++) {
			mask = 0x80 >> (i % 8);
			if (p[i / 8] & mask)
				szBin[i] = '1';
			else
				szBin[i] = '0';
		}
		szBin[i] = 0;
		SetDlgItemText(hwnd, IDC_EDITRES, szBin);
	}
}
BOOL PreparePrint(HDC hdc, POINTFLOAT ptf, LPRECT lprc) {
	POINT pt;
	int step, cy;
	if (!m_bitSize)       return TRUE;
	pt.x = (int)(lprc->left * ptf.x);
	pt.y = (int)(lprc->top * ptf.y);
	step = GetApproximateStep((int)(lprc->right * ptf.x));
	cy = max((int)(lprc->bottom * ptf.y), GetMinimalHeight(hdc, step));
	Draw(hdc, pt, cy, step);
	return TRUE;
}
const char* ErrorString(int error) {
	switch (error) {
	case ERR_NONE:				 return "Pas d'erreur";
	case ERR_VAR_CODE_NULL:      return "Variable code ne devrait pas être nulle";
	case ERR_CODE_INCOMPATIBLE:  return "Code incompatible";
	case ERR_BAD_FORMAT_SIZE:    return "La taille de code barre est incompatible";
	case ERR_SIZE_LESS:          return "Taille de variable insuffisante";
	case ERR_CODE_TRUNCATE:      return "Le code barre est tronqué";
	default:					 return "Erreur inconnue";
	}
}
void SetBits(char** lppData, int* lpPos, WORD wCode, int len) {
	if ((!lppData) || (!lpPos) || (*lpPos >= 8) || (len > 16) || (len < 0) || (*lpPos < 0))        return;
	WORD wBuf;
	char byBuf;
	BYTE byMask;
	int i, k;
	do {
		wBuf = wCode << (16 - len);
		byBuf = (BYTE)(wBuf >> (*lpPos + 8));
		byMask = 0xFF >> (*lpPos);
		**lppData = ((**lppData) & (~byMask)) | (byBuf & byMask);
		k = len + (*lpPos) - 8;
		if (k >= 0) { *lpPos = 0; (*lppData)++; }
		else  (*lpPos) += len;
		len = k;
	} while (len > 0);
}
int Decode(const char* pszCode) {
	ZeroMemory(m_szData, sizeof(m_szData));
	m_nbBits = 0;
	if (!pszCode) { m_iError = ERR_VAR_CODE_NULL; return 0; }
	int len, i, j;
	len = lstrlen(pszCode);
	for (i = 0; i < len; i++) { if (SetIndex(pszCode[i]) == -1) { m_iError = ERR_CODE_INCOMPATIBLE; return 0; } }
	if (pszCode[0] == '*') { pszCode++; len--; }
	if (pszCode[len - 1] == '*') { len--; }
	if (len == 0) { m_iError = ERR_VAR_CODE_NULL; return 0; }
	m_iError = ERR_NONE;
	int count = 0;
	int pos = 0;
	char* pData = m_szData;
	SetBits(&pData, &pos, cstTable39[39], 12);
	SetBits(&pData, &pos, 0, 1);
	count = 13;
	for (i = 0; i < len; i++) { SetBits(&pData, &pos, cstTable39[SetIndex(pszCode[i])], 12); SetBits(&pData, &pos, 0, 1); count += 13; }
	SetBits(&pData, &pos, cstTable39[39], 12);
	count += 12;
	m_nbBits = count;
	return count;
}
int GetApproximateStep(int width) { return  (int)(width / (m_nbBits + 20)); }
int GetMinimalHeight(HDC hdc, int step) {
	POINT ptLog;
	POINTFLOAT ptFloat;
	ptLog.y = GetDeviceCaps(hdc, LOGPIXELSY);
	ptFloat.y = (float)ptLog.y / 25.4f;
	return  (int)(ptFloat.y * 7);
}
int CheckDigit(const char* pszCode, BOOL bComplet) { return 0; }
void Draw(HDC hdc, POINT pt, int height, int step) {
	int len, i, j, count;
	RECT rect;
	BYTE mask;
	POINT ptLog;
	POINTFLOAT ptFloat;
	len = lstrlen(m_szData);
	if (len == 0) return;
	step = max(1, step);
	ptLog.x = GetDeviceCaps(hdc, LOGPIXELSX);
	ptLog.y = GetDeviceCaps(hdc, LOGPIXELSY);
	ptFloat.x = (float)ptLog.x / 25.4f;
	ptFloat.y = (float)ptLog.y / 25.4f;
	SetRect(&rect, pt.x, pt.y, GetApproximateWidth(step) + pt.x, height + pt.y);
	FillRect(hdc, &rect, (HBRUSH)GetStockObject(WHITE_BRUSH));
	pt.y += (int)(ptFloat.y * 2.f);
	height -= (int)(ptFloat.y * 4.f);
	rect.top = pt.y;
	for (i = 0; i < len; i++) {
		for (j = 0; j < 8; j++) {
			mask = 0x80 >> j;
			rect.left = pt.x + step * 10 + step * (8 * i + j);
			rect.right = rect.left + step;
			rect.bottom = pt.y + height;
			if (m_szData[i] & mask) {
				FillRect(hdc, &rect, (HBRUSH)GetStockObject(BLACK_BRUSH));
			}
		}
	}
}
int SetIndex(char car) {
	if ((car >= 48) && (car <= 57))        return (car - 48);
	else if ((car >= 25) && (car <= 90))   return (car - 55);
	else if ((car >= 97) && (car <= 122))  return (car - 87);
	else if (car == '-')		        return 36;
	else if (car == '.')		        return 37;
	else if (car == ' ')		        return 38;
	else if (car == '*')		        return 39;
	else if (car == '$')		        return 40;
	else if (car == '/')		        return 41;
	else if (car == '+')		        return 42;
	else if (car == '%')		        return 43;
	return -1;
}
int GetApproximateWidth(int step) { if (!m_nbBits) return 0;     return (m_nbBits + 20) * step; }
