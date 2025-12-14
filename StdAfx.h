// stdafx.h : include file for standard system include files,
//  or project specific include files that are used frequently, but
//      are changed infrequently
//

#if !defined(AFX_STDAFX_H__A9DB83DB_A9FD_11D0_BFD1_444553540000__INCLUDED_)
#define AFX_STDAFX_H__A9DB83DB_A9FD_11D0_BFD1_444553540000__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#define DBINITCONSTANTS 

#define WIN32_LEAN_AND_MEAN		// Exclude rarely-used stuff from Windows headers
#ifdef  _WIN32
#define titre "Démo Gestion Entreprise C++ Natif 32 bits"
#else
#define titre "Démo Gestion Entreprise C++ Natif 64 bits"
#endif //  _WIN32

#include <windows.h>
#include <commctrl.h>
#include <wingdi.h>
#include <shellapi.h>
#include <windowsx.h>
#include <stdio.h>
#include <aclapi.h>
#include <tchar.h>
#include <stdlib.h>
#include <memory.h>
#include <string.h>
#include <math.h>
#include <malloc.h>
#include <Winuser.h>
#include <shlobj.h>
#include <shlwapi.h>
#include <Lzexpand.h>
#include <assert.h> 
#include <Commdlg.h>
#include <conio.h>
#include <crtdbg.h>
#include <direct.h>
#include <exdisp.h>
#include <mshtml.h>
#include <mshtmhst.h>
#include <process.h>
#include <Wininet.h>
#include <tlhelp32.h>
#include <vdmdbg.h>
#include <time.h>
#include <iostream>
#include <sqlext.h>
#include<cstdio>
#include <vector>
#include <tuple>
#include <string>
#define DBINITCONSTANTS 
#include <sql.h>
#include <oledb.h>
#include <oledberr.h>
#include <atlbase.h>
#import "C:\\Program Files\\Common Files\\System\\ado\\msado15.dll" \
   rename("EOF", "EndOfFile")  no_namespace
#include "resource.h"

typedef unsigned char	BYTE;
typedef unsigned short	WORD;
typedef unsigned long	DWORD;

#pragma comment(lib,"ole32")
#pragma comment(lib,"oleaut32")
#pragma comment(lib,"odbc32")
#pragma comment (lib,"ddraw.lib")
#pragma comment(lib,"User32.lib")
#pragma comment(lib,"comctl32.lib")
#pragma comment(lib,"Lz32.lib")
#pragma comment(lib,"shlwapi.lib")
#pragma comment(lib,"wininet.lib")
#pragma comment(lib, "advapi32.lib")
#pragma warning(disable:4996)
#pragma warning(disable:2011)
#pragma warning(disable:4005)
#pragma warning(disable:6303)
#pragma warning(disable:4477)
#pragma warning(disable:6031)


#ifdef BORLANDC
#include <string.h>
#include <ctype.h>
#endif
enum { ERR_NONE = 0, ERR_VAR_CODE_NULL, ERR_CODE_INCOMPATIBLE, ERR_BAD_FORMAT_SIZE, ERR_SIZE_LESS, ERR_CODE_TRUNCATE };
#define IDC_TABCONTROL 1001
#define IDB_IMAGE 102
#define ID_TOOLBAR 5001
#define ID_BUTTON1 1001
#define ID_BUTTON2 1002
#define IDC_IMAGE        200
#define IDC_DECODE       201
#define IDC_EDIT         202
#define IDC_EDITRES      203
#define IDC_BINARY       204
#define IDC_CHECKDIGIT   205
#define IDC_PRINT        206
#define IDC_COPY         207
#define IDC_HZOOMUP      208
#define IDC_HZOOMDOWN    209
#define IDC_VZOOMUP      210
#define IDC_VZOOMDOWN    211
#define IDC_FILECLOSE    212
#define IDC_FILEHELP     213
#define IDC_ABOUTHELP    214
#define IDI_APPMAIN    100
#define IDD_PRINTSETUP 101
#define IDC_EDIT_LEFT   1000
#define IDC_EDIT_TOP    1001
#define IDC_EDIT_WIDTH  1002
#define IDC_EDIT_HEIGHT 1003
#define IDC_UD_LEFT     1004
#define IDC_UD_TOP      1005
#define IDC_UD_WIDTH    1006
#define IDC_UD_HEIGHT   1007
#define  TEXT_BTN1   "Binaire"
#define  TEXT_BTN2   "Caractère"
#define IDM_TIMER1 0x01000
#define IDM_TIMER1 0x01000
#define BUFSIZE			65536 
#define MAX_PATH		260
#define LWA_COLORKEY    0x00000001
#define LWA_ALPHA       0x00000002
#define ULW_COLORKEY    0x00000001
#define ULW_ALPHA       0x00000002
#define ULW_OPAQUE      0x00000004
#define WS_EX_LAYERED   0x00080000
#define INFO_BUFFER_SIZE 32767
#define DIR_PF    0
#define DIR_SYS   1
#define DIR_WIN   2
#define DIR_APP   3
#define TYPE_FILE      0
#define TYPE_FOLDER    1
#define WM_SAVEPAGE   (WM_USER+1)
#define  OUTSIDEPAGE 46
#define  UPPERPAGE   65
#define REGANSI_PATH_UNINSTALL "Software\\Microsoft\\Windows\\CurrentVersion\\Uninstall"
#define REGANSI_VAL_UNINSTALLER_DISPLAYNAME "DisplayName"
#define REGANSI_VAL_UNINSTALLER_COMMANDLINE "UninstallString"
#define UNINSTALL_EXE_NAME   "uninst.exe"
#define BUFSIZE			65536 
#define MAX_PATH		260
#define LWA_COLORKEY    0x00000001
#define LWA_ALPHA       0x00000002
#define ULW_COLORKEY    0x00000001
#define ULW_ALPHA       0x00000002
#define ULW_OPAQUE      0x00000004
#define WS_EX_LAYERED   0x00080000
#define INFO_BUFFER_SIZE 32767
#define MNS_NOCHECK         0x80000000
#define MNS_MODELESS        0x40000000
#define MNS_DRAGDROP        0x20000000
#define MNS_AUTODISMISS     0x10000000
#define MNS_NOTIFYBYPOS     0x08000000
#define MNS_CHECKORBMP      0x04000000
#define ERR_CLECHEMIN	1
#define ERR_NOM			2
#define ERR_FERMER		3
#define ERR_ECRIRE		4
#define ERR_CREERCLE	5
#define ERR_SUPRCLE		6
#define ERR_SUPRVAL		7

#define MIM_MAXHEIGHT               0x00000001
#define MIM_BACKGROUND              0x00000002
#define MIM_HELPID                  0x00000004
#define MIM_MENUDATA                0x00000008
#define MIM_STYLE                   0x00000010
#define MIM_APPLYTOSUBMENUS         0x80000000
#define KEY_DOWN(key) (GetAsyncKeyState(key) &0x8000)

#define ID_QUIT                         202
#define IDI_APPMAIN                     100
#define IDD_PRINTSETUP                  101
#define IDC_POINTER_COPY                105
#define IDD_DIALOG2                     119
#define IDB_BITMAP1                     132
#define IDR_VIEW                        134
#define IDC_CURSOR1                     135
#define IDC_IMAGE                       200
#define IDC_DECODE                      201
#define IDC_EDIT                        202
#define IDC_EDITRES                     203
#define IDC_BINARY                      204
#define IDC_CHECKDIGIT                  205
#define IDC_PRINT                       206
#define IDC_COPY                        207
#define IDC_HZOOMUP                     208
#define IDC_HZOOMDOWN                   209
#define IDC_VZOOMUP                     210
#define IDC_VZOOMDOWN                   211
#define IDC_FILECLOSE                   212
#define IDC_FILEHELP                    213
#define IDC_ABOUTHELP                   214
#define IDR_CONTEXT                     300
#define IDR_MENU                        301
#define IDC_EDIT_LEFT                   1000
#define ID_OPEN                         1000
#define IDM_ABOUT                       1001
#define IDC_EDIT_TOP                    1001
#define ID_OPEN_EXPLORE                 1001
#define IDC_EDIT_WIDTH                  1002
#define IDC_RESET                       1002
#define ID_EXPLORE                      1002
#define IDC_EDIT_HEIGHT                 1003
#define IDC_UD_LEFT                     1004
#define IDC_CHECK2                      1005
#define IDC_UD_TOP                      1005
#define IDC_CHECK3                      1006
#define IDC_UD_WIDTH                    1006
#define IDC_CHECK4                      1007
#define IDC_UD_HEIGHT                   1007
#define IDC_CHECK5                      1008
#define IDC_CHECK6                      1009
#define IDC_CHECK7                      1010
#define IDC_CHECK8                      1011
#define IDC_COMBO2                      1031
#define IDC_SAVE                        1032
#define IDC_COMBO3                      1033
#define IDC_SLIDER1                     1035
#define IDC_PROGRESS1                   1036
#define ID_NEW_FOLDER                   1100
#define ID_NEW_FILE                     1101
#define ID_DELETE                       1200
#define ID_RENOMME                      1201
#define ID_PRINT                        1202
#define ID_SPLIT                        2000
#define ID_LARGE                        5000
#define ID_SMALL                        5001
#define ID_LISTE                        5002
#define ID_VIEWTRANSFO_IMPRIMER         40001
#define ID_VIEWTRANSFO_EXPORTERCOMMEIMAGE 40002
#define ID_KERNEL_EXPLORATEUR           40003
#define ID_KERNEL_CREATEUREAN           40004
#define ID_CREATEUREAN_EAN13            40005
#define ID_CREATEUREAN_EAN39            40006
#define ID_CREATEUREAN_EAN128           40007
#define ID_KERNEL_UTILITAIRESSYSTEME    40008
#define ID_KERNEL_REGISTRE              40009
#define ID_KERNEL_TRANSFOTMATEURS       40010
#define ID_TRANSFOTMATEURS_NOUVEAUTEST  40011
#define ID_TRANSFOTMATEURS_EDITETUNTESTEXISTANT 40012
#define ID_ACTUALISE                    50003

struct __declspec(dllexport)Erreur {
	int numero;
	int style;
	char* description;
};
#define WS_DIALOGMOBILE WS_CHILD | WS_VISIBLE | WS_BORDER | WS_CAPTION | WS_DLGFRAME | WS_VSCROLL | WS_HSCROLL| DS_SETFONT | DS_3DLOOK | DS_CENTER | WS_SYSMENU | WS_THICKFRAME
#define WS_DIALOG WS_CHILD | WS_VISIBLE | WS_BORDER | DS_SETFONT | DS_3DLOOK | DS_CENTER 
static CHAR computerName[MAX_COMPUTERNAME_LENGTH + 1];
static const WORD cstTable39[] = { 0x0a6d,0x0d2b,0x0b2b,0x0d95,0x0a6b,0x0d35,0x0b35,0x0a5b,0x0d2d,0x0b2d,0x0d4b,0x0b4b,0x0da5,0x0acb,0x0d25,0x0b25,0x0a9b,0x0d4d,0x0b4d,0x0acd,0x0d53,0x0b53,0x0da9,0x0ad3,0x0d69,0x0b69,0x0ab3,0x0d59,0x0b59,0x0ad9,0x0cab,0x09ab,0x0cd5,0x096b,0x0cb5,0x09b5,0x095b,0x0cad,0x09ad,0x096d,0x0927,0x0929,0x0949,0x0a49 };
static const WORD cstTable128[] = { 0x0a6d,0x0d2b,0x0b2b,0x0d95,0x0a6b,0x0d35,0x0b35,0x0a5b,0x0d2d,0x0b2d,0x0d4b,0x0b4b,0x0da5,0x0acb,0x0d25,0x0b25,0x0a9b,0x0d4d,0x0b4d,0x0acd,0x0d53,0x0b53,0x0da9,0x0ad3,0x0d69,0x0b69,0x0ab3,0x0d59,0x0b59,0x0ad9,0x0cab,0x09ab,0x0cd5,0x096b,0x0cb5,0x09b5,0x095b,0x0cad,0x09ad,0x096d,0x0927,0x0929,0x0949,0x0a49 };
static const short cstMargin[4][2] = { 0, 190, 0, 280, 10, 200, 2, 100 };
static char* jours[7] = { "dimanche", "lundi","mardi","mercredi","jeudi","vendredi","samedi" };
static char* mois[12] = { "janvier", "février","mars", "avril", "mai", "juin","juillet","aout","septembre", "octobre", "novembre", "décembre" };
static HWND hMain, hStat, hToolbar, hTab, hFenetre1, hFenetre2, hFenetre3, hFenetre4, hFenetre5, hFenetre6, hFenetre7,
hFenetre8, hFenetre9, hFenetre10, hlv, hTree;
static WNDCLASS wc, wincl;
static TCITEM tie;
static HDC hdcScreen, hdcCompatible;
static HBITMAP hbmScreen, bmp, hbmScaled;
static BITMAP btmp;


//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.
void SetResultCode(HWND hDlg);
BOOL PreparePrint(HDC hdc, POINTFLOAT ptf, LPRECT lprc);
int GetAppLastError();
const char* ErrorString(int error);
const char* GetCodeString();
void SetBits(char** lppData, int* lpPos, WORD wCode, int len);
int Decode(const char* pszCode);
int GetApproximateStep(int width);
int GetMinimalHeight(HDC hdc, int step);
int CheckDigit(const char* pszCode, BOOL bComplet);
void Draw(HDC hdc, POINT pt, int height, int step);
int SetIndex(char car);
int GetApproximateWidth(int step);
int   Decode(const char*);
const char* GetCodeString();
int GetAppLastError();
const char* ErrorString(int);
PBITMAPINFO CreateBitmapInfoStruct(HWND hDlg, HBITMAP hBmp);
void CreateBMPFile(HWND hDlg, LPTSTR pszFile, PBITMAPINFO pbi, HBITMAP hBMP, HDC hDC);
void errhandler(LPCTSTR Texte, HWND hDlg);
void SetBits(char**, int*, WORD, int);
void Save2File(HWND hDlg, char* Fichier);
void LoadFromFile(char* Fichier);
int WriteCodeBare2Picture(HWND hDlg);
void CreatingSecurityDescriptor();
HICON IconFile(const char* pFile);
int AddImlListView(char* Path);
void AddIconIMG_List(HIMAGELIST& hIml, LPCTSTR lpIconName);
void InitTreeViewImageLists(void);
void InitTreeViewItems(void);
void InitListViewImageLists(void);
void ListerDisk(HTREEITEM hParent);
void ListerRepFile(char* Path, HTREEITEM hParent);
void RecupInfo(void);
int ListViewCas(void);
void OpenExplorePrint(char* Operation);
void OpenFolder(char* find);
void Delete(void);
bool Rename(NMLVDISPINFO* pnmv);
char* GetTextItemTree(HTREEITEM hitem);
void OnSelTree(void);
void EnableGrayMenu(HMENU hMenu, int Mode);
bool DoContextMenu(HWND hwnd, WPARAM wParam, LPARAM lParam);
void UpdateMenu(HWND hwndListView, HMENU hMenu);
void SwitchView(HWND hwndListView, DWORD dwView);
LRESULT CALLBACK SplitProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam);
void InitSplit(void);
void SplitInit(void);
void SetPosControls(void);
char* CreerTitrePrimaire();
void OnRegError(int nError);
bool FermerCle(HKEY hCle);
bool SupprimerValeur(char* base, char* chemin, char* nom);
bool SupprimerCle(char* base, char* chemin);
bool CreerCle(char* base, char* chemin, HKEY* hCle);
bool EcrireValeur(HKEY hCle, char* nom, char* valeur, char* type);
char* LireValeur(HKEY hCle, char* nom, BOOL* OpRes);
bool OuvrirCle(char* base, char* chemin, HKEY* hCle);
unsigned long ChoisirType(char* type);
HKEY ChoisirBase(char* base);
void InscrireRegistre();
void SetResultCode(HWND hwnd);
BOOL PreparePrint(HDC hdc, POINTFLOAT ptf, LPRECT lprc);
const char* ErrorString(int error);
void SetBits(char** lppData, int* lpPos, WORD wCode, int len);
int Decode(const char* pszCode);
int GetApproximateStep(int width);
int GetMinimalHeight(HDC hdc, int step);
int CheckDigit(const char* pszCode, BOOL bComplet);
void Draw(HDC hdc, POINT pt, int height, int step);
int SetIndex(char car);
int GetApproximateWidth(int step);
int   Decode(const char*);
const char* GetCodeString();
int GetAppLastError();
const char* ErrorString(int);
void errhandler(LPCTSTR Texte, HWND hwnd);
void SetBits(char**, int*, WORD, int);
void SetResultCode(HWND hwnd);
BOOL PreparePrint(HDC hdc, POINTFLOAT ptf, LPRECT lprc);
void InitControlTabulation();
void InitControlRubanOutils(int nbBoutons);
void CreerInterfaceClients();
void CreerInterfacePunch();
void CreerInterfaceEmployés();
void CreerInterfaceAchats();
void CreerInterfaceProjets();
void CreerInterfaceInventaire();
void CreerInterfaceFournisseurs();
void CreerInterfaceContacts();
void CreerInterfaceComptabilité();
void CreerInterfacePropos();
class  __declspec(dllexport)CDlgPrintSetup {
public:
	CDlgPrintSetup(LPRECT);
	~CDlgPrintSetup();
	int Create(HWND);

private:
	static BOOL CALLBACK DlgProc(HWND, UINT, WPARAM, LPARAM);
	BOOL MsgInitDialog(HWND, WPARAM, LPARAM);
	BOOL MsgCommand(HWND, WPARAM, LPARAM);
	BOOL MsgVScroll(HWND, WPARAM, LPARAM);
	BOOL MsgSysCommand(WPARAM);
	void CmdOk(HWND);
	HWND       m_hDlg;
	LPRECT     m_pRect;
};
#endif // !defined(AFX_STDAFX_H__A9DB83DB_A9FD_11D0_BFD1_444553540000__INCLUDED_)
