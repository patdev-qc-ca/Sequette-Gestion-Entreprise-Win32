#include "stdafx.h"
#include "adodb.h"
#include "CDbManager.h"
#include "OperationSQL.h"
#include <Windows.h>
#include <string.h>
const CLSID CLSID_SQLServerEnumerator = { 0x1008B1B2, 0x5D8C, 0x11d1, {0x8F, 0x4C, 0x00, 0xC0, 0x4F, 0xC2, 0xAA, 0xE4} };
const IID IID_ISQLServerEnumerator = { 0x1008B1B0, 0x5D8C, 0x11d1, {0x8F, 0x4C, 0x00, 0xC0, 0x4F, 0xC2, 0xAA, 0xE4} };
const IID IID_IDataInitialize = { 0x0C733A18, 0x2A1C, 0x11CE, {0xAD, 0xE5, 0x00, 0xAA, 0x00, 0x44, 0x77, 0x3D} };
const CLSID CLSID_MSDAINITIALIZE = { 0x2206CDB2, 0x19C1, 0x11D1, {0x89, 0xE0, 0x00, 0xC0, 0x4F, 0xD7, 0xA8, 0x29} };
//Persist Security Info=True;User ID=sa;Password=Password01$;Pooling=False;MultipleActiveResultSets=False;Encrypt=True;TrustServerCertificate=True;
// Application Name="Gestion Entreprise";Command Timeout=0

CDbManager dbm;

bool OperationSQL::Connexion()
{
	return dbm.Connect(L"Provider=SQLOLEDB;Data Source=.\\SQLEXPRESS;Initial Catalog=TestDB;Integrated Security=SSPI;");
}
void OperationSQL::ListerTousLesClients()
{

}


bool OperationSQL::AfficherUnClient(int ID)
{

	return false;
}

int OperationSQL::MettreAjourClient(int ID, char* Champs)
{

	return 0;
}

void OperationSQL::SupprimmerClient(int ID)
{

}

int OperationSQL::AjouterClient(char* Champs)
{

	return 0;
}

void OperationSQL::SupprimerTables()
{
	CString sql = "IF  EXISTS (SELECT * FROM SYS.OBJECTS WHERE OBJECT_ID = OBJECT_ID(N'[DBO].[SOUMISSIONS]') AND TYPE IN (N'U')) DROP TABLE [DBO].[SOUMISSIONS]\n";
	sql += "IF  EXISTS (SELECT * FROM SYS.OBJECTS WHERE OBJECT_ID = OBJECT_ID(N'[DBO].[PROJET]') AND TYPE IN (N'U')) DROP TABLE [DBO].[PROJET]\n";
	sql += "IF  EXISTS (SELECT * FROM SYS.OBJECTS WHERE OBJECT_ID = OBJECT_ID(N'[DBO].[INVENTAIRE]') AND TYPE IN (N'U')) DROP TABLE [DBO].[INVENTAIRE]\n";
	sql += "IF  EXISTS (SELECT * FROM SYS.OBJECTS WHERE OBJECT_ID = OBJECT_ID(N'[DBO].[GROUPES]') AND TYPE IN (N'U')) DROP TABLE [DBO].[GROUPES]\n";
	sql += "IF  EXISTS (SELECT * FROM SYS.OBJECTS WHERE OBJECT_ID = OBJECT_ID(N'[DBO].[FOURNISSEUR]') AND TYPE IN (N'U')) DROP TABLE [DBO].[FOURNISSEUR]\n";
	sql += "IF  EXISTS (SELECT * FROM SYS.OBJECTS WHERE OBJECT_ID = OBJECT_ID(N'[DBO].[FABRICANTS]') AND TYPE IN (N'U')) DROP TABLE [DBO].[FABRICANTS]\n";
	sql += "IF  EXISTS (SELECT * FROM SYS.OBJECTS WHERE OBJECT_ID = OBJECT_ID(N'[DBO].[EMPLOYE]') AND TYPE IN (N'U')) DROP TABLE [DBO].[EMPLOYE]\n";
	sql += "IF  EXISTS (SELECT * FROM SYS.OBJECTS WHERE OBJECT_ID = OBJECT_ID(N'[DBO].[DEPARTEMENTS]') AND TYPE IN (N'U')) DROP TABLE [DBO].[DEPARTEMENTS]\n";
	sql += "IF  EXISTS (SELECT * FROM SYS.OBJECTS WHERE OBJECT_ID = OBJECT_ID(N'[DBO].[CONTACTS]') AND TYPE IN (N'U')) DROP TABLE [DBO].[CONTACTS]\n";
	sql += "IF  EXISTS (SELECT * FROM SYS.OBJECTS WHERE OBJECT_ID = OBJECT_ID(N'[DBO].[CONFIG]') AND TYPE IN (N'U')) DROP TABLE [DBO].[CONFIG]\n";
	sql += "IF  EXISTS (SELECT * FROM SYS.OBJECTS WHERE OBJECT_ID = OBJECT_ID(N'[DBO].[CLIENT]') AND TYPE IN (N'U')) DROP TABLE [DBO].[CLIENT]\n";
	sql += "IF  EXISTS (SELECT * FROM SYS.OBJECTS WHERE OBJECT_ID = OBJECT_ID(N'[DBO].[CEDULE]') AND TYPE IN (N'U')) DROP TABLE [DBO].[CEDULE]\n";
	sql += "IF  EXISTS (SELECT * FROM SYS.OBJECTS WHERE OBJECT_ID = OBJECT_ID(N'[DBO].[CATERIES]') AND TYPE IN (N'U')) DROP TABLE [DBO].[CATERIES]\n";
	sql += "IF  EXISTS (SELECT * FROM SYS.OBJECTS WHERE OBJECT_ID = OBJECT_ID(N'[DBO].[CATALOGUE]') AND TYPE IN(N'U')) DROP TABLE[DBO].[CATALOGUE]\n";
	sql += "IF  EXISTS (SELECT * FROM SYS.OBJECTS WHERE OBJECT_ID = OBJECT_ID(N'[DBO].[ALARMES]') AND TYPE IN(N'U')) DROP TABLE[DBO].[ALARMES]\n";
	sql += "IF  EXISTS (SELECT * FROM SYS.OBJECTS WHERE OBJECT_ID = OBJECT_ID(N'[DBO].[ACHAT]') AND TYPE IN(N'U')) DROP TABLE[DBO].[ACHAT]\n";
	dbm.Execute(sql);
}
void OperationSQL::CreerTables()
{
	CString sql = "";
	sql += "CREATE TABLE [dbo].[Achat]([ID] [int]PRIMARY KEY IDENTITY(1,1)  NOT NULL,[Item] [int] NOT NULL,[Raison] [nvarchar](50) NULL,[DateAchat] [datetime] NULL,[Fabricant] [int] NOT NULL,[PU] [float] NOT NULL,[Qte] [float] NOT NULL,[PT] [float] NOT NULL,[Projet] [int] NOT NULL,) ON [PRIMARY]\n";
	sql += "CREATE TABLE [dbo].[Alarmes]([ID] [int] PRIMARY KEY IDENTITY(1,1) NOT NULL,[Initiale] [nvarchar](50) NULL,[Cedule] [int] NOT NULL,[Type] [nvarchar](50) NULL,[Date] [datetime] NOT NULL,[Message] [nvarchar](50) NULL,) ON [PRIMARY]\n";
	sql += "CREATE TABLE [dbo].[Catalogue]([ID] [int] PRIMARY KEY IDENTITY(1,1) NOT NULL,[PIECE] [nvarchar](100) NULL,[DESC_FR] [nvarchar](255) NULL,[FABRICANT] [int] NOT NULL,[COMMENTAIRE] [nvarchar](100) NULL,[CATEGORIE] [int] NOT NULL,) ON [PRIMARY]\n";
	sql += "CREATE TABLE [dbo].[Categories]([ID] [int] PRIMARY KEY IDENTITY(1,1) NOT NULL,[Nom] [nvarchar](50) NOT NULL) ON [PRIMARY]\n";
	sql += "CREATE TABLE [dbo].[Cedule]([ID] [int] PRIMARY KEY IDENTITY(1,1) NOT NULL,[Initiale] [nvarchar](50) NULL,[Date] [datetime] NOT NULL,[Debut] [float] NOT NULL,[Fin] [float] NOT NULL,[Client] [int] NOT NULL,[AlarmeActive] [bit] NOT NULL,) ON [PRIMARY]\n";
	sql += "CREATE TABLE [dbo].[Client]([ID] [int] PRIMARY KEY IDENTITY(1,1) NOT NULL,[Nom] [nvarchar](50) NULL,[Compagnie] [nvarchar](50) NULL,[Telephonne] [nvarchar](20) NULL,[Fax] [nvarchar](20) NULL,[Cellulaire] [nvarchar](20) NULL,[Courriel] [nvarchar](50) NULL,[Adresse] [nvarchar](50) NULL,[Ville] [nvarchar](50) NULL,[Etat] [nvarchar](50) NULL,[Pays] [nvarchar](50) NULL,[CP] [nvarchar](50) NULL,[Supprime] [bit] NOT NULL,) ON [PRIMARY]\n";
	sql += "CREATE TABLE [dbo].[Config]([ID] [int] PRIMARY KEY IDENTITY(1,1) NOT NULL,[Imprevus] [float] NOT NULL,[IndiceDessin] [float] NOT NULL,[TauxAmericain] [float] NOT NULL,[TauxDessin] [float] NOT NULL,[PrixProgrammation] [float] NOT NULL,[PrixAssemblage] [float] NOT NULL,[PrixFabrication] [float] NOT NULL,[PrixTest] [float] NOT NULL,[PrixGestionProjets] [float] NOT NULL,[PrixInstallation] [float] NOT NULL,[PrixFormation] [float] NOT NULL,[PrixMiseService] [float] NOT NULL,[PrixExpedition] [float] NOT NULL,[PrixHebergement1] [float] NOT NULL,[PrixHebergement2] [float] NOT NULL,[PrixRepas] [float] NOT NULL,[Version] [float] NOT NULL,) ON [PRIMARY]\n";
	sql += "CREATE TABLE [dbo].[Contacts]([ID] [int] PRIMARY KEY IDENTITY(1,1) NOT NULL,[Nom] [nvarchar](255) NULL,[Compagnie] [nvarchar](100) NULL,[Telephonne] [nvarchar](100) NULL,[Fax] [nvarchar](100) NULL,[Courriel] [nvarchar](255) NULL,[Commentaire] [nvarchar](255) NULL,[Titre] [nvarchar](255) NULL,[Client] [bit] NULL,[Fournisseur] [bit] NULL,[Fabricant] [bit] NULL,[Valide] [bit] NULL,) ON [PRIMARY]\n";
	sql += "CREATE TABLE [dbo].[Departements]([ID] [int] PRIMARY KEY IDENTITY(1,1) NOT NULL,[Nom] [nvarchar](50) NULL,) ON [PRIMARY]\n";
	sql += "CREATE TABLE [dbo].[Employe]([ID] [int] PRIMARY KEY NOT NULL,[Initiale] [nvarchar](50) NULL,[Login] [nvarchar](50) NULL,[Password] [nvarchar](50) NULL,[Nom] [nvarchar](50) NULL,[Portable] [nvarchar](50) NULL,[Telephone] [nvarchar](50) NULL,[Groupe] [int] NOT NULL,[Departement] [int] NOT NULL,[Supprime] [bit] NOT NULL,[Actif] [bit] NOT NULL,) ON [PRIMARY]\n";
	sql += "CREATE TABLE [dbo].[Fabricants]([ID] [int] PRIMARY KEY IDENTITY(1,1) NOT NULL,[Nom] [nvarchar](50) NULL) ON [PRIMARY]\n";
	sql += "CREATE TABLE [dbo].[Fournisseur]([ID] [int] PRIMARY KEY IDENTITY(1,1) NOT NULL,[Categorie] [int] NOT NULL,[Nom] [nvarchar](150) NULL,[Rep] [nvarchar](50) NULL,[Interne] [nvarchar](50) NULL,[Adresse] [nvarchar](150) NULL,[Ville] [nvarchar](50) NULL,[Etat] [nvarchar](50) NULL,[Pays] [nvarchar](50) NULL,[CP] [nvarchar](20) NULL,[Telephonne] [nvarchar](20) NULL,[Courriel] [nvarchar](50) NULL,[Commentaire] [nvarchar](250) NULL,[DateCreation] [datetime] NULL,[Supprime] [bit] NOT NULL,) ON [PRIMARY]\n";
	sql += "CREATE TABLE [dbo].[Groupes]([ID] [int] PRIMARY KEY IDENTITY(1,1) NOT NULL,[Nom] [nvarchar](50) NULL,[Clients] [bit] NOT NULL,[Fournisseurs] [bit] NOT NULL,[Contacts] [bit] NOT NULL,[Rapport] [bit] NOT NULL,[Catalogue] [bit] NOT NULL,[Employes] [bit] NOT NULL,[PriseRDV] [bit] NOT NULL,[Configuration] [bit] NOT NULL,[Horraire] [bit] NOT NULL,[Soumission] [bit] NOT NULL,[Projet] [bit] NOT NULL,[Inventaire] [bit] NOT NULL,[Achat] [bit] NOT NULL,[ModificationFacturation] [bit] NOT NULL,[ModificationClients] [bit] NOT NULL,[ModificationFournisseurs] [bit] NOT NULL,[ModificationContacts] [bit] NOT NULL,[ModificationGroupes] [bit] NOT NULL,[ModificationEmployes] [bit] NOT NULL,[ModificationSoumissions] [bit] NOT NULL,[ModificationProjets] [bit] NOT NULL,[SuppressionProjets] [bit] NOT NULL,) ON [PRIMARY]\n";
	sql += "CREATE TABLE [dbo].[Inventaire]([ID] [int] PRIMARY KEY IDENTITY(1,1) NOT NULL,[Item] [nvarchar](50) NULL,[Description] [nvarchar](50) NULL,[Manufacturier] [nvarchar](50) NULL,[QteBoite] [float] NOT NULL,[PrixAchat] [float] NOT NULL,[Escompte] [float] NOT NULL,[PrixNet] [float] NOT NULL,[Commentaires] [nvarchar](50) NULL,[Localisation] [nvarchar](50) NULL,[QuantiteStock] [float] NOT NULL,[QuantiteCommandee] [float] NOT NULL,[CommandeParBoite] [bit] NOT NULL,[Minimum] [bit] NOT NULL,[QuantiteMinimum] [float] NOT NULL,[Commande] [int] NOT NULL,[NoProjet] [int] NOT NULL,[Total] [float] NOT NULL,) ON [PRIMARY]\n";
	sql += "CREATE TABLE [dbo].[Projet]([ID] [nvarchar](50) NULL,[Soumission] [int] NOT NULL,[Client] [int] NOT NULL,[Contact] [int] NOT NULL,[Description] [nvarchar](50) NULL,[RendreLe] [datetime] NOT NULL,[CreerLe] [datetime] NOT NULL,[CreerPar] [int] NOT NULL,[DureeDessin] [float] NOT NULL,[DureeFabrication] [float] NOT NULL,[DureeAssemblage] [float] NOT NULL,[DureeTest] [float] NOT NULL,[DureeProgramation] [float] NOT NULL,[DureeInstallation] [float] NOT NULL,[DureeMiseService] [float] NOT NULL,[DureeFormation] [float] NOT NULL,[DureeGestion] [float] NOT NULL,[DureeExpedition] [float] NOT NULL,[NbrePersonne] [int] NOT NULL,[DureeHebergement] [float] NOT NULL,[TotalHebergement] [float] NOT NULL,[DureeRepas] [float] NOT NULL,[TotalRepas] [float] NOT NULL,[PrixEmballage] [float] NOT NULL,[TauxDessin] [float] NOT NULL,[TauxProgrammation] [float] NOT NULL,[TauxFabrication] [float] NOT NULL,[TauxAssemblage] [float] NOT NULL,[TauxTest] [float] NOT NULL,[TauxInstallation] [float] NOT NULL,[TauxMiseService] [float] NOT NULL,[TauxFormation] [float] NOT NULL,[TauxGestion] [float] NOT NULL,[TauxExpedition] [float] NOT NULL,[Hebergement1] [float] NOT NULL,[Hebergement2] [float] NOT NULL,[Repas] [float] NOT NULL,[Transport] [float] NOT NULL,[SousTotal] [float] NOT NULL,[Imprevus] [float] NOT NULL,[TotalImprevus] [float] NOT NULL) ON [PRIMARY]\n";
	sql += "CREATE TABLE [dbo].[Soumissions]([ID] [int] PRIMARY KEY IDENTITY(1,1) NOT NULL,[Client] [int] NOT NULL,[Contact] [int] NOT NULL,[Description] [nvarchar](50) NULL,[Delais] [nvarchar](50) NULL,[CreerLe] [nvarchar](50) NULL,[CreerPar] [int] NOT NULL,[TempsDessin] [float] NOT NULL,[TempsProgrammation] [float] NOT NULL,[TempsFabrication] [float] NOT NULL,[TempsAssemblage] [float] NOT NULL,[TempsTest] [float] NOT NULL,[TempsInstallation] [float] NOT NULL,[TempsMiseService] [float] NOT NULL,[TempsFormation] [float] NOT NULL,[TempsGestion] [float] NOT NULL,[TempsExpedition] [float] NOT NULL,[NbrePersonne] [float] NOT NULL,[TempsHebergement] [float] NOT NULL,[TotalHebergement] [float] NOT NULL,[TempsRepas] [float] NOT NULL,[TotalRepas] [float] NOT NULL,[TempsTransport] [float] NOT NULL,[PrixEmballage] [float] NOT NULL,[TauxDessin] [float] NOT NULL,[TauxProgrammation] [float] NOT NULL,[TauxFabrication] [float] NOT NULL,[TauxAssemblage] [float] NOT NULL,[TauxTest] [float] NOT NULL,[TauxInstallation] [float] NOT NULL,[TauxMiseService] [float] NOT NULL,[TauxFormation] [float] NOT NULL,[TauxGestion] [float] NOT NULL,[TauxExpedition] [float] NOT NULL,[FraisHebergement1] [float] NOT NULL,[FraisHebergement2] [float] NOT NULL,[FraisRepas] [float] NOT NULL,[FraisTransport] [float] NOT NULL,[SousTotal] [float] NOT NULL,[SansTemps] [bit] NOT NULL,) ON [PRIMARY]\n";
	sql += "\n";
	dbm.Execute(sql);
}

WCHAR* OperationSQL::ListerInstancesPhysique()
{
	WCHAR resultat[0xFC];

	return resultat;
}

WCHAR* OperationSQL::ListerInstance()
{
	WCHAR resultat[0xFC] = { 0 };
	MsSQL::ISQLServerDiscovery* pDiscovery;
	MsSQL::ISQLServerEnumerator* pEnum;
	CoInitialize(NULL);
	if (SUCCEEDED(CoCreateInstance(CLSID_SQLServerEnumerator, NULL, CLSCTX_INPROC_SERVER, MsSQL::IID_ISQLServerEnumerator, (void**)&pEnum))) {
		if (SUCCEEDED(pEnum->DiscoverSQLServers(&pDiscovery))) {
			LONG count = 0;
			pDiscovery->GetCount(&count);
			MessageBox(GetDesktopWindow(), "ISQLServerEnumerator instancie avec succes !", titre, MB_ICONINFORMATION | MB_OK);
			FILE* f = fopen("ListerInstanceSQL.txt", "w");
			for (LONG i = 0; i < count; i++) {
				BSTR name;
				pDiscovery->GetName(i, &name);
				wsprintfW(resultat, L"%s", name);
				fprintf(f, "%s\n", name);
				SysFreeString(name);
			}
			fclose(f);
			pDiscovery->Release();
		}
		pEnum->Release();
	}
	else {
		MessageBox(GetDesktopWindow(), "Erreur CoInitialize", titre, MB_ICONERROR | MB_OK);
	}
	CoUninitialize();
	return resultat;
}
SQLCHAR* OperationSQL::ListerInstancesSQL()
{
	SQLHENV hEnv;
	SQLHDBC hDbc;
	SQLRETURN ret;
	SQLCHAR chaine[512];
	SQLSMALLINT LongeurChaine;
	SQLAllocHandle(SQL_HANDLE_ENV, SQL_NULL_HANDLE, &hEnv);
	SQLSetEnvAttr(hEnv, SQL_ATTR_ODBC_VERSION, (void*)SQL_OV_ODBC2, 0);
	SQLAllocHandle(SQL_HANDLE_DBC, hEnv, &hDbc);
	SQLCHAR connStr[] = "DRIVER={SQL Server};SERVER=?";
	ret = SQLBrowseConnectA(hDbc, connStr, SQL_NTS, chaine, sizeof(chaine), &LongeurChaine);
	if (ret != SQL_NEED_DATA) {
		MessageBox(GetDesktopWindow(), "Erreur ou aucune instance trouvee.", titre, MB_ICONERROR | MB_OK);
	}
	SQLFreeHandle(SQL_HANDLE_DBC, hDbc);
	SQLFreeHandle(SQL_HANDLE_ENV, hEnv);
	FILE* f = fopen("ListerInstanceSQL.txt", "w");
	fprintf(f, "%s", chaine);
	fclose(f);
	return chaine;
}
