#pragma once
class OperationSQL
{
public:
	void ListerTousLesClients();
	bool Connexion();
	bool AfficherUnClient(int ID);
	int MettreAjourClient(int ID, char* Champs);
	void SupprimmerClient(int ID);
	int AjouterClient(char* Champs);
	void SupprimerTables();
	void CreerTables();
	WCHAR* ListerInstancesPhysique();
	WCHAR* ListerInstance();
	SQLCHAR* ListerInstancesSQL();
};

