#include "stdafx.h"
int MsgBox(HWND hDlg, char* lpszText, char* lpszCaption, DWORD dwStyle, int lpszIcon) {
	MSGBOXPARAMS lpmbp;
	lpmbp.hInstance = wc.hInstance;
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
int AppMsgBox(HWND hDlg, char* lpszText, char* lpszCaption, DWORD dwStyle) {
	return  MsgBox(hDlg, lpszText, lpszCaption, dwStyle, 0x65);
}

void errhandler(LPCTSTR Texte, HWND hwnd) {
	MsgBox(hwnd, (char*)Texte, "Gestionnaire d'erreur", 0, 0x64);
}
