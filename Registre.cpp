#include "stdafx.h"
long returnValue;
unsigned long dwLen = 0;
double dwKeyEn = sizeof(long);
BOOL GestionErreur;
void InscrireRegistre() {
	char buffer[260];
	HKEY hClef;
	GetCurrentDirectory(256, buffer);
	CreerCle("HKEY_CLASSES_ROOT", "Software\\patdev", &hClef);
	EcrireValeur(hClef, "Path", (char*)buffer, "REG_SZ");
	EcrireValeur(hClef, "Commande", (char*)__argv[0], "REG_SZ");
	EcrireValeur(hClef, "Version", "2.23.47.0", "REG_SZ");
	CreerCle("HKEY_CLASSES_ROOT", "Software\\patdev\\Explorer\\Config", &hClef);
	OuvrirCle("HKEY_CLASSES_ROOT", "Software\\patdev\\Explorer\\Config", &hClef);
	EcrireValeur(hClef, "Nom", (char*)buffer, "REG_SZ");
	EcrireValeur(hClef, "Société", (char*)__argv[0], "REG_SZ");
	EcrireValeur(hClef, "Plateforme", "Explorer", "REG_SZ");
	EcrireValeur(hClef, "Version", "Explorer", "REG_SZ");
	EcrireValeur(hClef, "Clef", "wzjridsd4e4ex7d55dcvh2gf288ghb28b8f8rd4e455ww", "REG_SZ");
}
HKEY ChoisirBase(char* base) {
	HKEY tBase = 0;
	if (strcmp(base, "HKEY_CURRENT_USER") == 0)		tBase = HKEY_CURRENT_USER;
	else if (strcmp(base, "HKEY_USERS") == 0)		tBase = HKEY_USERS;
	else if (strcmp(base, "HKEY_LOCAL_MACHINE") == 0)tBase = HKEY_LOCAL_MACHINE;
	else if (strcmp(base, "HKEY_CURRENT_CONFIG") == 0)tBase = HKEY_CURRENT_CONFIG;
	else if (strcmp(base, "HKEY_CLASSES_ROOT") == 0)tBase = HKEY_CLASSES_ROOT;
	return tBase;
}
unsigned long ChoisirType(char* type) {
	unsigned long hResType = 0;
	if (strcmp(type, "REG_NONE") == 0)hResType = REG_NONE;
	else if (strcmp(type, "REG_SZ") == 0)hResType = REG_SZ;
	else if (strcmp(type, "REG_BINARY") == 0)hResType = REG_BINARY;
	else if (strcmp(type, "REG_DWORD") == 0)hResType = REG_DWORD;
	else if (strcmp(type, "REG_DWORD_BIG_ENDIAN") == 0)	hResType = REG_DWORD_BIG_ENDIAN;
	else if (strcmp(type, "REG_LINK") == 0)hResType = REG_LINK;
	else if (strcmp(type, "REG_MULTI_SZ") == 0)
		hResType = REG_MULTI_SZ;
	return hResType;
}
bool OuvrirCle(char* base, char* chemin, HKEY* hCle) {
	HKEY hTempCle = 0;
	returnValue = RegOpenKey(ChoisirBase(base), chemin, &hTempCle);
	if (returnValue != ERROR_SUCCESS) {
		if (GestionErreur)
			OnRegError(0x00);
		return false;
	}
	*hCle = hTempCle;
	return 	true;
}
char* LireValeur(HKEY hCle, char* nom, BOOL* OpRes) {
	returnValue = RegQueryValueEx(hCle, nom, NULL, NULL, NULL, &dwLen);
	returnValue = RegQueryValueEx(hCle, nom, NULL, NULL, (LPBYTE)&dwKeyEn, &dwLen);
	if (returnValue != ERROR_SUCCESS) {
		*OpRes = false;
		if (GestionErreur)
			OnRegError(0x01);
		return "Erreur!";
	}
	*OpRes = true;
	return (char*)&dwKeyEn;
}
bool EcrireValeur(HKEY hCle, char* nom, char* valeur, char* type) {
	returnValue = RegSetValueEx(hCle, nom, NULL, ChoisirType(type), (PBYTE)valeur, strlen(valeur));
	if (returnValue != ERROR_SUCCESS) {
		if (GestionErreur)
			OnRegError(0x03);
		return false;
	}
	return true;
}
bool CreerCle(char* base, char* chemin, HKEY* hCle) {
	HKEY hTempCle = 0;
	long returnValue = RegCreateKey(ChoisirBase(base), chemin, &hTempCle);
	if (returnValue != ERROR_SUCCESS) {
		if (GestionErreur)
			OnRegError(0x04);
		return false;
	}
	*hCle = hTempCle;
	return true;
}
bool SupprimerCle(char* base, char* chemin) {
	returnValue = RegDeleteKey(ChoisirBase(base), chemin);
	if (returnValue != ERROR_SUCCESS) {
		if (GestionErreur)
			OnRegError(ERR_SUPRCLE);
		return false;
	}
	return true;
}
bool SupprimerValeur(char* base, char* chemin, char* nom) {
	HKEY hTempCle = 0;
	if (!OuvrirCle(base, chemin, &hTempCle))
		return false;
	returnValue = RegDeleteValue(hTempCle, nom);
	if (returnValue != ERROR_SUCCESS) {
		if (GestionErreur)
			OnRegError(ERR_SUPRVAL);
		return false;
	}
	return true;
}
bool FermerCle(HKEY hCle) {
	returnValue = RegCloseKey(hCle);
	if (returnValue != ERROR_SUCCESS) {
		if (GestionErreur)
			OnRegError(0x02);
		return false;
	}
	return true;
}
void OnRegError(int nError) {
	Erreur err;
	switch (nError) {
	case 0x00:
		err.numero = 1;
		err.description = "La base et le chemin indiqués n'existe pas ou sont inaccessible!";
		err.style = MB_ICONSTOP;
		break;
	case 0x01:
		err.numero = 2;
		err.description = "Le nom indiqué n'existe pas ou est inaccessible!";
		err.style = MB_ICONSTOP;
		break;
	case 0x02:
		err.numero = 3;
		err.description = "La clé n'a pas pu être fermée!";
		err.style = MB_ICONSTOP;
		break;
	case 0x03:
		err.numero = 4;
		err.description = "La nouvelle valeur n'a pas pu être écrite!";
		err.style = MB_ICONSTOP;
		break;
	case 0x04:
		err.numero = 5;
		err.description = "Une erreur s'est produite! La clé n'a pas pu être créé!";
		err.style = MB_ICONSTOP;
		break;
	case 0x05:
		err.numero = 6;
		err.description = "La clé n'a pas pu être supprimé! Veuillez verifier la base et le chemin indiqué!";
		err.style = MB_ICONSTOP;
		break;
	case 0x06:
		err.numero = 7;
		err.description = "La valeur n'a pa pu être supprimé!\nLe nom de la clé indiqué n'existe pas! Veuillez verifier le nom!";
		err.style = MB_ICONSTOP;
	}
	MessageBox(0, err.description, "Registre", err.style);

}
