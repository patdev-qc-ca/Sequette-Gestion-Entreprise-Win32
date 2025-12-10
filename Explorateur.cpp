#include "stdafx.h"
HHOOK hhk = 0;     //Le hook
int Mode, LimitFolderFile, ItemSel;
int ListItem = 0;
int CreateNewDir = 0;
bool IsHookHere = false; // variable pour autoriser ou non le hook simplement (merci Aardman)
char poste[] = titre;
char szItemSel[256];  //va contenir le nom de l'item(icone) selectionné
char Adresse[256];    //va contenir le nom du dossier ou se trouve l'item(icone) selectionné
char Temporaire[256];
WNDPROC oldProcSplit;
HIMAGELIST himlSmall, himlLarge, himl, himl2;
void InitTreeViewImageLists(void)  //Initialisation de l'imagelist de la TreeView
{
	HIMAGELIST hImageList = ImageList_Create(16, 16, ILC_COLORDDB | ILC_MASK, 4, 0);

	AddIconIMG_List(hImageList, MAKEINTRESOURCE(104));
	AddIconIMG_List(hImageList, MAKEINTRESOURCE(105));
	AddIconIMG_List(hImageList, MAKEINTRESOURCE(112));
	AddIconIMG_List(hImageList, MAKEINTRESOURCE(103));

	SendDlgItemMessage(hMain, 1000, TVM_SETIMAGELIST, 0, (LPARAM)hImageList);
}

void InitTreeViewItems(void)   //Initialisation des items de la TreeView
{
	TV_INSERTSTRUCT tvinsert;
	tvinsert.hParent = NULL;
	tvinsert.hInsertAfter = TVI_ROOT;
	tvinsert.item.mask = TVIF_TEXT | TVIF_IMAGE | TVIF_SELECTEDIMAGE;
	tvinsert.item.pszText = titre;
	tvinsert.item.iImage = tvinsert.item.iSelectedImage = 3;
	SendDlgItemMessage(hMain, 1000, TVM_INSERTITEM, 0, (LPARAM)&tvinsert);
}

void InitListViewImageLists(void)   //Initialisation de l'imagelist de la LisView
{
	AddIconIMG_List(himlSmall, MAKEINTRESOURCE(112));
	AddIconIMG_List(himlLarge, MAKEINTRESOURCE(112));
	AddIconIMG_List(himlSmall, MAKEINTRESOURCE(105));
	AddIconIMG_List(himlLarge, MAKEINTRESOURCE(104));

	SendDlgItemMessage(hMain, 1001, LVM_SETIMAGELIST, LVSIL_SMALL, (LPARAM)himlSmall);
	SendDlgItemMessage(hMain, 1001, LVM_SETIMAGELIST, LVSIL_NORMAL, (LPARAM)himlLarge);
}
int ImlListView(char* Path)
{
	SHFILEINFO sfi;
	ZeroMemory(&sfi, sizeof(SHFILEINFO));
	himl = (HIMAGELIST)SHGetFileInfo(Path, 0, &sfi, sizeof(SHFILEINFO), SHGFI_SYSICONINDEX | SHGFI_SMALLICON);
	himl2 = (HIMAGELIST)SHGetFileInfo(Path, 0, &sfi, sizeof(SHFILEINFO), SHGFI_SYSICONINDEX | SHGFI_LARGEICON);
	SendMessage(hlv, LVM_SETIMAGELIST, LVSIL_SMALL, (LPARAM)himl); // envoie l'imagelist à la listview
	SendMessage(hlv, LVM_SETIMAGELIST, LVSIL_NORMAL, (LPARAM)himl2); // envoie l'imagelist à la listview
	return sfi.iIcon; // retourne l'id de l'îcone
}
void ListerDisk(HTREEITEM hParent)   // Fonction qui va lister tous les Disques Durs presents sur le PC
{
	char atchDrives[150];
	char* ptchDrive = NULL;

	//Initialisation de la Structure de la TreeView
	TV_INSERTSTRUCT tvinsert;
	tvinsert.hParent = hParent;
	tvinsert.hInsertAfter = TVI_ROOT;
	tvinsert.item.mask = TVIF_TEXT | TVIF_IMAGE | TVIF_SELECTEDIMAGE;
	tvinsert.item.iImage = tvinsert.item.iSelectedImage = 2;

	//Initialisation de la Structure de la ListView
	LVITEM LvItem;
	LvItem.mask = LVIF_TEXT | LVIF_IMAGE | LVIF_PARAM | LVIF_STATE;
	LvItem.state = 0;
	LvItem.stateMask = 0;
	LvItem.iSubItem = 0;

	if (GetLogicalDriveStrings(sizeof(atchDrives), atchDrives))
	{
		if (strlen(atchDrives) > 0)
		{
			ptchDrive = atchDrives;
			do
			{
				if ((GetDriveType(ptchDrive)) == DRIVE_FIXED) //Verifie que c'est bien un Disque Dur
				{
					tvinsert.item.pszText = ptchDrive;  //Nom de l'item(TreeView) = lettre du DD
					SendDlgItemMessage(hMain, 1000, TVM_INSERTITEM, 0, (LPARAM)&tvinsert); //Insertion de l'item

					LvItem.iItem = ListItem;   //Numero de l'item
					LvItem.pszText = ptchDrive;  //Nom de l'item(ListView) = lettre du DD
					LvItem.cchTextMax = strlen(ptchDrive);
					LvItem.iImage = ImlListView(ptchDrive);
					int test = SendDlgItemMessage(hMain, 1001, LVM_INSERTITEM, 0, (LPARAM)&LvItem);  //Insertion de l'item
					ListItem++;  //on incremente Le Numero de l'item
				}

				// Passe au lecteur suivant
				do ++ptchDrive;
				while (*ptchDrive);
				++ptchDrive;

			} while (strlen(ptchDrive));
		}
	}
	LimitFolderFile = ListItem;
}

void ListerRepFile(char* Path, HTREEITEM hParent)   // Fonction qui va lister tous les Dossiers en fonction du chemin d'acces(string Path)
{
	bool bRestart = false;

	TV_INSERTSTRUCT tvinsert;
	tvinsert.hParent = hParent;
	tvinsert.hInsertAfter = TVI_ROOT;
	tvinsert.item.mask = TVIF_TEXT | TVIF_IMAGE | TVIF_SELECTEDIMAGE;
	tvinsert.item.iImage = 0;
	tvinsert.item.iSelectedImage = 1;

	LVITEM LvItem;
	LvItem.mask = LVIF_TEXT | LVIF_IMAGE | LVIF_PARAM | LVIF_STATE;
	LvItem.state = 0;
	LvItem.stateMask = 0;
	LvItem.iSubItem = 0;
	LvItem.iImage = 1;

Restart:
	WIN32_FIND_DATA wData;
	HANDLE listing;
	listing = FindFirstFile(Path, &wData);
	if (listing == INVALID_HANDLE_VALUE)
		return;

	int bList = true;
	while (bList)
	{
		LvItem.iItem = ListItem;
		char szImlListView[256];
		if (wData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) //Verifie que c'est bien un Dossier
		{
			if (strcmp(wData.cFileName, ".") != 0 && strcmp(wData.cFileName, "..") != 0 && !bRestart)
			{
				tvinsert.item.pszText = wData.cFileName;
				SendDlgItemMessage(hMain, 1000, TVM_INSERTITEM, 0, (LPARAM)&tvinsert);
				LvItem.pszText = wData.cFileName;
				sprintf(szImlListView, "%s\\%s", Adresse, wData.cFileName);
				LvItem.iImage = ImlListView(szImlListView);
				SendDlgItemMessage(hMain, 1001, LVM_INSERTITEM, 0, (LPARAM)&LvItem);
				ListItem++;
			}
		}
		else
		{
			if (bRestart)
			{
				LvItem.pszText = wData.cFileName;
				sprintf(szImlListView, "%s\\%s", Adresse, wData.cFileName);
				LvItem.iImage = ImlListView(szImlListView);
				SendDlgItemMessage(hMain, 1001, LVM_INSERTITEM, 0, (LPARAM)&LvItem);
				ListItem++;
			}
		}
		bList = FindNextFile(listing, &wData);
	}
	FindClose(listing);

	if (!bRestart)
	{
		bRestart = true;
		LimitFolderFile = ListItem;
		goto Restart;
	}
}

void Actualize()
{
	UINT MenuDefaultItem;
	MenuDefaultItem = ID_ACTUALISE;
	FORWARD_WM_COMMAND(hMain, MenuDefaultItem,
		GetDlgItem(hMain, MenuDefaultItem), BN_CLICKED, SendMessage); //Simule un clique sur le menu contextuel
}

int InfoNewFolder()//Fonction pour recherche cb il existe de "Nouveau dossier" dans le repertoire
{
	int i = 0;
	char Cur[256];
	char* c;
	char* d;
	c = Adresse;
	d = Cur;
	while (*d = *c++) d++;//On copie Adresse dans Cur
	strcat(Cur, "\\Nouveau dossier*");

	WIN32_FIND_DATA wData;
	HANDLE listing;

	listing = FindFirstFile(Cur, &wData);
	if (listing == INVALID_HANDLE_VALUE)
	{
		return 0;
	}
	else
	{
		do
		{
			if (wData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) //Verifie que c'est bien un Dossier
			{
				i++;
			}
		} while (FindNextFile(listing, &wData));
	}
	FindClose(listing);
	return i;
}

void CalculeLongueurEdit(HWND hDlg, char Path[], int& cxCli, int& cyCli)
{
	HDC hdc = GetDC(hDlg);
	SIZE size;
	GetTextExtentPoint32(hdc, Path, strlen(Path), &size);
	cxCli = size.cx;
	cyCli = size.cy;
	ReleaseDC(hDlg, hdc);
}

bool DeleteFileAndDirectory(char Path[]) //Pour supprime de maniere recursive tous les sous-repertoires et le fichiers d'un dossier
{
	char Suite[256];
	char CurDir[256];

	strcpy(CurDir, Path); strcat(CurDir, "\\*.*");
	int bList = true;

	if (SetCurrentDirectory(Path) == FALSE)//On met Path en tant que repertoire courant
		return false;

	//FindFiles(Path);

	WIN32_FIND_DATA wData;
	HANDLE listing;
up:
	listing = FindFirstFile(CurDir, &wData);
	if (listing == INVALID_HANDLE_VALUE)
	{
		if (!RemoveDirectory(Path))
			return false;
	}
	else
	{
		do
		{
			if (strcmp(wData.cFileName, ".") != 0 && strcmp(wData.cFileName, "..") != 0)
			{
				memset(Suite, 0, sizeof(Suite));
				sprintf(Suite, "%s\\%s", Path, wData.cFileName);

				if (wData.dwFileAttributes & FILE_ATTRIBUTE_READONLY)//Si c'ets en lecture seule
				{
					memset(Temporaire, 0, sizeof(Temporaire));
					strcpy(Temporaire, "Le fichier \""); strcat(Temporaire, Suite); strcat(Temporaire, "\"est en lecture seule");
					//DialogBox(hInst, MAKEINTRESOURCE(IDD_SUPPRIME), hMain, (DLGPROC)DlgConfirmationSuppression);
					SetFileAttributes(Suite, ~FILE_ATTRIBUTE_READONLY);//on enleve la lecture seule
				}

				if (wData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) //Verifie que c'est bien un Dossier
				{
					FindClose(listing);
					DeleteFileAndDirectory(Suite);//on rappelle la fonction(recusivite)
					goto up;
				}
				else
				{
					if (!DeleteFile(Suite))
						return 0;
				}
			}
		} while (FindNextFile(listing, &wData));
	}
	int g = FindClose(listing);
	//On met c: en repertoire courant, pour ne pas avoir de probleme lros de la suppresion du repertoire avec RemoveDirectory()
	SetCurrentDirectory("c:\\");
	if (!RemoveDirectory(Path))
		return 0;

	return true;
}
// Util

void RecupInfo(void)   //fonction qui va recuperer le nom et le numero de L'item selectionné
{
	HWND GFocus = GetFocus();
	HTREEITEM Selected = (HTREEITEM)SendMessage(hTree, TVM_GETNEXTITEM, TVGN_CARET, 0);
	char szItemSelTemp[MAX_PATH] = "";

	if (GFocus == hlv)
	{
		ItemSel = ListView_GetNextItem(hlv, -1, LVNI_SELECTED);
		ListView_GetItemText(hlv, ItemSel, 0, szItemSelTemp, sizeof(szItemSelTemp));
		strcpy(szItemSel, szItemSelTemp);
	}
	else if (GFocus == hTree)
	{
		strcpy(szItemSel, GetTextItemTree(Selected));
		ItemSel = -10;
	}

}

int ListViewCas(void)
{
	int lvCas;
	RecupInfo();
	if (Adresse != poste)  //Verifie qu'on est pas dans "Poste de travail"
	{
		if (ItemSel >= 0 && ItemSel < LimitFolderFile)  //Si c'est un repertoire
			lvCas = 4;
		else if (ItemSel >= LimitFolderFile && ItemSel <= ListItem) //Si c'est un fichier
			lvCas = 3;
		else
			lvCas = 2;
	}
	else
	{
		if (ItemSel >= 0 && ItemSel < LimitFolderFile)  //Si c'est un repertoire
			lvCas = 1;
		else
			lvCas = 0;
	}
	return lvCas;
}

char* GetTextItemTree(HTREEITEM hitem)
{
	TV_ITEM tvi;
	char Text[MAX_PATH] = "";
	tvi.mask = TVIF_TEXT;
	tvi.pszText = Text;
	tvi.cchTextMax = MAX_PATH;
	tvi.hItem = hitem;
	SendDlgItemMessage(hMain, 1000, TVM_GETITEM, TVGN_CARET, (LPARAM)&tvi);
	return Text;
}

void OpenExplorePrint(char* Operation)
{
	RecupInfo();
	if (ItemSel >= LimitFolderFile && ItemSel <= ListItem || strcmp(Operation, "openfolder") == 0 || strcmp(Operation, "explore") == 0)
	{
		char Path[256];
		if (strcmp(Adresse, poste) == 0)
			strcpy(Path, szItemSel);
		else
			sprintf(Path, "%s\\%s", Adresse, szItemSel);
		if (strcmp(Operation, "openfolder") == 0)
		{
			memset(Operation, 0, sizeof(Operation));
			Operation = "open";
		}
		ShellExecute(hMain, Operation, Path, 0, Adresse, SW_NORMAL);
	}
	else if (ItemSel >= 0 && ItemSel < LimitFolderFile)
		OpenFolder(szItemSel);
}

void OpenFolder(char* find)
{
	HTREEITEM Selected = (HTREEITEM)SendDlgItemMessage(hMain, 1000, TVM_GETNEXTITEM, TVGN_CARET, 0);
	HTREEITEM child = (HTREEITEM)SendDlgItemMessage(hMain, 1000, TVM_GETNEXTITEM, TVGN_CHILD, (LPARAM)Selected);
	HTREEITEM next = child;

	do
	{
		if (strcmp(GetTextItemTree(next), find) == 0)
		{
			SendDlgItemMessage(hMain, 1000, TVM_SELECTITEM, TVGN_CARET, (LPARAM)next);
			break;
		}
	} while (next = (HTREEITEM)SendDlgItemMessage(hMain, 1000, TVM_GETNEXTITEM, TVGN_NEXT, (LPARAM)next));
}

void Delete(void)  //Fonction Pour supprimer un Fichier ou Dossier
{
	RecupInfo();
	char Path[256]; //Recuperation du chemin d'acces complet de l'item selectionne
	if (ItemSel != -10)
		sprintf(Path, "%s\\%s", Adresse, szItemSel);
	else
		sprintf(Path, "%s", Adresse);
	char Message[256];
	sprintf(Message, "Voulez-vous vraiment supprimer: %s ?", szItemSel);
	char MessageErreur[256];
	if (MessageBox(hMain, Message, "eXPlorer - Confirmation de la suppression", MB_ICONEXCLAMATION | MB_YESNO) == IDNO)
		return;
	if ((ItemSel >= 0 && ItemSel < LimitFolderFile) || ItemSel == -10)  //Si c'est un repertoire
	{
		sprintf(MessageErreur, "eXPlorer n'a pas pu supprimer: %s.\nVérifiez que le répertoire n'est pas utilisé par un autre programme ou une autre personne.", szItemSel);
		//if(!RemoveDirectory(Path))  //Supprime le Dossier
		if (!DeleteFileAndDirectory(Path))
			MessageBox(hMain, MessageErreur, "eXPlorer - Erreur lors de la suppression du répertoire", MB_ICONSTOP);
		else
		{
			if (ItemSel == -10)
			{
				HTREEITEM hItem = (HTREEITEM)SendMessage(hTree, TVM_GETNEXTITEM, TVGN_CARET, 0);
				while (true)
				{
					HTREEITEM child = (HTREEITEM)SendMessage(hTree, TVM_GETNEXTITEM, TVGN_CHILD, (LPARAM)hItem);
					if (child == NULL) break;
					// si oui, on le tue
					if (!SendMessage(hTree, TVM_DELETEITEM, 0, (LPARAM)child)) break;
				}
				SendMessage(hTree, TVM_DELETEITEM, 0, (LPARAM)hItem); //Supprime L'item correspondant
			}
			else
			{
				SendMessage(hlv, LVM_DELETEITEM, ItemSel, 0); //Supprime L'item correspondant
			}
			Actualize();
		}
	}
	else if (ItemSel >= LimitFolderFile && ItemSel <= ListItem)  //Si c'est un fichier
	{
		sprintf(MessageErreur, "eXPlorer n'a pas pu supprimer: %s.\nVérifiez que le fichier n'est pas utilisé par un autre programme ou une autre personne.", szItemSel);
		if (!DeleteFile(Path))   //Supprime le fichier
			MessageBox(hMain, MessageErreur, "eXPlorer - Erreur lors de la suppression du fichier", MB_ICONSTOP);
		else
		{
			SendMessage(hlv, LVM_DELETEITEM, ItemSel, 0); //Supprime L'item correspondant
			Actualize();
		}
	}
}

bool Rename(NMLVDISPINFO* pnmv)  //Fonction pour Renommer un fichier
{
	if (pnmv->item.cchTextMax == 0) return false;
	RecupInfo();
	char PathOld[256];
	sprintf(PathOld, "%s\\%s", Adresse, szItemSel);  //Chemin d'acces Actuel
	char PathNew[256];
	sprintf(PathNew, "%s\\%s", Adresse, pnmv->item.pszText);  //Nouveau Chemin d'acces
	//string MessageErreur="eXPlorer n'a pas pu renommer '"+szItemSel+"'.\nVérifiez que le fichier ou le dossier n'est pas utilisé par un autre programme ou une autre personne.";
	if (!MoveFile(PathOld, PathNew))  //Deplace le fichier(reviens a renommer puisque le dossier parent le change pas)
		return false;
	else
	{
		// Modifie l'item dans la listview
		LVITEM LvItem;
		LvItem.mask = LVIF_TEXT | LVIF_IMAGE | LVIF_STATE;
		LvItem.state = 0;
		LvItem.stateMask = 0;
		LvItem.iSubItem = 0;
		LvItem.iItem = ItemSel;
		(ItemSel >= 0 && ItemSel < LimitFolderFile) ? LvItem.iImage = 5 : LvItem.iImage = ImlListView(PathNew);
		LvItem.pszText = pnmv->item.pszText;
		SendDlgItemMessage(hMain, 1001, LVM_SETITEM, 0, (LPARAM)&LvItem);
		ListItem++;
		return true;
	}
	return true;
}

bool NewIndirectDir(int n, char* Path)
{
	char CheminEntier[256];
	char MessageErreur[256];

	RecupInfo();
	LVITEM LvItem;
	LvItem.mask = LVIF_TEXT | LVIF_IMAGE | LVIF_STATE;
	LvItem.state = 0;
	LvItem.stateMask = 0;
	LvItem.iSubItem = 0;
	LvItem.iItem = ItemSel;
	LvItem.iImage = 5;

	strcpy(CheminEntier, Adresse); strcat(CheminEntier, "\\"); strcat(CheminEntier, Path);

	if (n == 1)
	{
		if (!CreateDirectory(CheminEntier, 0))
		{
			sprintf(MessageErreur, "Impossible de créer %s. Un dossier portant le même nom existe déjà.", Path);
			return false;
		}
		else
		{
			LvItem.pszText = Path;
			SendMessage(hlv, LVM_SETITEM, 0, (LPARAM)&LvItem);
			Actualize();
			return true;
		}
	}

	else if (n == 2)
	{
	}
	return true;
}

void NewFolder(HWND hwnd)   //Fonction pour creer un nouveau Dossier
{
	char szNewFolder[MAX_PATH] = "";
	char Path[256];
	char MessageErreur[256] = "eXPlorer n'a pas pu créer le dossier: ";

	GetDlgItemText(hwnd, IDC_EDIT1, szNewFolder, sizeof(szNewFolder));  //Recupere le texte de la Edit Box
	sprintf(Path, "%s\\%s", Adresse, szNewFolder);
	strcat(MessageErreur, szNewFolder);

	if (!CreateDirectory(Path, 0))  //Creation du dossier
		MessageBox(hwnd, MessageErreur, "eXPlorer - Erreur lors de la création du dossier", MB_ICONSTOP);
	else
	{
		EndDialog(hwnd, 0);
		OnSelTree();
	}
}

void NewFile(HWND hwnd)   //Fonction pour creer un nouveau Fichier
{
	char Path[256];
	char szNewFile[MAX_PATH] = "";
	char MessageErreur[256] = "eXPlorer n'a pas pu créer le fichier: ";

	GetDlgItemText(hwnd, IDC_EDIT1, szNewFile, sizeof(szNewFile));  //Recupere le texte de la Edit Box
	sprintf(Path, "%s\\%s", Adresse, szNewFile);
	strcat(MessageErreur, szNewFile);
	HANDLE hFileCreate;
	if ((hFileCreate = CreateFile(Path, 0, 0, 0, CREATE_NEW, 0, 0)) == INVALID_HANDLE_VALUE) //Creation du fichier
		MessageBox(hwnd, MessageErreur, "Erreur lors de la création du fichier", MB_ICONSTOP);
	else
	{
		CloseHandle(hFileCreate);
		EndDialog(hwnd, 0);
		OnSelTree();
	}
}

void OnSelTree(void)
{
	ListItem = 0;
	LimitFolderFile = 0;

	// Récupere le HTREEITEM de celui qui est sélectionné
	HTREEITEM Selected = (HTREEITEM)SendDlgItemMessage(hMain, 1000, TVM_GETNEXTITEM, TVGN_CARET, 0);
	if (Selected == NULL) return;

	// Récupere le nom du HTREEITEM de celui qui est sélectionné
	char TextS[100];
	strcpy(TextS, GetTextItemTree(Selected));

	// Vérifie si il existe un enfant
	while (true)
	{
		HTREEITEM child = (HTREEITEM)SendDlgItemMessage(hMain, 1000, TVM_GETNEXTITEM, TVGN_CHILD, (LPARAM)Selected);
		if (child == NULL) break;
		// si oui, on le tue
		if (!SendDlgItemMessage(hMain, 1000, TVM_DELETEITEM, 0, (LPARAM)child)) break;
	}

	// Text est un string qui contiendra le chemin d'accès
	//string Text=TextS;
	char Text[256];
	strcpy(Text, TextS);

	// Récupere le HTREEITEM du parent de celui qui est sélectionné
	HTREEITEM parent = (HTREEITEM)SendDlgItemMessage(hMain, 1000, TVM_GETNEXTITEM, TVGN_PARENT, (LPARAM)Selected);
	if (parent == NULL)
	{
		// Met le chemin d'accès dans la barre d'adresse
		SetDlgItemText(hMain, 2002, poste);
		strcpy(Adresse, poste);

		// Supprime tous les items dans la ListView
		SendDlgItemMessage(hMain, 1001, LVM_DELETEALLITEMS, 0, 0);

		// Liste tous les lecteurs
		ListerDisk(Selected);
		return;
	}

	// Vérifie si c'est la racine
	if (TextS[1] != ':')
	{
		// Récupere le HTREEITEM du parent de celui qui est sélectionné
		parent = (HTREEITEM)SendDlgItemMessage(hMain, 1000, TVM_GETNEXTITEM, TVGN_PARENT, (LPARAM)Selected);
		// Tant qu'on est pas sur la racine
		while (parent != NULL)
		{
			// Récupere le nom du parent
			char TextP[24];
			char TextTmp[256];
			strcpy(TextTmp, Text);
			strcpy(TextP, GetTextItemTree(parent));
			// Enlève le '\' si il y en a à la fin du path
			if (TextP[strlen(TextP) - 1] == '\\') TextP[strlen(TextP) - 1] = '\0';
			// L'inscrit dans le chemin d'accès
			//Text=TextP+"\\"+Text;
			sprintf(Text, "%s\\%s", TextP, TextTmp);
			// Passe au dossier parent
			parent = (HTREEITEM)SendDlgItemMessage(hMain, 1000, TVM_GETNEXTITEM, TVGN_PARENT, (LPARAM)parent);
		}
		// Enlève le poste de travail
		//Text=Text.substr(strlen(poste)+1,Text.length());
		char* c = Text;
		int a = 0;
		while (a++ < (strlen(poste) + 1)) c++;
		strcpy(Text, c);
	}

	// Met le chemin d'accès dans la barre d'adresse
	SetDlgItemText(hMain, 2002, Text);

	// Supprime tous les items dans la ListView
	SendDlgItemMessage(hMain, 1001, LVM_DELETEALLITEMS, 0, 0);

	// Enlève le '\' si il y en a à la fin du path
	if (Text[strlen(Text) - 1] == '\\') Text[strlen(Text) - 1] = '\0';
	strcpy(Adresse, Text);

	// Liste les répertoires et les fichiers
	char WLister[256];
	sprintf(WLister, "%s\\*.*", Text);
	SetCursor(LoadCursor(0, IDC_WAIT));
	ListerRepFile(WLister, Selected);
	SetCursor(LoadCursor(0, IDC_ARROW));
	ReleaseCapture();
}

// Menu et Menu Contextuel

void EnableGrayMenu(HMENU hMenu, int Mode)
{
	HMENU hSubMenu = GetSubMenu(hMenu, 0);
	UINT uEnable1, uEnable2, uEnable3, uEnable4, uEnable5;
	uEnable1 = uEnable2 = uEnable3 = uEnable4 = uEnable5 = MF_GRAYED;

	if (Mode == 1)
	{
		uEnable1 = MF_ENABLED;
		uEnable2 = MF_ENABLED;
		SetMenuDefaultItem(hSubMenu, ID_OPEN, false);
	}
	else if (Mode == 2)
		uEnable5 = MF_ENABLED;
	else if (Mode == 3)
	{
		uEnable1 = MF_ENABLED;
		uEnable3 = MF_ENABLED;
		uEnable4 = MF_ENABLED;
		SetMenuDefaultItem(hSubMenu, ID_OPEN, false);
	}
	else if (Mode == 4)
	{
		uEnable1 = MF_ENABLED;
		uEnable2 = MF_ENABLED;
		uEnable3 = MF_ENABLED;
		SetMenuDefaultItem(hSubMenu, ID_OPEN, false);
	}

	EnableMenuItem(hMenu, ID_OPEN, uEnable1 | MF_BYCOMMAND);
	EnableMenuItem(hMenu, ID_OPEN_EXPLORE, uEnable2 | MF_BYCOMMAND);
	EnableMenuItem(hMenu, ID_EXPLORE, uEnable2 | MF_BYCOMMAND);
	EnableMenuItem(hMenu, ID_DELETE, uEnable3 | MF_BYCOMMAND);
	EnableMenuItem(hMenu, ID_RENOMME, uEnable3 | MF_BYCOMMAND);
	EnableMenuItem(hMenu, ID_PRINT, uEnable4 | MF_BYCOMMAND);
	EnableMenuItem(hMenu, ID_NEW_FOLDER, uEnable5 | MF_BYCOMMAND);
	EnableMenuItem(hMenu, ID_NEW_FILE, uEnable5 | MF_BYCOMMAND);
}

bool DoContextMenu(WPARAM wParam, LPARAM lParam)
{
	HWND  hwndListView = (HWND)wParam;
	HMENU hMenuLoad, hMenu;

	if (hwndListView != GetDlgItem(hMain, 1001))	return false;
	int nPosMenu = ListViewCas();

	hMenuLoad = LoadMenu(wc.hInstance, MAKEINTRESOURCE(IDR_CONTEXT));
	hMenu = GetSubMenu(hMenuLoad, nPosMenu);

	if (nPosMenu == 1 || nPosMenu == 4) SetMenuDefaultItem(hMenu, ID_OPEN, false);
	if (nPosMenu == 3) SetMenuDefaultItem(hMenu, ID_OPEN, false);

	if (nPosMenu == 0 || nPosMenu == 2) UpdateMenu(hwndListView, hMenu);

	TrackPopupMenu(hMenu, TPM_LEFTALIGN | TPM_RIGHTBUTTON, LOWORD(lParam), HIWORD(lParam), 0, hMain, NULL);

	DestroyMenu(hMenuLoad);

	return true;
}

void UpdateMenu(HWND hwndListView, HMENU hMenu)
{
	UINT  uID;
	DWORD dwStyle;

	CheckMenuItem(hMenu, ID_LARGE, MF_BYCOMMAND | MF_UNCHECKED);
	CheckMenuItem(hMenu, ID_SMALL, MF_BYCOMMAND | MF_UNCHECKED);
	CheckMenuItem(hMenu, ID_LISTE, MF_BYCOMMAND | MF_UNCHECKED);

	dwStyle = GetWindowLong(hwndListView, GWL_STYLE);
	switch (dwStyle & LVS_TYPEMASK)
	{
	case LVS_ICON:
		uID = ID_LARGE;
		break;

	case LVS_SMALLICON:
		uID = ID_SMALL;
		break;

	case LVS_LIST:
		uID = ID_LISTE;
		break;
	}
	CheckMenuRadioItem(hMenu, ID_LARGE, ID_LISTE, uID, MF_BYCOMMAND | MF_CHECKED);
}