// Gestion_Entreprise.cpp : Defines the entry point for the application.
//

#include <windows.h>
#include <commctrl.h>
#include "resource.h"
#define WINVER 0x601
#pragma comment(lib, "comctl32.lib")

#include "stdafx.h"
char Titres[10][17] = { "Punch","Employés","Achats","Projets","Inventaire","Clients","Fournisseurs","Contacts","Comptabilité","À propos" };
SIZE desk, dlg;


HIMAGELIST hImageList;
TCHAR szHello[0x64];
TBBUTTON tbButtons[0x1A];//limité a 26 boutons dans le ruban
RECT rc, rect, m_rcPrint;
SYSTEMTIME st;
TCHAR buffer[MAX_PATH];
TCHAR szApp[MAX_PATH];
bool bcapt = 0;
long cxcli, cycli, splitX;
COLORREF clrBk;
CHAR szBuf[MAX_PATH];
static char appDir[260];


LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam);
LRESULT CALLBACK Apropos(HWND, UINT, WPARAM, LPARAM);
HWND CreerElement(HWND Controle, DWORD exStyle, LPCSTR Classe, LPCSTR Texte, int menu, int x, int y, int largeur, int hauteur, DWORD Style)
{
	return 	CreateWindowEx(exStyle, Classe, Texte, WS_CHILD | WS_VISIBLE | Style, x * 1.85, y * 1.85, largeur * 2, hauteur * 2, Controle, (HMENU)menu, wc.hInstance, NULL);
}
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	wc.lpfnWndProc = WndProc;
	wc.hInstance = hInstance;
	wc.lpszClassName = TEXT("Gestion_Entreprise");
	wc.hbrBackground = CreateSolidBrush(GetSysColor(0x0F));
	wc.lpszMenuName = (LPCSTR)5000;
	RECT rc;
	GetClientRect(GetDesktopWindow(), &rc);
	desk.cx = rc.right;
	desk.cy = rc.bottom;
	RegisterClass(&wc);
	dlg.cx = 1024;
	dlg.cy = 738;
#if WINVER > 0x600
	///Modificaction dues au theme Windows10,11,12 
	dlg.cx -= 0x0A;
	dlg.cy -= 0x06;
	//// fin des modifs pour le theme
#endif
	hMain = CreateWindowEx(WS_EX_DLGMODALFRAME | WS_EX_WINDOWEDGE | WS_EX_CLIENTEDGE | WS_EX_CONTEXTHELP | WS_EX_STATICEDGE, wc.lpszClassName, TEXT(titre), WS_OVERLAPPED | WS_CAPTION | WS_SYSMENU, 0, 0, dlg.cx, dlg.cy, NULL, NULL, hInstance, NULL);
	InitCommonControls();
	LoadString(wc.hInstance, 0x01, szHello, 0x64);
	InitControlRubanOutils(15);
	InitControlTabulation();
	CreerInterfaceClients();
	CreerInterfaceContacts();
	CreerInterfacePropos();
	CreerInterfacePunch();
	CreerInterfaceEmployés();
	CreerInterfaceAchats();
	CreerInterfaceProjets();
	CreerInterfaceInventaire();
	CreerInterfaceFournisseurs();
	CreerInterfaceComptabilité();
	ShowWindow(hMain, nCmdShow);
	MSG msg;
	while (GetMessage(&msg, NULL, 0, 0))
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
	return 0;
}

LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
	int wmId, wmEvent;
	PAINTSTRUCT ps;
	HDC hdc;

	switch (msg)
	{
	case WM_CREATE: {
	}break;
	case WM_NOTIFY: {
		if (((LPNMHDR)lParam)->idFrom == IDC_TABCONTROL && ((LPNMHDR)lParam)->code == TCN_SELCHANGE)
		{
			switch (TabCtrl_GetCurSel(hTab)) {
			case 0: {
				ShowWindow(hFenetre1, SW_SHOW);
				ShowWindow(hFenetre2, SW_HIDE);
				ShowWindow(hFenetre3, SW_HIDE);
				ShowWindow(hFenetre4, SW_HIDE);
				ShowWindow(hFenetre5, SW_HIDE);
				ShowWindow(hFenetre6, SW_HIDE);
				ShowWindow(hFenetre7, SW_HIDE);
				ShowWindow(hFenetre8, SW_HIDE);
				ShowWindow(hFenetre9, SW_HIDE);
				ShowWindow(hFenetre10, SW_HIDE);
			}break;
			case 1: {
				ShowWindow(hFenetre1, SW_HIDE);
				ShowWindow(hFenetre2, SW_SHOW);
				ShowWindow(hFenetre3, SW_HIDE);
				ShowWindow(hFenetre4, SW_HIDE);
				ShowWindow(hFenetre5, SW_HIDE);
				ShowWindow(hFenetre6, SW_HIDE);
				ShowWindow(hFenetre7, SW_HIDE);
				ShowWindow(hFenetre8, SW_HIDE);
				ShowWindow(hFenetre9, SW_HIDE);
				ShowWindow(hFenetre10, SW_HIDE);
			}break;
			case 2: {
				ShowWindow(hFenetre1, SW_HIDE);
				ShowWindow(hFenetre2, SW_HIDE);
				ShowWindow(hFenetre3, SW_SHOW);
				ShowWindow(hFenetre4, SW_HIDE);
				ShowWindow(hFenetre5, SW_HIDE);
				ShowWindow(hFenetre6, SW_HIDE);
				ShowWindow(hFenetre7, SW_HIDE);
				ShowWindow(hFenetre8, SW_HIDE);
				ShowWindow(hFenetre9, SW_HIDE);
				ShowWindow(hFenetre10, SW_HIDE);
			}break;
			case 3: {
				ShowWindow(hFenetre1, SW_HIDE);
				ShowWindow(hFenetre2, SW_HIDE);
				ShowWindow(hFenetre3, SW_HIDE);
				ShowWindow(hFenetre4, SW_SHOW);
				ShowWindow(hFenetre5, SW_HIDE);
				ShowWindow(hFenetre6, SW_HIDE);
				ShowWindow(hFenetre7, SW_HIDE);
				ShowWindow(hFenetre8, SW_HIDE);
				ShowWindow(hFenetre9, SW_HIDE);
				ShowWindow(hFenetre10, SW_HIDE);
			}break;
			case 4: {
				ShowWindow(hFenetre1, SW_HIDE);
				ShowWindow(hFenetre2, SW_HIDE);
				ShowWindow(hFenetre3, SW_HIDE);
				ShowWindow(hFenetre4, SW_HIDE);
				ShowWindow(hFenetre5, SW_SHOW);
				ShowWindow(hFenetre6, SW_HIDE);
				ShowWindow(hFenetre7, SW_HIDE);
				ShowWindow(hFenetre8, SW_HIDE);
				ShowWindow(hFenetre9, SW_HIDE);
				ShowWindow(hFenetre10, SW_HIDE);
			}break;
			case 5: {
				ShowWindow(hFenetre1, SW_HIDE);
				ShowWindow(hFenetre2, SW_HIDE);
				ShowWindow(hFenetre3, SW_HIDE);
				ShowWindow(hFenetre4, SW_HIDE);
				ShowWindow(hFenetre5, SW_HIDE);
				ShowWindow(hFenetre6, SW_SHOW);
				ShowWindow(hFenetre7, SW_HIDE);
				ShowWindow(hFenetre8, SW_HIDE);
				ShowWindow(hFenetre9, SW_HIDE);
				ShowWindow(hFenetre10, SW_HIDE);
			}break;
			case 6: {
				ShowWindow(hFenetre1, SW_HIDE);
				ShowWindow(hFenetre2, SW_HIDE);
				ShowWindow(hFenetre3, SW_HIDE);
				ShowWindow(hFenetre4, SW_HIDE);
				ShowWindow(hFenetre5, SW_HIDE);
				ShowWindow(hFenetre6, SW_HIDE);
				ShowWindow(hFenetre7, SW_SHOW);
				ShowWindow(hFenetre8, SW_HIDE);
				ShowWindow(hFenetre9, SW_HIDE);
				ShowWindow(hFenetre10, SW_HIDE);
			}break;
			case 7: {
				ShowWindow(hFenetre1, SW_HIDE);
				ShowWindow(hFenetre2, SW_HIDE);
				ShowWindow(hFenetre3, SW_HIDE);
				ShowWindow(hFenetre4, SW_HIDE);
				ShowWindow(hFenetre5, SW_HIDE);
				ShowWindow(hFenetre6, SW_HIDE);
				ShowWindow(hFenetre7, SW_HIDE);
				ShowWindow(hFenetre8, SW_SHOW);
				ShowWindow(hFenetre9, SW_HIDE);
				ShowWindow(hFenetre10, SW_HIDE);
			}break;
			case 8: {
				ShowWindow(hFenetre1, SW_HIDE);
				ShowWindow(hFenetre2, SW_HIDE);
				ShowWindow(hFenetre3, SW_HIDE);
				ShowWindow(hFenetre4, SW_HIDE);
				ShowWindow(hFenetre5, SW_HIDE);
				ShowWindow(hFenetre6, SW_HIDE);
				ShowWindow(hFenetre7, SW_HIDE);
				ShowWindow(hFenetre8, SW_HIDE);
				ShowWindow(hFenetre9, SW_SHOW);
				ShowWindow(hFenetre10, SW_HIDE);
			}break;
			case 9: {
				ShowWindow(hFenetre1, SW_HIDE);
				ShowWindow(hFenetre2, SW_HIDE);
				ShowWindow(hFenetre3, SW_HIDE);
				ShowWindow(hFenetre4, SW_HIDE);
				ShowWindow(hFenetre5, SW_HIDE);
				ShowWindow(hFenetre6, SW_HIDE);
				ShowWindow(hFenetre7, SW_HIDE);
				ShowWindow(hFenetre8, SW_HIDE);
				ShowWindow(hFenetre9, SW_HIDE);
				ShowWindow(hFenetre10, SW_SHOW);
			}break;

			}
		}
	}break;
	case WM_COMMAND: {
		wmId = LOWORD(wParam);
		wmEvent = HIWORD(wParam);
		switch (wmId)
		{
		case 0xE140:
			DialogBox(wc.hInstance, (LPCTSTR)0x67, hwnd, (DLGPROC)Apropos);
			break;
		case IDCANCEL:
			DestroyWindow(hwnd);
			break;
		default:
			return DefWindowProc(hwnd, msg, wParam, lParam);
		}
	}break;
	case WM_PAINT: {
		hdc = BeginPaint(hMain, &ps);
		RECT rt;
		GetClientRect(hwnd, &rt);
		rt.bottom = 0x24;
		DrawText(GetDC(hToolbar), szHello, strlen(szHello), &rt, DT_CENTER);
		EndPaint(hMain, &ps);
	}break;
	case WM_DESTROY: {
		ImageList_Destroy(hImageList);
		PostQuitMessage(0);
	}break;

	default:
		return DefWindowProc(hwnd, msg, wParam, lParam);
	}
	return 0;
}
LRESULT CALLBACK Apropos(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
{
	switch (message)
	{
	case WM_INITDIALOG:
		return TRUE;

	case WM_COMMAND:
		if (LOWORD(wParam) == IDOK || LOWORD(wParam) == IDCANCEL)
		{
			EndDialog(hDlg, LOWORD(wParam));
			return TRUE;
		}
		break;
	}
	return FALSE;
}
void InitControlRubanOutils(int nbBoutons) {
	HIMAGELIST hImageList = ImageList_Create(16, 16, ILC_COLOR32, 2, 1);
	HBITMAP hBitmap = LoadBitmap(wc.hInstance, MAKEINTRESOURCE(0x69));
	hToolbar = CreateWindowEx(0, TOOLBARCLASSNAME, NULL, WS_CHILD | WS_VISIBLE, 0, 0, 0, 0, hMain, (HMENU)0x1389, wc.hInstance, NULL);
	SendMessage(hToolbar, TB_BUTTONSTRUCTSIZE, (WPARAM)sizeof(TBBUTTON), 0);
	ImageList_Add(hImageList, hBitmap, NULL);
	DeleteObject(hBitmap);
	SendMessage(hToolbar, TB_SETIMAGELIST, 0, (LPARAM)hImageList);
	hStat = CreateStatusWindow(WS_CHILD | WS_VISIBLE, wc.lpszClassName, hMain, 0x1770);
	for (int a = 0; a < nbBoutons; a++) {
		tbButtons[a].iBitmap = a;
		tbButtons[a].idCommand = 0x3E9 + a;
		tbButtons[a].fsState = TBSTATE_ENABLED;
		tbButtons[a].fsStyle = TBSTYLE_BUTTON | TBSTYLE_AUTOSIZE | TBSTYLE_FLAT;
		tbButtons[a].iString = a;
	}
	SendMessage(hToolbar, TB_ADDBUTTONS, nbBoutons, (LPARAM)tbButtons);
}
void InitControlTabulation() {
	hTab = CreateWindowEx(WS_EX_DLGMODALFRAME | WS_EX_WINDOWEDGE | WS_EX_CLIENTEDGE | WS_EX_STATICEDGE, WC_TABCONTROL, NULL, WS_CHILD | WS_CLIPSIBLINGS | WS_VISIBLE, 0, 0x1E, dlg.cx, dlg.cy - 0x99, hMain, (HMENU)IDC_TABCONTROL, wc.hInstance, NULL);
	hImageList = ImageList_Create(16, 16, ILC_COLOR32, 1, 1);
	HBITMAP hBitmap = LoadBitmap(wc.hInstance, MAKEINTRESOURCE(IDB_IMAGE));
	ImageList_Add(hImageList, hBitmap, NULL);
	DeleteObject(hBitmap);
	TabCtrl_SetImageList(hTab, hImageList);
	tie.mask = TCIF_TEXT | TCIF_IMAGE;
	for (int a = 9; a >= 0; a--) {
		tie.iImage = a;
		tie.pszText = Titres[a];
		TabCtrl_InsertItem(hTab, 0, &tie);
	}
	hFenetre1 = CreateWindowEx(WS_EX_DLGMODALFRAME | WS_EX_CLIENTEDGE, WC_DIALOG, Titres[0], WS_DIALOG, 0x04, 0x19, 0x3CF, 0x21C, hTab, NULL, wc.hInstance, NULL);
	hFenetre2 = CreateWindowEx(WS_EX_DLGMODALFRAME | WS_EX_CLIENTEDGE, WC_DIALOG, Titres[1], WS_DIALOG, 0x04, 0x19, 0x3CF, 0x21C, hTab, NULL, wc.hInstance, NULL);
	hFenetre3 = CreateWindowEx(WS_EX_DLGMODALFRAME | WS_EX_CLIENTEDGE, WC_DIALOG, Titres[2], WS_DIALOG, 0x04, 0x19, 0x3CF, 0x21C, hTab, NULL, wc.hInstance, NULL);
	hFenetre4 = CreateWindowEx(WS_EX_DLGMODALFRAME | WS_EX_CLIENTEDGE, WC_DIALOG, Titres[3], WS_DIALOG, 0x04, 0x19, 0x3CF, 0x21C, hTab, NULL, wc.hInstance, NULL);
	hFenetre5 = CreateWindowEx(WS_EX_DLGMODALFRAME | WS_EX_CLIENTEDGE, WC_DIALOG, Titres[4], WS_DIALOG, 0x04, 0x19, 0x3CF, 0x21C, hTab, NULL, wc.hInstance, NULL);
	hFenetre6 = CreateWindowEx(WS_EX_DLGMODALFRAME | WS_EX_CLIENTEDGE, WC_DIALOG, Titres[5], WS_DIALOG, 0x04, 0x19, 0x3CF, 0x21C, hTab, NULL, wc.hInstance, NULL);
	hFenetre7 = CreateWindowEx(WS_EX_DLGMODALFRAME | WS_EX_CLIENTEDGE, WC_DIALOG, Titres[6], WS_DIALOG, 0x04, 0x19, 0x3CF, 0x21C, hTab, NULL, wc.hInstance, NULL);
	hFenetre8 = CreateWindowEx(WS_EX_DLGMODALFRAME | WS_EX_CLIENTEDGE, WC_DIALOG, Titres[7], WS_DIALOG, 0x04, 0x19, 0x3CF, 0x21C, hTab, NULL, wc.hInstance, NULL);
	hFenetre9 = CreateWindowEx(WS_EX_DLGMODALFRAME | WS_EX_CLIENTEDGE, WC_DIALOG, Titres[8], WS_DIALOG, 0x04, 0x19, 0x3CF, 0x21C, hTab, NULL, wc.hInstance, NULL);
	hFenetre10 = CreateWindowEx(WS_EX_DLGMODALFRAME | WS_EX_CLIENTEDGE, WC_DIALOG, Titres[9], WS_DIALOGMOBILE, 10, 95, 600, 400, hTab, NULL, wc.hInstance, NULL);
	CreateWindowEx(WS_EX_WINDOWEDGE | WS_EX_STATICEDGE, WC_BUTTON, TEXT("À propos"), WS_CHILD | WS_CLIPSIBLINGS | WS_VISIBLE, dlg.cx - 0xD4, dlg.cy - 0x74, 0x64, 0x1D, hMain, (HMENU)0xE140, wc.hInstance, NULL);
	CreateWindowEx(WS_EX_WINDOWEDGE | WS_EX_STATICEDGE, WC_BUTTON, TEXT("Quitter"), WS_CHILD | WS_CLIPSIBLINGS | WS_VISIBLE, dlg.cx - 0x70, dlg.cy - 0x74, 0x5C, 0x1D, hMain, (HMENU)IDCANCEL, wc.hInstance, NULL);
}
void SwitchView(HWND hwndListView, DWORD dwView)
{
	DWORD dwStyle = GetWindowLong(hwndListView, GWL_STYLE);
	SetWindowLong(hwndListView, GWL_STYLE, (dwStyle & ~LVS_TYPEMASK) | dwView);
}
void CreerInterfacePunch() {
	SetWindowText(hFenetre1, NULL);
}
void CreerInterfaceEmployés()
{
	SetWindowText(hFenetre2, NULL);
	CreerElement(hFenetre2, 0, WC_BUTTON, "Actif", IDC_CHECK1, 151, 37, 49, 10, WS_TABSTOP | BTNS_CHECK);
	CreerElement(hFenetre2, 0, WC_EDIT, "", IDC_EDIT2, 56, 139, 181, 12, ES_AUTOHSCROLL | WS_BORDER | WS_TABSTOP);
	CreerElement(hFenetre2, 0, WC_EDIT, "", IDC_EDIT4, 56, 6, 182, 12, ES_AUTOHSCROLL | WS_BORDER | WS_TABSTOP);
	CreerElement(hFenetre2, 0, WC_BUTTON, "&Impression", IDC_BUTTON10, 9, 195, 38, 14, WS_TABSTOP);
	CreerElement(hFenetre2, 0, WC_BUTTON, "&Ajouter", IDC_BUTTON12, 56, 195, 27, 14, WS_TABSTOP);
	CreerElement(hFenetre2, 0, WC_BUTTON, "&Supprimer", IDC_BUTTON13, 152, 195, 36, 14, WS_TABSTOP);
	CreerElement(hFenetre2, 0, WC_BUTTON, "Enregistrer", IDC_BUTTON15, 113, 195, 38, 14, WS_TABSTOP);
	CreerElement(hFenetre2, 0, WC_EDIT, "", IDC_EDIT15, 56, 110, 74, 12, ES_AUTOHSCROLL | WS_BORDER | WS_TABSTOP);
	CreerElement(hFenetre2, 0, WC_EDIT, "", IDC_EDIT16, 186, 97, 49, 12, ES_AUTOHSCROLL | WS_BORDER | WS_TABSTOP);
	CreerElement(hFenetre2, 0, WC_EDIT, "", IDC_EDIT17, 56, 96, 86, 12, ES_AUTOHSCROLL | WS_BORDER | WS_TABSTOP);
	CreerElement(hFenetre2, 0, WC_EDIT, "", IDC_EDIT18, 56, 82, 179, 12, ES_AUTOHSCROLL | WS_BORDER | WS_TABSTOP);
	CreerElement(hFenetre2, 0, WC_EDIT, "", IDC_EDIT19, 56, 49, 179, 31, ES_MULTILINE | ES_AUTOHSCROLL | WS_BORDER | WS_TABSTOP);
	CreerElement(hFenetre2, 0, WC_EDIT, "", IDC_EDIT20, 56, 154, 181, 30, ES_MULTILINE | ES_AUTOVSCROLL | ES_AUTOHSCROLL | WS_BORDER | WS_TABSTOP);
	CreerElement(hFenetre2, 0, WC_EDIT, "", IDC_EDIT23, 56, 36, 86, 12, ES_AUTOHSCROLL | WS_BORDER | WS_TABSTOP);
	CreerElement(hFenetre2, 0, WC_STATIC, "Categorie", -1, 9, 23, 31, 8, WS_GROUP);
	CreerElement(hFenetre2, 0, WC_STATIC, "Création :", -1, 9, 127, 31, 8, WS_GROUP);
	CreerElement(hFenetre2, 0, WC_STATIC, "Modification :", -1, 101, 126, 43, 8, WS_GROUP);
	CreerElement(hFenetre2, 0, WC_STATIC, "14-01-2022", -1, 56, 124, 43, 12, SS_CENTERIMAGE | WS_BORDER | WS_GROUP);
	CreerElement(hFenetre2, 0, WC_STATIC, "14-01-2022", -1, 145, 124, 43, 12, SS_CENTERIMAGE | WS_BORDER | WS_GROUP);
	CreerElement(hFenetre2, 0, WC_STATIC, "E-Mail", -1, 9, 140, 20, 8, WS_GROUP);
	CreerElement(hFenetre2, 0, WC_STATIC, "Pays", -1, 9, 112, 16, 8, WS_GROUP);
	CreerElement(hFenetre2, 0, WC_STATIC, "Code Postal", -1, 144, 100, 39, 8, WS_GROUP);
	CreerElement(hFenetre2, 0, WC_STATIC, "Province", -1, 9, 99, 32, 8, WS_GROUP);
	CreerElement(hFenetre2, 0, WC_STATIC, "Ville", -1, 9, 87, 14, 8, WS_GROUP);
	CreerElement(hFenetre2, 0, WC_STATIC, "Adresse", -1, 9, 51, 26, 8, WS_GROUP);
	CreerElement(hFenetre2, 0, WC_STATIC, "Commentaires", -1, 9, 154, 45, 8, WS_GROUP);
	CreerElement(hFenetre2, 0, WC_STATIC, "Telephone", -1, 9, 38, 35, 8, WS_GROUP);
	CreerElement(hFenetre2, 0, WC_STATIC, "Client", -1, 9, 9, 18, 8, WS_GROUP);
	CreerElement(hFenetre2, 0, WC_BUTTON, "&Modifier", IDC_BUTTON20, 83, 195, 30, 14, WS_TABSTOP);
	CreerElement(hFenetre2, 0, WC_COMBOBOX, NULL, IDC_COMBO1, 56, 22, 181, 30, CBS_DROPDOWN | CBS_SORT | WS_VSCROLL | WS_TABSTOP);
}
void CreerInterfaceAchats()
{
	SetWindowText(hFenetre3, NULL);
	CreerElement(hFenetre3, 0, "EDIT", "", IDC_EDIT1, 81, 36, 17, 12, ES_AUTOHSCROLL | WS_TABSTOP);
	CreerElement(hFenetre3, 0, WC_BUTTON, "&Ajouter", IDOK, 125, 117, 43, 15, WS_TABSTOP);
	CreerElement(hFenetre3, 0, WC_STATIC, "60", -1, 85, 61, 9, 8, WS_GROUP);
	CreerElement(hFenetre3, 0, WC_STATIC, "-->", -1, 103, 60, 11, 10, WS_GROUP);
	CreerElement(hFenetre3, 0, WC_STATIC, "Petits outils && fourniture", -1, 114, 60, 74, 8, WS_GROUP);
	CreerElement(hFenetre3, 0, WC_STATIC, "-->", -1, 103, 70, 11, 10, WS_GROUP);
	CreerElement(hFenetre3, 0, WC_STATIC, "Formation", -1, 114, 70, 32, 8, WS_GROUP);
	CreerElement(hFenetre3, 0, WC_STATIC, "83", -1, 85, 71, 9, 8, WS_GROUP);
	CreerElement(hFenetre3, 0, WC_STATIC, "-->", -1, 103, 98, 9, 8, WS_GROUP);
	CreerElement(hFenetre3, 0, WC_STATIC, "Équipement && outillage", -1, 114, 98, 72, 8, WS_GROUP);
	CreerElement(hFenetre3, 0, WC_STATIC, "Équipement de bureau", -1, 114, 89, 72, 8, WS_GROUP);
	CreerElement(hFenetre3, 0, WC_STATIC, "Logiciel interne", -1, 114, 80, 48, 8, WS_GROUP);
	CreerElement(hFenetre3, 0, WC_STATIC, "Stocks plancher", -1, 114, 50, 52, 8, WS_GROUP);
	CreerElement(hFenetre3, 0, WC_STATIC, "-->", -1, 103, 89, 9, 8, WS_GROUP);
	CreerElement(hFenetre3, 0, WC_STATIC, "-->", -1, 103, 80, 11, 10, WS_GROUP);
	CreerElement(hFenetre3, 0, WC_STATIC, "-->", -1, 103, 50, 11, 10, WS_GROUP);
	CreerElement(hFenetre3, 0, WC_STATIC, "99", -1, 85, 98, 9, 8, WS_GROUP);
	CreerElement(hFenetre3, 0, WC_STATIC, "97", -1, 85, 90, 9, 8, WS_GROUP);
	CreerElement(hFenetre3, 0, WC_STATIC, "85", -1, 85, 81, 9, 8, WS_GROUP);
	CreerElement(hFenetre3, 0, WC_STATIC, "Mois(01 à 12)", -1, 53, 50, 44, 8, WS_GROUP);
	CreerElement(hFenetre3, 0, WC_STATIC, "XX", -1, 81, 26, 17, 10, WS_GROUP);
	CreerElement(hFenetre3, 0, WC_STATIC, "33000  -", -1, 43, 36, 38, 10, WS_GROUP);
	CreerElement(hFenetre3, 0, WC_STATIC, "Quel est le numéro du type d'achat ?", IDC_AjoutAchat, 17, 8, 116, 8, WS_GROUP);
}
void CreerInterfaceProjets()
{
	SetWindowText(hFenetre4, NULL);
}
void CreerInterfaceInventaire()
{
	SetWindowText(hFenetre5, NULL);
	CreerElement(hFenetre5, WS_EX_LEFTSCROLLBAR | WS_EX_STATICEDGE, WC_LISTVIEW, NULL, IDC_LIST1, 2, 2, 480, 223, LVS_REPORT | LVS_SINGLESEL | LVS_SHOWSELALWAYS | LVS_NOLABELWRAP | LVS_AUTOARRANGE | LVS_NOSORTHEADER | WS_BORDER | WS_TABSTOP);
}
void CreerInterfaceFournisseurs()
{
	SetWindowText(hFenetre7, NULL);
	CreerElement(hFenetre7, 0, WC_EDIT, "", IDC_EDIT2, 67, 199, 86, 12, ES_AUTOHSCROLL | WS_BORDER | WS_TABSTOP);
	CreerElement(hFenetre7, 0, WC_EDIT, "", IDC_EDIT3, 67, 183, 86, 12, ES_AUTOHSCROLL | WS_BORDER | WS_TABSTOP);
	CreerElement(hFenetre7, 0, WC_EDIT, "", IDC_EDIT4, 66, 15, 182, 12, ES_AUTOHSCROLL | WS_BORDER | WS_TABSTOP);
	CreerElement(hFenetre7, 0, WC_BUTTON, "&Impression", IDC_BUTTON10, 7, 244, 38, 14, WS_TABSTOP);
	CreerElement(hFenetre7, 0, WC_BUTTON, "&Ajouter", IDC_BUTTON12, 141, 244, 27, 14, WS_TABSTOP);
	CreerElement(hFenetre7, 0, WC_BUTTON, "&Supprimer", IDC_BUTTON13, 243, 244, 36, 14, WS_TABSTOP);
	CreerElement(hFenetre7, 0, WC_BUTTON, "Enregistrer", IDC_BUTTON15, 204, 244, 38, 14, WS_TABSTOP);
	CreerElement(hFenetre7, 0, WC_EDIT, "", IDC_EDIT15, 67, 148, 86, 12, ES_AUTOHSCROLL | WS_BORDER | WS_TABSTOP);
	CreerElement(hFenetre7, 0, WC_EDIT, "", IDC_EDIT16, 67, 164, 86, 12, ES_AUTOHSCROLL | WS_BORDER | WS_TABSTOP);
	CreerElement(hFenetre7, 0, WC_EDIT, "", IDC_EDIT17, 67, 130, 86, 12, ES_AUTOHSCROLL | WS_BORDER | WS_TABSTOP);
	CreerElement(hFenetre7, 0, WC_EDIT, "", IDC_EDIT18, 67, 114, 86, 12, ES_AUTOHSCROLL | WS_BORDER | WS_TABSTOP);
	CreerElement(hFenetre7, 0, WC_EDIT, "", IDC_EDIT19, 67, 95, 113, 12, ES_AUTOHSCROLL | WS_BORDER | WS_TABSTOP);
	CreerElement(hFenetre7, 0, WC_EDIT, "", IDC_EDIT20, 268, 15, 118, 30, ES_AUTOHSCROLL | WS_BORDER | WS_TABSTOP);
	CreerElement(hFenetre7, 0, WC_EDIT, "", IDC_EDIT21, 67, 79, 86, 12, ES_AUTOHSCROLL | WS_BORDER | WS_TABSTOP);
	CreerElement(hFenetre7, 0, WC_EDIT, "", IDC_EDIT22, 67, 62, 86, 12, ES_AUTOHSCROLL | WS_BORDER | WS_TABSTOP);
	CreerElement(hFenetre7, 0, WC_EDIT, "", IDC_EDIT23, 67, 44, 86, 12, ES_AUTOHSCROLL | WS_BORDER | WS_TABSTOP);
	CreerElement(hFenetre7, 0, WC_STATIC, "Categorie", -1, 14, 30, 31, 8, WS_GROUP);
	CreerElement(hFenetre7, 0, WC_STATIC, "Création :", -1, 14, 220, 31, 8, WS_GROUP);
	CreerElement(hFenetre7, 0, WC_STATIC, "14-01-2022", -1, 67, 217, 43, 12, WS_BORDER | WS_GROUP);
	CreerElement(hFenetre7, 0, WC_STATIC, "E-Mail", -1, 14, 199, 20, 8, WS_GROUP);
	CreerElement(hFenetre7, 0, WC_STATIC, "Site Web", -1, 14, 183, 30, 8, WS_GROUP);
	CreerElement(hFenetre7, 0, WC_STATIC, "Interlocuteur", -1, 14, 79, 40, 8, WS_GROUP);
	CreerElement(hFenetre7, 0, WC_STATIC, "Pays", -1, 14, 148, 16, 8, WS_GROUP);
	CreerElement(hFenetre7, 0, WC_STATIC, "Code Postal", -1, 14, 164, 39, 8, WS_GROUP);
	CreerElement(hFenetre7, 0, WC_STATIC, "Province", -1, 14, 130, 32, 8, WS_GROUP);
	CreerElement(hFenetre7, 0, WC_STATIC, "Ville", -1, 14, 114, 14, 8, WS_GROUP);
	CreerElement(hFenetre7, 0, WC_STATIC, "Adresse", -1, 14, 95, 26, 8, WS_GROUP);
	CreerElement(hFenetre7, 0, WC_STATIC, "Commentaires", -1, 290, 7, 54, 10, WS_GROUP);
	CreerElement(hFenetre7, 0, WC_STATIC, "Fax", -1, 14, 62, 12, 8, WS_GROUP);
	CreerElement(hFenetre7, 0, WC_STATIC, "Telephone", -1, 14, 44, 35, 8, WS_GROUP);
	CreerElement(hFenetre7, 0, WC_STATIC, "Fournisseur", -1, 13, 15, 37, 8, WS_GROUP);
	CreerElement(hFenetre7, 0, WC_BUTTON, "&Modifier", IDC_BUTTON20, 171, 244, 30, 14, WS_TABSTOP);
	CreerElement(hFenetre7, 0, WC_COMBOBOX, NULL, IDC_COMBO1, 66, 28, 181, 30, CBS_DROPDOWN | CBS_SORT | WS_VSCROLL | WS_TABSTOP);
	CreerElement(hFenetre7, 0, WC_EDIT, "", IDC_EDIT6, 267, 89, 100, 12, ES_AUTOHSCROLL | WS_BORDER | WS_TABSTOP);
	CreerElement(hFenetre7, 0, WC_BUTTON, "Ajouter", IDC_BUTTON6, 245, 182, 27, 14, WS_TABSTOP);
	CreerElement(hFenetre7, 0, WC_BUTTON, "Supprimer", IDC_BUTTON7, 311, 182, 36, 14, WS_TABSTOP);
	CreerElement(hFenetre7, 0, WC_EDIT, "", IDC_EDIT8, 265, 129, 102, 12, ES_AUTOHSCROLL | WS_BORDER | WS_TABSTOP);
	CreerElement(hFenetre7, 0, WC_EDIT, "", IDC_EDIT9, 265, 142, 101, 12, ES_AUTOHSCROLL | WS_BORDER | WS_TABSTOP);
	CreerElement(hFenetre7, 0, WC_BUTTON, "Enregistrer", IDC_BUTTON8, 273, 182, 38, 14, WS_TABSTOP);
	CreerElement(hFenetre7, 0, WC_EDIT, "", IDC_EDIT10, 267, 102, 99, 12, ES_AUTOHSCROLL | WS_BORDER | WS_TABSTOP);
	CreerElement(hFenetre7, 0, WC_EDIT, "", IDC_EDIT11, 267, 114, 33, 12, ES_AUTOHSCROLL | WS_BORDER | WS_TABSTOP);
	CreerElement(hFenetre7, 0, WC_EDIT, "", IDC_EDIT12, 223, 164, 146, 12, ES_AUTOHSCROLL | WS_BORDER | WS_TABSTOP);
	CreerElement(hFenetre7, 0, WC_BUTTON, "A&nnuler", IDC_BUTTON9, 347, 182, 29, 14, WS_TABSTOP);
	CreerElement(hFenetre7, 0, WC_EDIT, "", IDC_EDIT14, 223, 76, 143, 12, ES_AUTOHSCROLL | WS_BORDER | WS_VISIBLE | WS_TABSTOP);
	CreerElement(hFenetre7, 0, WC_STATIC, "Titre ", -1, 223, 89, 17, 8, WS_GROUP);
	CreerElement(hFenetre7, 0, WC_STATIC, "Telephone", -1, 223, 103, 35, 8, WS_GROUP);
	CreerElement(hFenetre7, 0, WC_STATIC, "Cellulaire", -1, 225, 129, 29, 8, WS_GROUP);
	CreerElement(hFenetre7, 0, WC_STATIC, "Fax", -1, 225, 142, 12, 8, WS_GROUP);
	CreerElement(hFenetre7, 0, WC_STATIC, "E-Mail", -1, 223, 153, 20, 8, WS_GROUP);
	CreerElement(hFenetre7, 0, WC_STATIC, "Poste", -1, 225, 116, 19, 8, WS_GROUP);
	CreerElement(hFenetre7, 0, WC_STATIC, "Nom du contact", -1, 223, 65, 52, 8, WS_GROUP);
}
void CreerInterfaceContacts()
{
	SetWindowText(hFenetre8, NULL);
	CreerElement(hFenetre8, 0, WC_BUTTON, "Ajouter a la diffusion", IDC_BUTTON1, 245, 268, 75, 20, 0);
	CreerElement(hFenetre8, 0, WC_EDIT, "", IDC_EDIT1, 64, 70, 273, 12, ES_AUTOHSCROLL | WS_BORDER);
	CreerElement(hFenetre8, 0, WC_EDIT, "", IDC_EDIT2, 64, 98, 262, 12, ES_AUTOHSCROLL | WS_BORDER);
	CreerElement(hFenetre8, 0, WC_EDIT, "", IDC_EDIT3, 64, 217, 262, 26, ES_AUTOHSCROLL | WS_BORDER);
	CreerElement(hFenetre8, 0, WC_BUTTON, "Envoyer Fax", IDC_BUTTON2, 325, 268, 49, 20, 0);
	CreerElement(hFenetre8, 0, WC_BUTTON, "&Copier", IDC_BUTTON3, 64, 268, 43, 20, 0);
	CreerElement(hFenetre8, 0, WC_EDIT, "", IDC_EDIT4, 64, 143, 262, 12, ES_AUTOHSCROLL | WS_BORDER);
	CreerElement(hFenetre8, 0, WC_BUTTON, "Rafraîchir", IDC_BUTTON4, 0, 0, 43, 10, 0);
	CreerElement(hFenetre8, 0, WC_BUTTON, "&Impression", IDC_BUTTON6, 5, 268, 49, 20, 0);
	CreerElement(hFenetre8, 0, WC_EDIT, "", IDC_EDIT5, 64, 128, 262, 12, ES_AUTOHSCROLL | WS_BORDER);
	CreerElement(hFenetre8, 0, WC_BUTTON, "&Modifier", IDC_BUTTON7, 203, 268, 38, 20, 0);
	CreerElement(hFenetre8, 0, WC_EDIT, "", IDC_EDIT7, 64, 202, 262, 12, ES_AUTOHSCROLL | WS_BORDER);
	CreerElement(hFenetre8, 0, WC_EDIT, "", IDC_EDIT8, 64, 187, 262, 12, ES_AUTOHSCROLL | WS_BORDER);
	CreerElement(hFenetre8, 0, WC_EDIT, "", IDC_EDIT9, 64, 172, 262, 12, ES_AUTOHSCROLL | WS_BORDER);
	CreerElement(hFenetre8, 0, WC_EDIT, "", IDC_EDIT10, 64, 158, 262, 12, ES_AUTOHSCROLL | WS_BORDER);
	CreerElement(hFenetre8, 0, WC_EDIT, "", IDC_EDIT11, 64, 113, 262, 12, ES_AUTOHSCROLL | WS_BORDER);
	CreerElement(hFenetre8, 0, WC_EDIT, "", IDC_EDIT12, 64, 84, 262, 12, ES_AUTOHSCROLL | WS_BORDER);
	CreerElement(hFenetre8, 0, WC_BUTTON, "&Supprimer", IDC_BUTTON8, 155, 268, 43, 20, 0);
	CreerElement(hFenetre8, 0, WC_BUTTON, "&Ajouter", IDC_BUTTON9, 112, 268, 38, 20, 0);
	CreerElement(hFenetre8, 0, WC_BUTTON, "&Fermer", IDC_BUTTON10, 379, 268, 43, 20, 0);
	CreerElement(hFenetre8, WS_EX_STATICEDGE, WC_LISTVIEW, NULL, IDC_LIST1, 0, 10, 415, 50, LVS_REPORT | LVS_SINGLESEL | LVS_SHOWSELALWAYS | LVS_NOLABELWRAP | LVS_AUTOARRANGE | LVS_EDITLABELS | WS_BORDER);
}
void CreerInterfaceComptabilité()
{
	SetWindowText(hFenetre9, NULL);

}
void CreerInterfacePropos()
{
	SetWindowText(hFenetre10, NULL);
	CreerElement(hFenetre10, 0, WC_STATIC, NULL, IDI_MAIN, IDC_MYICON, 14, 9, 20, 20);
	CreerElement(hFenetre10, 0, WC_STATIC, "Démo Gestion Entreprise 1.25", -1, 40, 10, 119, 8, SS_NOPREFIX);
	CreerElement(hFenetre10, 0, WC_STATIC, "Copyright (C) 2022-2025\nPatrice Waechter-Ebling", -1, 40, 20, 119, 18, 0);
}

void CreerInterfaceClients()
{
	SetWindowText(hFenetre6, NULL);
	CreerElement(hFenetre6, 0, WC_EDIT, NULL, IDC_EDIT2, 65, 202, 86, 12, ES_AUTOHSCROLL | WS_BORDER | WS_TABSTOP);
	CreerElement(hFenetre6, 0, WC_EDIT, NULL, IDC_EDIT3, 65, 185, 86, 12, ES_AUTOHSCROLL | WS_BORDER | WS_TABSTOP);
	CreerElement(hFenetre6, 0, WC_EDIT, NULL, IDC_EDIT4, 64, 17, 182, 12, ES_AUTOHSCROLL | WS_BORDER | WS_TABSTOP);
	CreerElement(hFenetre6, 0, WC_BUTTON, "Rafraîchir", IDC_BUTTON4, 69, 6, 43, 10, WS_TABSTOP);
	CreerElement(hFenetre6, 0, WC_EDIT, NULL, IDC_EDIT6, 257, 106, 100, 12, ES_AUTOHSCROLL | WS_BORDER | WS_TABSTOP);
	CreerElement(hFenetre6, 0, WC_BUTTON, "Ajouter", IDC_BUTTON6, 235, 198, 27, 14, WS_TABSTOP);
	CreerElement(hFenetre6, 0, WC_BUTTON, "Supprimer", IDC_BUTTON7, 311, 198, 36, 14, WS_TABSTOP);
	CreerElement(hFenetre6, 0, WC_EDIT, NULL, IDC_EDIT8, 256, 146, 102, 12, ES_AUTOHSCROLL | WS_BORDER | WS_TABSTOP);
	CreerElement(hFenetre6, 0, WC_EDIT, NULL, IDC_EDIT9, 256, 159, 101, 12, ES_AUTOHSCROLL | WS_BORDER | WS_TABSTOP);
	CreerElement(hFenetre6, 0, WC_BUTTON, "Enregistrer", IDC_BUTTON8, 263, 198, 38, 14, WS_TABSTOP);
	CreerElement(hFenetre6, 0, WC_EDIT, NULL, IDC_EDIT10, 257, 118, 99, 12, ES_AUTOHSCROLL | WS_BORDER | WS_TABSTOP);
	CreerElement(hFenetre6, 0, WC_EDIT, NULL, IDC_EDIT11, 257, 131, 33, 12, ES_AUTOHSCROLL | WS_BORDER | WS_TABSTOP);
	CreerElement(hFenetre6, 0, WC_EDIT, NULL, IDC_EDIT12, 214, 180, 146, 12, ES_AUTOHSCROLL | WS_BORDER | WS_TABSTOP);
	CreerElement(hFenetre6, 0, WC_EDIT, NULL, IDC_EDIT14, 213, 92, 143, 12, ES_AUTOHSCROLL | WS_BORDER | WS_VISIBLE | WS_TABSTOP);
	CreerElement(hFenetre6, 0, WC_STATIC, "Titre ", -1, 213, 106, 17, 8, 0);
	CreerElement(hFenetre6, 0, WC_STATIC, "Telephone", -1, 213, 120, 35, 8, 0);
	CreerElement(hFenetre6, 0, WC_STATIC, "Cellulaire", -1, 215, 145, 29, 8, 0);
	CreerElement(hFenetre6, 0, WC_STATIC, "Fax", -1, 215, 159, 12, 8, 0);
	CreerElement(hFenetre6, 0, WC_STATIC, "E-Mail", -1, 213, 170, 20, 8, 0);
	CreerElement(hFenetre6, 0, WC_STATIC, "Poste", -1, 215, 133, 19, 8, 0);
	CreerElement(hFenetre6, 0, WC_STATIC, "Nom du contact", -1, 213, 81, 52, 8, 0);
	CreerElement(hFenetre6, 0, WC_BUTTON, "&Impression", IDC_BUTTON10, 5, 251, 38, 14, WS_TABSTOP);
	CreerElement(hFenetre6, 0, WC_BUTTON, "Renommer", IDC_BUTTON11, 112, 6, 43, 10, WS_TABSTOP);
	CreerElement(hFenetre6, 0, WC_BUTTON, "&Ajouter", IDC_BUTTON12, 150, 256, 27, 14, WS_TABSTOP);
	CreerElement(hFenetre6, 0, WC_BUTTON, "&Supprimer", IDC_BUTTON13, 261, 256, 36, 14, WS_TABSTOP);
	CreerElement(hFenetre6, 0, WC_BUTTON, "Enregistrer", IDC_BUTTON15, 213, 256, 38, 14, WS_TABSTOP);
	CreerElement(hFenetre6, 0, WC_EDIT, NULL, IDC_EDIT15, 65, 150, 86, 12, ES_AUTOHSCROLL | WS_BORDER | WS_TABSTOP);
	CreerElement(hFenetre6, 0, WC_EDIT, NULL, IDC_EDIT16, 65, 167, 86, 12, ES_AUTOHSCROLL | WS_BORDER | WS_TABSTOP);
	CreerElement(hFenetre6, 0, WC_EDIT, NULL, IDC_EDIT17, 65, 133, 86, 12, ES_AUTOHSCROLL | WS_BORDER | WS_TABSTOP);
	CreerElement(hFenetre6, 0, WC_EDIT, NULL, IDC_EDIT18, 65, 116, 86, 12, ES_AUTOHSCROLL | WS_BORDER | WS_TABSTOP);
	CreerElement(hFenetre6, 0, WC_EDIT, NULL, IDC_EDIT19, 65, 98, 113, 12, ES_AUTOHSCROLL | WS_BORDER | WS_TABSTOP);
	CreerElement(hFenetre6, 0, WC_EDIT, NULL, IDC_EDIT20, 266, 17, 118, 30, ES_AUTOHSCROLL | WS_BORDER | WS_TABSTOP);
	CreerElement(hFenetre6, 0, WC_EDIT, NULL, IDC_EDIT21, 65, 81, 86, 12, ES_AUTOHSCROLL | WS_BORDER | WS_TABSTOP);
	CreerElement(hFenetre6, 0, WC_EDIT, NULL, IDC_EDIT22, 65, 64, 86, 12, ES_AUTOHSCROLL | WS_BORDER | WS_TABSTOP);
	CreerElement(hFenetre6, 0, WC_EDIT, NULL, IDC_EDIT23, 65, 47, 86, 12, ES_AUTOHSCROLL | WS_BORDER | WS_TABSTOP);
	CreerElement(hFenetre6, 0, WC_STATIC, "Categorie", -1, 12, 32, 31, 8, 0);
	CreerElement(hFenetre6, 0, WC_STATIC, "Création :", -1, 12, 222, 31, 8, 0);
	CreerElement(hFenetre6, 0, WC_STATIC, "Modification :", -1, 111, 220, 43, 8, 0);
	CreerElement(hFenetre6, 0, WC_STATIC, "14-01-2022", -1, 65, 219, 43, 12, WS_BORDER);
	CreerElement(hFenetre6, 0, WC_STATIC, "14-01-2022", -1, 157, 220, 43, 12, WS_BORDER);
	CreerElement(hFenetre6, 0, WC_STATIC, "E-Mail", -1, 12, 202, 20, 8, 0);
	CreerElement(hFenetre6, 0, WC_STATIC, "Site Web", -1, 12, 185, 30, 8, 0);
	CreerElement(hFenetre6, 0, WC_STATIC, "Interlocuteur", -1, 12, 81, 40, 8, 0);
	CreerElement(hFenetre6, 0, WC_STATIC, "Pays", -1, 12, 150, 16, 8, 0);
	CreerElement(hFenetre6, 0, WC_STATIC, "Code Postal", -1, 12, 167, 39, 8, 0);
	CreerElement(hFenetre6, 0, WC_STATIC, "Province", -1, 12, 133, 32, 8, 0);
	CreerElement(hFenetre6, 0, WC_STATIC, "Ville", -1, 12, 116, 14, 8, 0);
	CreerElement(hFenetre6, 0, WC_STATIC, "Adresse", -1, 12, 98, 26, 8, 0);
	CreerElement(hFenetre6, 0, WC_STATIC, "Commentaires", -1, 288, 9, 54, 10, 0);
	CreerElement(hFenetre6, 0, WC_STATIC, "Fax", -1, 12, 64, 12, 8, 0);
	CreerElement(hFenetre6, 0, WC_STATIC, "Telephone", -1, 12, 47, 35, 8, 0);
	CreerElement(hFenetre6, 0, WC_STATIC, "Client", -1, 11, 17, 18, 8, 0);
	CreerElement(hFenetre6, 0, WC_BUTTON, "&Modifier", IDC_BUTTON20, 182, 256, 30, 14, WS_TABSTOP);
	CreerElement(hFenetre6, 0, WC_COMBOBOX, NULL, IDC_COMBO1, 64, 31, 181, 30, CBS_DROPDOWN | CBS_SORT | WS_VSCROLL | WS_TABSTOP);

}
/*
	DEFPUSHBUTTON   "&Fermer",IDOK,127,56,30,11,WS_GROUP
*/