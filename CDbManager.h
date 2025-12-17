#pragma once
#include "StdAfx.h"
#include <atlstr.h>
class CDbManager
{
public:
	_ConnectionPtr m_pConn;
	_CommandPtr m_pUpdateCmd; // Command préparé et réutilisé

	int m_pageIndex = 0;
	int m_pageSize = 50;
	int m_totalPages = 0;
	std::string m_nameFilter;
	int m_ageFilter = -1; // pas de filtre
public:
	CDbManager() {
		::CoInitialize(NULL);
	}
	~CDbManager() {
		if (m_pConn) m_pConn->Close();
		::CoUninitialize();
	}
	bool Connect(const CString& connStr) {
		try {
			m_pConn.CreateInstance(__uuidof(Connection));
			m_pConn->Open((_bstr_t)connStr, L"", L"", adConnectUnspecified);
			return true;
		}
		catch (_com_error& e) {
			MessageBox(GetDesktopWindow(), CString(L"Erreur connexion: ") + e.ErrorMessage(), titre, MB_ICONERROR | MB_OK);
			return false;
		}
	}
	bool Execute(const CString& sql) {
		try {
			m_pConn->Execute((_bstr_t)sql, NULL, adExecuteNoRecords);
			return true;
		}
		catch (_com_error& e) {
			MessageBox(GetDesktopWindow(), CString(L"Erreur SQL: ") + e.ErrorMessage(), titre, MB_ICONERROR | MB_OK);
			return false;
		}
	}
	void Query(const CString& sql) {
		try {
			_RecordsetPtr rs;
			rs.CreateInstance(__uuidof(Recordset));
			rs->Open((_bstr_t)sql, m_pConn.GetInterfacePtr(),
				adOpenForwardOnly, adLockReadOnly, adCmdText);
			while (!rs->EndOfFile) {
				CString val = (LPCTSTR)(_bstr_t)rs->Fields->Item["NomColonne"]->Value;
				MessageBox(GetDesktopWindow(), val, titre, MB_ICONINFORMATION | MB_OK);
				rs->MoveNext();
			}
		}
		catch (_com_error& e) {
			MessageBox(GetDesktopWindow(), CString(L"Erreur Query: ") + e.ErrorMessage(), titre, MB_ICONERROR | MB_OK);
		}
	}
};

//bool InsertClients(const CString& name, int age) {
//	try {
//		CString sql;
//		sql.Format(L"INSERT INTO Clients (Name, Age) VALUES ('%s', %d)", name, age);
//		m_pConn->Execute((_bstr_t)sql, NULL, adExecuteNoRecords);
//		return true;
//	}
//	catch (_com_error& e) {
//		AfxMessageBox(CString(L"Erreur Insert: ") + e.ErrorMessage());
//		return false;
//	}
//}
