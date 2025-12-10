#include "stdafx.h"
int MsgBox(HINSTANCE hInst, HWND hDlg, char* lpszText, char* lpszCaption, DWORD dwStyle, int lpszIcon) {
	MSGBOXPARAMS lpmbp;
	lpmbp.hInstance = hInst;
	lpmbp.cbSize = sizeof(MSGBOXPARAMS);
	lpmbp.hwndOwner = hDlg;
	lpmbp.dwLanguageId = MAKELANGID(0x0800, 0x0800); //par defaut celui du systeme
	lpmbp.lpszText = lpszText;
	lpmbp.lpszCaption = lpszCaption;
	lpmbp.dwStyle = dwStyle | 0x00000080L;
	lpmbp.lpszIcon = (LPCTSTR)lpszIcon;
	lpmbp.lpfnMsgBoxCallback = 0;
	return  MessageBoxIndirect(&lpmbp);
}
void errhandler(LPCTSTR Texte, HWND hwnd) {
	MsgBox(wc.hInstance, hwnd, (char*)Texte, "Gestionnaire d'erreur", 0, 100);
}
