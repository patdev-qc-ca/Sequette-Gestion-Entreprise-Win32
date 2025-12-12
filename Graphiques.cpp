#include "stdafx.h"
PBITMAPINFO CreateBitmapInfoStruct(HWND hwnd, HBITMAP hBmp) {
	PBITMAPINFO pbmi;
	WORD    cClrBits;
	if (!GetObject(hBmp, sizeof(BITMAP), (LPSTR)&btmp))
		errhandler("GetObject", hwnd);
	cClrBits = (WORD)(btmp.bmPlanes * btmp.bmBitsPixel);
	if (cClrBits == 1)         cClrBits = 1;
	else if (cClrBits <= 4)    cClrBits = 4;
	else if (cClrBits <= 8)    cClrBits = 8;
	else if (cClrBits <= 16)   cClrBits = 16;
	else if (cClrBits <= 24)   cClrBits = 24;
	else cClrBits = 32;
	if (cClrBits != 24)  pbmi = (PBITMAPINFO)LocalAlloc(LPTR, sizeof(BITMAPINFOHEADER) + sizeof(RGBQUAD) * (1 << cClrBits));      else          pbmi = (PBITMAPINFO)LocalAlloc(LPTR, sizeof(BITMAPINFOHEADER));
	pbmi->bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
	pbmi->bmiHeader.biWidth = btmp.bmWidth;
	pbmi->bmiHeader.biHeight = btmp.bmHeight;
	pbmi->bmiHeader.biPlanes = btmp.bmPlanes;
	pbmi->bmiHeader.biBitCount = btmp.bmBitsPixel;
	if (cClrBits < 24) pbmi->bmiHeader.biClrUsed = (1 << cClrBits);
	pbmi->bmiHeader.biCompression = BI_RGB;
	pbmi->bmiHeader.biSizeImage = ((pbmi->bmiHeader.biWidth * cClrBits + 31) & ~31) / 8 * pbmi->bmiHeader.biHeight;
	pbmi->bmiHeader.biClrImportant = 0;
	return pbmi;
}
void CreateBMPFile(HWND hwnd, LPTSTR pszFile, PBITMAPINFO pbi, HBITMAP hBMP, HDC hDC) {
	HANDLE hf;
	BITMAPFILEHEADER hdr;
	PBITMAPINFOHEADER pbih;
	LPBYTE lpBits;
	DWORD dwTotal, cb, dwTmp;
	BYTE* hp;
	pbih = (PBITMAPINFOHEADER)pbi;
	lpBits = (LPBYTE)GlobalAlloc(GMEM_FIXED, pbih->biSizeImage);
	if (!lpBits)          errhandler("Alloction des tempons globaux", hwnd);
	if (!GetDIBits(hDC, hBMP, 0, (WORD)pbih->biHeight, lpBits, pbi, DIB_RGB_COLORS)) { errhandler("Détection des bist couleur de l'image", hwnd); }
	hf = CreateFile(pszFile, GENERIC_READ | GENERIC_WRITE, (DWORD)0, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, (HANDLE)NULL);
	if (hf == INVALID_HANDLE_VALUE) errhandler("Création du fichier Image", hwnd);
	hdr.bfType = 0x4d42;
	hdr.bfSize = (DWORD)(sizeof(BITMAPFILEHEADER) + pbih->biSize + pbih->biClrUsed * sizeof(RGBQUAD) + pbih->biSizeImage);
	hdr.bfReserved1 = 0;
	hdr.bfReserved2 = 0;
	hdr.bfOffBits = (DWORD)sizeof(BITMAPFILEHEADER) + pbih->biSize + pbih->biClrUsed * sizeof(RGBQUAD);
	if (!WriteFile(hf, (LPVOID)&hdr, sizeof(BITMAPFILEHEADER), (LPDWORD)&dwTmp, NULL)) { errhandler("Écriture du fichier Image", hwnd); }
	if (!WriteFile(hf, (LPVOID)pbih, sizeof(BITMAPINFOHEADER) + pbih->biClrUsed * sizeof(RGBQUAD), (LPDWORD)&dwTmp, (NULL)))   errhandler("Écriture du fichier Image", hwnd);
	dwTotal = cb = pbih->biSizeImage;
	hp = lpBits;
	if (!WriteFile(hf, (LPSTR)hp, (int)cb, (LPDWORD)&dwTmp, NULL))    errhandler("Écriture du fichier Image", hwnd);
	if (!CloseHandle(hf))     errhandler("Fermeture de la main", hwnd);
	GlobalFree((HGLOBAL)lpBits);
}
void AddIconIMG_List(HIMAGELIST& hIml, LPCTSTR lpIconName)
{
	HICON hIcon = LoadIcon(wc.hInstance, lpIconName);
	ImageList_AddIcon(hIml, hIcon); //Rajoute une icone a l'imagelist
	DeleteObject(hIcon);
}

