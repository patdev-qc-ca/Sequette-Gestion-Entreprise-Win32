#include "stdafx.h"
#include "ADODB.h"
#pragma implementation_key(1)
long ADODB::_Collection::GetCount() {
	long _result;
	HRESULT _hr = get_Count(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 2)
IUnknownPtr ADODB::_Collection::_NewEnum() {
	IUnknown* _result;
	HRESULT _hr = raw__NewEnum(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return IUnknownPtr(_result, false);
}
// Index: 3
HRESULT ADODB::_Collection::Refresh() {
	HRESULT _hr = raw_Refresh();
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 4
HRESULT ADODB::_DynaCollection::Append(IDispatch* Object) {
	HRESULT _hr = raw_Append(Object);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 5
HRESULT ADODB::_DynaCollection::Delete(const _variant_t& Index) {
	HRESULT _hr = raw_Delete(Index);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
ADODB::PropertiesPtr ADODB::_ADO::GetProperties() {
	struct Properties* _result;
	HRESULT _hr = get_Properties(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return PropertiesPtr(_result, false);
}
ADODB::PropertyPtr ADODB::Properties::GetItem(const _variant_t& Index) {
	struct Property* _result;
	HRESULT _hr = get_Item(Index, &_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return PropertyPtr(_result, false);
}
_variant_t ADODB::Property::GetValue() {
	VARIANT _result;
	VariantInit(&_result);
	HRESULT _hr = get_Value(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _variant_t(_result, false);
}
// Index: 9
void ADODB::Property::PutValue(const _variant_t& pval) {
	HRESULT _hr = put_Value(pval);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 10
_bstr_t ADODB::Property::GetName() {
	BSTR _result;
	HRESULT _hr = get_Name(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _bstr_t(_result, false);
}
// Index: 11
enum ADODB::DataTypeEnum ADODB::Property::GetType() {
	enum DataTypeEnum _result;
	HRESULT _hr = get_Type(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 12)
long ADODB::Property::GetAttributes() {
	long _result;
	HRESULT _hr = get_Attributes(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 13
void ADODB::Property::PutAttributes(long plAttributes) {
	HRESULT _hr = put_Attributes(plAttributes);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
//
// interface Error wrapper method implementations
//
// Index: 14)
long ADODB::Error::GetNumber() {
	long _result;
	HRESULT _hr = get_Number(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 15
_bstr_t ADODB::Error::GetSource() {
	BSTR _result;
	HRESULT _hr = get_Source(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _bstr_t(_result, false);
}
// Index: 16
_bstr_t ADODB::Error::GetDescription() {
	BSTR _result;
	HRESULT _hr = get_Description(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _bstr_t(_result, false);
}
_bstr_t ADODB::Error::GetHelpFile() {
	BSTR _result;
	HRESULT _hr = get_HelpFile(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _bstr_t(_result, false);
}
// Index: 18)
long ADODB::Error::GetHelpContext() {
	long _result;
	HRESULT _hr = get_HelpContext(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 19
_bstr_t ADODB::Error::GetSQLState() {
	BSTR _result;
	HRESULT _hr = get_SQLState(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _bstr_t(_result, false);
}
// Index: 20)
long ADODB::Error::GetNativeError() {
	long _result;
	HRESULT _hr = get_NativeError(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
//
// interface Errors wrapper method implementations
//
// Index: 21)
ADODB::ErrorPtr ADODB::Errors::GetItem(const _variant_t& Index) {
	struct Error* _result;
	HRESULT _hr = get_Item(Index, &_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return ErrorPtr(_result, false);
}
// Index: 22
HRESULT ADODB::Errors::Clear() {
	HRESULT _hr = raw_Clear();
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
//
// interface Command15 wrapper method implementations
//
// Index: 23)
ADODB::_ConnectionPtr ADODB::Command15::GetActiveConnection() {
	struct _Connection* _result;
	HRESULT _hr = get_ActiveConnection(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _ConnectionPtr(_result, false);
}
// Index: 24
void ADODB::Command15::PutRefActiveConnection(struct _Connection* ppvObject) {
	HRESULT _hr = putref_ActiveConnection(ppvObject);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 25
void ADODB::Command15::PutActiveConnection(const _variant_t& ppvObject) {
	HRESULT _hr = put_ActiveConnection(ppvObject);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 26
_bstr_t ADODB::Command15::GetCommandText() {
	BSTR _result;
	HRESULT _hr = get_CommandText(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _bstr_t(_result, false);
}
// Index: 27
void ADODB::Command15::PutCommandText(_bstr_t pbstr) {
	HRESULT _hr = put_CommandText(pbstr);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 28)
long ADODB::Command15::GetCommandTimeout() {
	long _result;
	HRESULT _hr = get_CommandTimeout(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 29
void ADODB::Command15::PutCommandTimeout(long pl) {
	HRESULT _hr = put_CommandTimeout(pl);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 30)
VARIANT_BOOL ADODB::Command15::GetPrepared() {
	VARIANT_BOOL _result;
	HRESULT _hr = get_Prepared(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 31
void ADODB::Command15::PutPrepared(VARIANT_BOOL pfPrepared) {
	HRESULT _hr = put_Prepared(pfPrepared);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 32)
ADODB::_RecordsetPtr ADODB::Command15::Execute(VARIANT* RecordsAffected, VARIANT* Parameters, long Options) {
	struct _Recordset* _result;
	HRESULT _hr = raw_Execute(RecordsAffected, Parameters, Options, &_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _RecordsetPtr(_result, false);
}
// Index: 33)
ADODB::_ParameterPtr ADODB::Command15::CreateParameter(_bstr_t Name, enum DataTypeEnum Type, enum ParameterDirectionEnum Direction, long Size, const _variant_t& Value) {
	struct _Parameter* _result;
	HRESULT _hr = raw_CreateParameter(Name, Type, Direction, Size, Value, &_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _ParameterPtr(_result, false);
}
// Index: 34)
ADODB::ParametersPtr ADODB::Command15::GetParameters() {
	struct Parameters* _result;
	HRESULT _hr = get_Parameters(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return ParametersPtr(_result, false);
}
// Index: 35
void ADODB::Command15::PutCommandType(enum CommandTypeEnum plCmdType) {
	HRESULT _hr = put_CommandType(plCmdType);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 36
enum ADODB::CommandTypeEnum ADODB::Command15::GetCommandType() {
	enum CommandTypeEnum _result;
	HRESULT _hr = get_CommandType(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 37
_bstr_t ADODB::Command15::GetName() {
	BSTR _result;
	HRESULT _hr = get_Name(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _bstr_t(_result, false);
}
// Index: 38
void ADODB::Command15::PutName(_bstr_t pbstrName) {
	HRESULT _hr = put_Name(pbstrName);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
//
// interface Connection15 wrapper method implementations
//
// Index: 39
_bstr_t ADODB::Connection15::GetConnectionString() {
	BSTR _result;
	HRESULT _hr = get_ConnectionString(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _bstr_t(_result, false);
}
// Index: 40
void ADODB::Connection15::PutConnectionString(_bstr_t pbstr) {
	HRESULT _hr = put_ConnectionString(pbstr);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 41)
long ADODB::Connection15::GetCommandTimeout() {
	long _result;
	HRESULT _hr = get_CommandTimeout(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 42
void ADODB::Connection15::PutCommandTimeout(long plTimeout) {
	HRESULT _hr = put_CommandTimeout(plTimeout);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 43)
long ADODB::Connection15::GetConnectionTimeout() {
	long _result;
	HRESULT _hr = get_ConnectionTimeout(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 44
void ADODB::Connection15::PutConnectionTimeout(long plTimeout) {
	HRESULT _hr = put_ConnectionTimeout(plTimeout);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 45
_bstr_t ADODB::Connection15::GetVersion() {
	BSTR _result;
	HRESULT _hr = get_Version(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _bstr_t(_result, false);
}
// Index: 46
HRESULT ADODB::Connection15::Close() {
	HRESULT _hr = raw_Close();
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 47)
ADODB::_RecordsetPtr ADODB::Connection15::Execute(_bstr_t CommandText, VARIANT* RecordsAffected, long Options) {
	struct _Recordset* _result;
	HRESULT _hr = raw_Execute(CommandText, RecordsAffected, Options, &_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _RecordsetPtr(_result, false);
}
// Index: 48)
long ADODB::Connection15::BeginTrans() {
	long _result;
	HRESULT _hr = raw_BeginTrans(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 49
HRESULT ADODB::Connection15::CommitTrans() {
	HRESULT _hr = raw_CommitTrans();
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 50
HRESULT ADODB::Connection15::RollbackTrans() {
	HRESULT _hr = raw_RollbackTrans();
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 51
HRESULT ADODB::Connection15::Open(_bstr_t ConnectionString, _bstr_t UserID, _bstr_t Password, long Options) {
	HRESULT _hr = raw_Open(ConnectionString, UserID, Password, Options);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 52)
ADODB::ErrorsPtr ADODB::Connection15::GetErrors() {
	struct Errors* _result;
	HRESULT _hr = get_Errors(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return ErrorsPtr(_result, false);
}
// Index: 53
_bstr_t ADODB::Connection15::GetDefaultDatabase() {
	BSTR _result;
	HRESULT _hr = get_DefaultDatabase(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _bstr_t(_result, false);
}
// Index: 54
void ADODB::Connection15::PutDefaultDatabase(_bstr_t pbstr) {
	HRESULT _hr = put_DefaultDatabase(pbstr);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 55
enum ADODB::IsolationLevelEnum ADODB::Connection15::GetIsolationLevel() {
	enum IsolationLevelEnum _result;
	HRESULT _hr = get_IsolationLevel(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 56
void ADODB::Connection15::PutIsolationLevel(enum IsolationLevelEnum Level) {
	HRESULT _hr = put_IsolationLevel(Level);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 57)
long ADODB::Connection15::GetAttributes() {
	long _result;
	HRESULT _hr = get_Attributes(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 58
void ADODB::Connection15::PutAttributes(long plAttr) {
	HRESULT _hr = put_Attributes(plAttr);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 59
enum ADODB::CursorLocationEnum ADODB::Connection15::GetCursorLocation() {
	enum CursorLocationEnum _result;
	HRESULT _hr = get_CursorLocation(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 60
void ADODB::Connection15::PutCursorLocation(enum CursorLocationEnum plCursorLoc) {
	HRESULT _hr = put_CursorLocation(plCursorLoc);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 61
enum ADODB::ConnectModeEnum ADODB::Connection15::GetMode() {
	enum ConnectModeEnum _result;
	HRESULT _hr = get_Mode(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 62
void ADODB::Connection15::PutMode(enum ConnectModeEnum plMode) {
	HRESULT _hr = put_Mode(plMode);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 63
_bstr_t ADODB::Connection15::GetProvider() {
	BSTR _result;
	HRESULT _hr = get_Provider(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _bstr_t(_result, false);
}
// Index: 64
void ADODB::Connection15::PutProvider(_bstr_t pbstr) {
	HRESULT _hr = put_Provider(pbstr);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 65)
long ADODB::Connection15::GetState() {
	long _result;
	HRESULT _hr = get_State(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 66)
ADODB::_RecordsetPtr ADODB::Connection15::OpenSchema(enum SchemaEnum Schema, const _variant_t& Restrictions, const _variant_t& SchemaID) {
	struct _Recordset* _result;
	HRESULT _hr = raw_OpenSchema(Schema, Restrictions, SchemaID, &_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _RecordsetPtr(_result, false);
}
//
// interface _Connection wrapper method implementations
//
// Index: 67
HRESULT ADODB::_Connection::Cancel() {
	HRESULT _hr = raw_Cancel();
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
//
// interface Recordset15 wrapper method implementations
//
// Index: 68
enum ADODB::PositionEnum ADODB::Recordset15::GetAbsolutePosition() {
	enum PositionEnum _result;
	HRESULT _hr = get_AbsolutePosition(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 69
void ADODB::Recordset15::PutAbsolutePosition(enum PositionEnum pl) {
	HRESULT _hr = put_AbsolutePosition(pl);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 70
void ADODB::Recordset15::PutRefActiveConnection(IDispatch* pvar) {
	HRESULT _hr = putref_ActiveConnection(pvar);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 71
void ADODB::Recordset15::PutActiveConnection(const _variant_t& pvar) {
	HRESULT _hr = put_ActiveConnection(pvar);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 72
_variant_t ADODB::Recordset15::GetActiveConnection() {
	VARIANT _result;
	VariantInit(&_result);
	HRESULT _hr = get_ActiveConnection(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _variant_t(_result, false);
}
// Index: 73)
VARIANT_BOOL ADODB::Recordset15::GetBOF() {
	VARIANT_BOOL _result;
	HRESULT _hr = get_BOF(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 74
_variant_t ADODB::Recordset15::GetBookmark() {
	VARIANT _result;
	VariantInit(&_result);
	HRESULT _hr = get_Bookmark(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _variant_t(_result, false);
}
// Index: 75
void ADODB::Recordset15::PutBookmark(const _variant_t& pvBookmark) {
	HRESULT _hr = put_Bookmark(pvBookmark);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 76)
long ADODB::Recordset15::GetCacheSize() {
	long _result;
	HRESULT _hr = get_CacheSize(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 77
void ADODB::Recordset15::PutCacheSize(long pl) {
	HRESULT _hr = put_CacheSize(pl);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 78
enum ADODB::CursorTypeEnum ADODB::Recordset15::GetCursorType() {
	enum CursorTypeEnum _result;
	HRESULT _hr = get_CursorType(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 79
void ADODB::Recordset15::PutCursorType(enum CursorTypeEnum plCursorType) {
	HRESULT _hr = put_CursorType(plCursorType);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 80)
VARIANT_BOOL ADODB::Recordset15::GetEndOfFile() {
	VARIANT_BOOL _result;
	HRESULT _hr = get_EndOfFile(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 81)
ADODB::FieldsPtr ADODB::Recordset15::GetFields() {
	struct Fields* _result;
	HRESULT _hr = get_Fields(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return FieldsPtr(_result, false);
}
// Index: 82
enum ADODB::LockTypeEnum ADODB::Recordset15::GetLockType() {
	enum LockTypeEnum _result;
	HRESULT _hr = get_LockType(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 83
void ADODB::Recordset15::PutLockType(enum LockTypeEnum plLockType) {
	HRESULT _hr = put_LockType(plLockType);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 84)
long ADODB::Recordset15::GetMaxRecords() {
	long _result;
	HRESULT _hr = get_MaxRecords(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 85
void ADODB::Recordset15::PutMaxRecords(long plMaxRecords) {
	HRESULT _hr = put_MaxRecords(plMaxRecords);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 86)
long ADODB::Recordset15::GetRecordCount() {
	long _result;
	HRESULT _hr = get_RecordCount(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 87
void ADODB::Recordset15::PutRefSource(IDispatch* pvSource) {
	HRESULT _hr = putref_Source(pvSource);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 88
void ADODB::Recordset15::PutSource(_bstr_t pvSource) {
	HRESULT _hr = put_Source(pvSource);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 89
_variant_t ADODB::Recordset15::GetSource() {
	VARIANT _result;
	VariantInit(&_result);
	HRESULT _hr = get_Source(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _variant_t(_result, false);
}
// Index: 90
HRESULT ADODB::Recordset15::AddNew(const _variant_t& FieldList, const _variant_t& Values) {
	HRESULT _hr = raw_AddNew(FieldList, Values);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 91
HRESULT ADODB::Recordset15::CancelUpdate() {
	HRESULT _hr = raw_CancelUpdate();
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 92
HRESULT ADODB::Recordset15::Close() {
	HRESULT _hr = raw_Close();
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 93
HRESULT ADODB::Recordset15::Delete(enum AffectEnum AffectRecords) {
	HRESULT _hr = raw_Delete(AffectRecords);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 94
_variant_t ADODB::Recordset15::GetRows(long Rows, const _variant_t& Start, const _variant_t& Fields) {
	VARIANT _result;
	VariantInit(&_result);
	HRESULT _hr = raw_GetRows(Rows, Start, Fields, &_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _variant_t(_result, false);
}
// Index: 95
HRESULT ADODB::Recordset15::Move(long NumRecords, const _variant_t& Start) {
	HRESULT _hr = raw_Move(NumRecords, Start);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 96
HRESULT ADODB::Recordset15::MoveNext() {
	HRESULT _hr = raw_MoveNext();
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 97
HRESULT ADODB::Recordset15::MovePrevious() {
	HRESULT _hr = raw_MovePrevious();
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 98
HRESULT ADODB::Recordset15::MoveFirst() {
	HRESULT _hr = raw_MoveFirst();
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 99
HRESULT ADODB::Recordset15::MoveLast() {
	HRESULT _hr = raw_MoveLast();
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 100
HRESULT ADODB::Recordset15::Open(const _variant_t& Source, const _variant_t& ActiveConnection, enum CursorTypeEnum CursorType, enum LockTypeEnum LockType, long Options) {
	HRESULT _hr = raw_Open(Source, ActiveConnection, CursorType, LockType, Options);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 101
HRESULT ADODB::Recordset15::Requery(long Options) {
	HRESULT _hr = raw_Requery(Options);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 102
HRESULT ADODB::Recordset15::_xResync(enum AffectEnum AffectRecords) {
	HRESULT _hr = raw__xResync(AffectRecords);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 103
HRESULT ADODB::Recordset15::Update(const _variant_t& Fields, const _variant_t& Values) {
	HRESULT _hr = raw_Update(Fields, Values);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 104
enum ADODB::PositionEnum ADODB::Recordset15::GetAbsolutePage() {
	enum PositionEnum _result;
	HRESULT _hr = get_AbsolutePage(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 105
void ADODB::Recordset15::PutAbsolutePage(enum PositionEnum pl) {
	HRESULT _hr = put_AbsolutePage(pl);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 106
enum ADODB::EditModeEnum ADODB::Recordset15::GetEditMode() {
	enum EditModeEnum _result;
	HRESULT _hr = get_EditMode(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 107
_variant_t ADODB::Recordset15::GetFilter() {
	VARIANT _result;
	VariantInit(&_result);
	HRESULT _hr = get_Filter(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _variant_t(_result, false);
}
// Index: 108
void ADODB::Recordset15::PutFilter(const _variant_t& Criteria) {
	HRESULT _hr = put_Filter(Criteria);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 109)
long ADODB::Recordset15::GetPageCount() {
	long _result;
	HRESULT _hr = get_PageCount(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 110)
long ADODB::Recordset15::GetPageSize() {
	long _result;
	HRESULT _hr = get_PageSize(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 111
void ADODB::Recordset15::PutPageSize(long pl) {
	HRESULT _hr = put_PageSize(pl);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 112
_bstr_t ADODB::Recordset15::GetSort() {
	BSTR _result;
	HRESULT _hr = get_Sort(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _bstr_t(_result, false);
}
// Index: 113
void ADODB::Recordset15::PutSort(_bstr_t Criteria) {
	HRESULT _hr = put_Sort(Criteria);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 114)
long ADODB::Recordset15::GetStatus() {
	long _result;
	HRESULT _hr = get_Status(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 115)
long ADODB::Recordset15::GetState() {
	long _result;
	HRESULT _hr = get_State(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 116)
ADODB::_RecordsetPtr ADODB::Recordset15::_xClone() {
	struct _Recordset* _result;
	HRESULT _hr = raw__xClone(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _RecordsetPtr(_result, false);
}
// Index: 117
HRESULT ADODB::Recordset15::UpdateBatch(enum AffectEnum AffectRecords) {
	HRESULT _hr = raw_UpdateBatch(AffectRecords);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 118
HRESULT ADODB::Recordset15::CancelBatch(enum AffectEnum AffectRecords) {
	HRESULT _hr = raw_CancelBatch(AffectRecords);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 119
enum ADODB::CursorLocationEnum ADODB::Recordset15::GetCursorLocation() {
	enum CursorLocationEnum _result;
	HRESULT _hr = get_CursorLocation(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 120
void ADODB::Recordset15::PutCursorLocation(enum CursorLocationEnum plCursorLoc) {
	HRESULT _hr = put_CursorLocation(plCursorLoc);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 121)
ADODB::_RecordsetPtr ADODB::Recordset15::NextRecordset(VARIANT* RecordsAffected) {
	struct _Recordset* _result;
	HRESULT _hr = raw_NextRecordset(RecordsAffected, &_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _RecordsetPtr(_result, false);
}
// Index: 122)
VARIANT_BOOL ADODB::Recordset15::Supports(enum CursorOptionEnum CursorOptions) {
	VARIANT_BOOL _result;
	HRESULT _hr = raw_Supports(CursorOptions, &_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 123
_variant_t ADODB::Recordset15::GetCollect(const _variant_t& Index) {
	VARIANT _result;
	VariantInit(&_result);
	HRESULT _hr = get_Collect(Index, &_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _variant_t(_result, false);
}
// Index: 124
void ADODB::Recordset15::PutCollect(const _variant_t& Index, const _variant_t& pvar) {
	HRESULT _hr = put_Collect(Index, pvar);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 125
enum ADODB::MarshalOptionsEnum ADODB::Recordset15::GetMarshalOptions() {
	enum MarshalOptionsEnum _result;
	HRESULT _hr = get_MarshalOptions(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 126
void ADODB::Recordset15::PutMarshalOptions(enum MarshalOptionsEnum peMarshal) {
	HRESULT _hr = put_MarshalOptions(peMarshal);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 127
HRESULT ADODB::Recordset15::Find(_bstr_t Criteria, long SkipRecords, enum SearchDirectionEnum SearchDirection, const _variant_t& Start) {
	HRESULT _hr = raw_Find(Criteria, SkipRecords, SearchDirection, Start);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
//
// interface Recordset20 wrapper method implementations
//
// Index: 128
HRESULT ADODB::Recordset20::Cancel() {
	HRESULT _hr = raw_Cancel();
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 129)
IUnknownPtr ADODB::Recordset20::GetDataSource() {
	IUnknown* _result;
	HRESULT _hr = get_DataSource(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return IUnknownPtr(_result, false);
}
// Index: 130
void ADODB::Recordset20::PutRefDataSource(IUnknown* ppunkDataSource) {
	HRESULT _hr = putref_DataSource(ppunkDataSource);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 131
HRESULT ADODB::Recordset20::_xSave(_bstr_t FileName, enum PersistFormatEnum PersistFormat) {
	HRESULT _hr = raw__xSave(FileName, PersistFormat);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 132)
IDispatchPtr ADODB::Recordset20::GetActiveCommand() {
	IDispatch* _result;
	HRESULT _hr = get_ActiveCommand(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return IDispatchPtr(_result, false);
}
// Index: 133
void ADODB::Recordset20::PutStayInSync(VARIANT_BOOL pbStayInSync) {
	HRESULT _hr = put_StayInSync(pbStayInSync);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 134)
VARIANT_BOOL ADODB::Recordset20::GetStayInSync() {
	VARIANT_BOOL _result;
	HRESULT _hr = get_StayInSync(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 135
_bstr_t ADODB::Recordset20::GetString(enum StringFormatEnum StringFormat, long NumRows, _bstr_t ColumnDelimeter, _bstr_t RowDelimeter, _bstr_t NullExpr) {
	BSTR _result;
	HRESULT _hr = raw_GetString(StringFormat, NumRows, ColumnDelimeter, RowDelimeter, NullExpr, &_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _bstr_t(_result, false);
}
// Index: 136
_bstr_t ADODB::Recordset20::GetDataMember() {
	BSTR _result;
	HRESULT _hr = get_DataMember(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _bstr_t(_result, false);
}
// Index: 137
void ADODB::Recordset20::PutDataMember(_bstr_t pbstrDataMember) {
	HRESULT _hr = put_DataMember(pbstrDataMember);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 138
enum ADODB::CompareEnum ADODB::Recordset20::CompareBookmarks(const _variant_t& Bookmark1, const _variant_t& Bookmark2) {
	enum CompareEnum _result;
	HRESULT _hr = raw_CompareBookmarks(Bookmark1, Bookmark2, &_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 139)
ADODB::_RecordsetPtr ADODB::Recordset20::Clone(enum LockTypeEnum LockType) {
	struct _Recordset* _result;
	HRESULT _hr = raw_Clone(LockType, &_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _RecordsetPtr(_result, false);
}
// Index: 140
HRESULT ADODB::Recordset20::Resync(enum AffectEnum AffectRecords, enum ResyncEnum ResyncValues) {
	HRESULT _hr = raw_Resync(AffectRecords, ResyncValues);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
//
// interface Recordset21 wrapper method implementations
//
// Index: 141
HRESULT ADODB::Recordset21::Seek(const _variant_t& KeyValues, enum SeekEnum SeekOption) {
	HRESULT _hr = raw_Seek(KeyValues, SeekOption);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 142
void ADODB::Recordset21::PutIndex(_bstr_t pbstrIndex) {
	HRESULT _hr = put_Index(pbstrIndex);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 143
_bstr_t ADODB::Recordset21::GetIndex() {
	BSTR _result;
	HRESULT _hr = get_Index(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _bstr_t(_result, false);
}
//
// interface _Recordset wrapper method implementations
//
// Index: 144
HRESULT ADODB::_Recordset::Save(const _variant_t& Destination, enum PersistFormatEnum PersistFormat) {
	HRESULT _hr = raw_Save(Destination, PersistFormat);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
//
// interface Fields15 wrapper method implementations
//
// Index: 145)
ADODB::FieldPtr ADODB::Fields15::GetItem(const _variant_t& Index) {
	struct Field* _result;
	HRESULT _hr = get_Item(Index, &_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return FieldPtr(_result, false);
}
//
// interface Fields20 wrapper method implementations
//
// Index: 146
HRESULT ADODB::Fields20::_Append(_bstr_t Name, enum DataTypeEnum Type, long DefinedSize, enum FieldAttributeEnum Attrib) {
	HRESULT _hr = raw__Append(Name, Type, DefinedSize, Attrib);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 147
HRESULT ADODB::Fields20::Delete(const _variant_t& Index) {
	HRESULT _hr = raw_Delete(Index);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
//
// interface Fields wrapper method implementations
//
// Index: 148
HRESULT ADODB::Fields::Append(_bstr_t Name, enum DataTypeEnum Type, long DefinedSize, enum FieldAttributeEnum Attrib, const _variant_t& FieldValue) {
	HRESULT _hr = raw_Append(Name, Type, DefinedSize, Attrib, FieldValue);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 149
HRESULT ADODB::Fields::Update() {
	HRESULT _hr = raw_Update();
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 150
HRESULT ADODB::Fields::Resync(enum ResyncEnum ResyncValues) {
	HRESULT _hr = raw_Resync(ResyncValues);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 151
HRESULT ADODB::Fields::CancelUpdate() {
	HRESULT _hr = raw_CancelUpdate();
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
//
// interface Field20 wrapper method implementations
//
// Index: 152)
long ADODB::Field20::GetActualSize() {
	long _result;
	HRESULT _hr = get_ActualSize(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 153)
long ADODB::Field20::GetAttributes() {
	long _result;
	HRESULT _hr = get_Attributes(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 154)
long ADODB::Field20::GetDefinedSize() {
	long _result;
	HRESULT _hr = get_DefinedSize(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 155
_bstr_t ADODB::Field20::GetName() {
	BSTR _result;
	HRESULT _hr = get_Name(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _bstr_t(_result, false);
}
// Index: 156
enum ADODB::DataTypeEnum ADODB::Field20::GetType() {
	enum DataTypeEnum _result;
	HRESULT _hr = get_Type(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 157
_variant_t ADODB::Field20::GetValue() {
	VARIANT _result;
	VariantInit(&_result);
	HRESULT _hr = get_Value(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _variant_t(_result, false);
}
// Index: 158
void ADODB::Field20::PutValue(const _variant_t& pvar) {
	HRESULT _hr = put_Value(pvar);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 159)
unsigned char ADODB::Field20::GetPrecision() {
	unsigned char _result;
	HRESULT _hr = get_Precision(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 160)
unsigned char ADODB::Field20::GetNumericScale() {
	unsigned char _result;
	HRESULT _hr = get_NumericScale(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 161
HRESULT ADODB::Field20::AppendChunk(const _variant_t& Data) {
	HRESULT _hr = raw_AppendChunk(Data);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 162
_variant_t ADODB::Field20::GetChunk(long Length) {
	VARIANT _result;
	VariantInit(&_result);
	HRESULT _hr = raw_GetChunk(Length, &_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _variant_t(_result, false);
}
// Index: 163
_variant_t ADODB::Field20::GetOriginalValue() {
	VARIANT _result;
	VariantInit(&_result);
	HRESULT _hr = get_OriginalValue(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _variant_t(_result, false);
}
// Index: 164
_variant_t ADODB::Field20::GetUnderlyingValue() {
	VARIANT _result;
	VariantInit(&_result);
	HRESULT _hr = get_UnderlyingValue(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _variant_t(_result, false);
}
// Index: 165)
IUnknownPtr ADODB::Field20::GetDataFormat() {
	IUnknown* _result;
	HRESULT _hr = get_DataFormat(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return IUnknownPtr(_result, false);
}
// Index: 166
void ADODB::Field20::PutRefDataFormat(IUnknown* ppiDF) {
	HRESULT _hr = putref_DataFormat(ppiDF);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 167
void ADODB::Field20::PutPrecision(unsigned char pbPrecision) {
	HRESULT _hr = put_Precision(pbPrecision);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 168
void ADODB::Field20::PutNumericScale(unsigned char pbNumericScale) {
	HRESULT _hr = put_NumericScale(pbNumericScale);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 169
void ADODB::Field20::PutType(enum DataTypeEnum pDataType) {
	HRESULT _hr = put_Type(pDataType);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 170
void ADODB::Field20::PutDefinedSize(long pl) {
	HRESULT _hr = put_DefinedSize(pl);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 171
void ADODB::Field20::PutAttributes(long pl) {
	HRESULT _hr = put_Attributes(pl);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
//
// interface Field wrapper method implementations
//
// Index: 172)
long ADODB::Field::GetStatus() {
	long _result;
	HRESULT _hr = get_Status(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
//
// interface _Parameter wrapper method implementations
//
// Index: 173
_bstr_t ADODB::_Parameter::GetName() {
	BSTR _result;
	HRESULT _hr = get_Name(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _bstr_t(_result, false);
}
// Index: 174
void ADODB::_Parameter::PutName(_bstr_t pbstr) {
	HRESULT _hr = put_Name(pbstr);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 175
_variant_t ADODB::_Parameter::GetValue() {
	VARIANT _result;
	VariantInit(&_result);
	HRESULT _hr = get_Value(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _variant_t(_result, false);
}
// Index: 176
void ADODB::_Parameter::PutValue(const _variant_t& pvar) {
	HRESULT _hr = put_Value(pvar);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 177
enum ADODB::DataTypeEnum ADODB::_Parameter::GetType() {
	enum DataTypeEnum _result;
	HRESULT _hr = get_Type(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 178
void ADODB::_Parameter::PutType(enum DataTypeEnum psDataType) {
	HRESULT _hr = put_Type(psDataType);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 179
void ADODB::_Parameter::PutDirection(enum ParameterDirectionEnum plParmDirection) {
	HRESULT _hr = put_Direction(plParmDirection);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 180
enum ADODB::ParameterDirectionEnum ADODB::_Parameter::GetDirection() {
	enum ParameterDirectionEnum _result;
	HRESULT _hr = get_Direction(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 181
void ADODB::_Parameter::PutPrecision(unsigned char pbPrecision) {
	HRESULT _hr = put_Precision(pbPrecision);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 182)
unsigned char ADODB::_Parameter::GetPrecision() {
	unsigned char _result;
	HRESULT _hr = get_Precision(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 183
void ADODB::_Parameter::PutNumericScale(unsigned char pbScale) {
	HRESULT _hr = put_NumericScale(pbScale);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 184)
unsigned char ADODB::_Parameter::GetNumericScale() {
	unsigned char _result;
	HRESULT _hr = get_NumericScale(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 185
void ADODB::_Parameter::PutSize(long pl) {
	HRESULT _hr = put_Size(pl);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 186)
long ADODB::_Parameter::GetSize() {
	long _result;
	HRESULT _hr = get_Size(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 187
HRESULT ADODB::_Parameter::AppendChunk(const _variant_t& Val) {
	HRESULT _hr = raw_AppendChunk(Val);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 188)
long ADODB::_Parameter::GetAttributes() {
	long _result;
	HRESULT _hr = get_Attributes(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 189
void ADODB::_Parameter::PutAttributes(long plParmAttribs) {
	HRESULT _hr = put_Attributes(plParmAttribs);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
//
// interface Parameters wrapper method implementations
//
// Index: 190)
ADODB::_ParameterPtr ADODB::Parameters::GetItem(const _variant_t& Index) {
	struct _Parameter* _result;
	HRESULT _hr = get_Item(Index, &_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _ParameterPtr(_result, false);
}
//
// interface Command25 wrapper method implementations
//
// Index: 191)
long ADODB::Command25::GetState() {
	long _result;
	HRESULT _hr = get_State(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 192
HRESULT ADODB::Command25::Cancel() {
	HRESULT _hr = raw_Cancel();
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
//
// interface _Command wrapper method implementations
//
// Index: 193
void ADODB::_Command::PutRefCommandStream(IUnknown* pvStream) {
	HRESULT _hr = putref_CommandStream(pvStream);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 194
_variant_t ADODB::_Command::GetCommandStream() {
	VARIANT _result;
	VariantInit(&_result);
	HRESULT _hr = get_CommandStream(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _variant_t(_result, false);
}
// Index: 195
void ADODB::_Command::PutDialect(_bstr_t pbstrDialect) {
	HRESULT _hr = put_Dialect(pbstrDialect);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 196
_bstr_t ADODB::_Command::GetDialect() {
	BSTR _result;
	HRESULT _hr = get_Dialect(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _bstr_t(_result, false);
}
// Index: 197
void ADODB::_Command::PutNamedParameters(VARIANT_BOOL pfNamedParameters) {
	HRESULT _hr = put_NamedParameters(pfNamedParameters);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 198)
VARIANT_BOOL ADODB::_Command::GetNamedParameters() {
	VARIANT_BOOL _result;
	HRESULT _hr = get_NamedParameters(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
//
// interface ConnectionEventsVt wrapper method implementations
//
// Index: 199
HRESULT ADODB::ConnectionEventsVt::InfoMessage(struct Error* pError, enum EventStatusEnum* adStatus, struct _Connection* pConnection) {
	HRESULT _hr = raw_InfoMessage(pError, adStatus, pConnection);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 200
HRESULT ADODB::ConnectionEventsVt::BeginTransComplete(long TransactionLevel, struct Error* pError, enum EventStatusEnum* adStatus, struct _Connection* pConnection) {
	HRESULT _hr = raw_BeginTransComplete(TransactionLevel, pError, adStatus, pConnection);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 201
HRESULT ADODB::ConnectionEventsVt::CommitTransComplete(struct Error* pError, enum EventStatusEnum* adStatus, struct _Connection* pConnection) {
	HRESULT _hr = raw_CommitTransComplete(pError, adStatus, pConnection);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 202
HRESULT ADODB::ConnectionEventsVt::RollbackTransComplete(struct Error* pError, enum EventStatusEnum* adStatus, struct _Connection* pConnection) {
	HRESULT _hr = raw_RollbackTransComplete(pError, adStatus, pConnection);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 203
HRESULT ADODB::ConnectionEventsVt::WillExecute(BSTR* Source, enum CursorTypeEnum* CursorType, enum LockTypeEnum* LockType, long* Options, enum EventStatusEnum* adStatus, struct _Command* pCommand, struct _Recordset* pRecordset, struct _Connection* pConnection) {
	HRESULT _hr = raw_WillExecute(Source, CursorType, LockType, Options, adStatus, pCommand, pRecordset, pConnection);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 204
HRESULT ADODB::ConnectionEventsVt::ExecuteComplete(long RecordsAffected, struct Error* pError, enum EventStatusEnum* adStatus, struct _Command* pCommand, struct _Recordset* pRecordset, struct _Connection* pConnection) {
	HRESULT _hr = raw_ExecuteComplete(RecordsAffected, pError, adStatus, pCommand, pRecordset, pConnection);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 205
HRESULT ADODB::ConnectionEventsVt::WillConnect(BSTR* ConnectionString, BSTR* UserID, BSTR* Password, long* Options, enum EventStatusEnum* adStatus, struct _Connection* pConnection) {
	HRESULT _hr = raw_WillConnect(ConnectionString, UserID, Password, Options, adStatus, pConnection);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 206
HRESULT ADODB::ConnectionEventsVt::ConnectComplete(struct Error* pError, enum EventStatusEnum* adStatus, struct _Connection* pConnection) {
	HRESULT _hr = raw_ConnectComplete(pError, adStatus, pConnection);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 207
HRESULT ADODB::ConnectionEventsVt::Disconnect(enum EventStatusEnum* adStatus, struct _Connection* pConnection) {
	HRESULT _hr = raw_Disconnect(adStatus, pConnection);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
//
// interface RecordsetEventsVt wrapper method implementations
//
// Index: 208
HRESULT ADODB::RecordsetEventsVt::WillChangeField(long cFields, const _variant_t& Fields, enum EventStatusEnum* adStatus, struct _Recordset* pRecordset) {
	HRESULT _hr = raw_WillChangeField(cFields, Fields, adStatus, pRecordset);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 209
HRESULT ADODB::RecordsetEventsVt::FieldChangeComplete(long cFields, const _variant_t& Fields, struct Error* pError, enum EventStatusEnum* adStatus, struct _Recordset* pRecordset) {
	HRESULT _hr = raw_FieldChangeComplete(cFields, Fields, pError, adStatus, pRecordset);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 210
HRESULT ADODB::RecordsetEventsVt::WillChangeRecord(enum EventReasonEnum adReason, long cRecords, enum EventStatusEnum* adStatus, struct _Recordset* pRecordset) {
	HRESULT _hr = raw_WillChangeRecord(adReason, cRecords, adStatus, pRecordset);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 211
HRESULT ADODB::RecordsetEventsVt::RecordChangeComplete(enum EventReasonEnum adReason, long cRecords, struct Error* pError, enum EventStatusEnum* adStatus, struct _Recordset* pRecordset) {
	HRESULT _hr = raw_RecordChangeComplete(adReason, cRecords, pError, adStatus, pRecordset);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 212
HRESULT ADODB::RecordsetEventsVt::WillChangeRecordset(enum EventReasonEnum adReason, enum EventStatusEnum* adStatus, struct _Recordset* pRecordset) {
	HRESULT _hr = raw_WillChangeRecordset(adReason, adStatus, pRecordset);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 213
HRESULT ADODB::RecordsetEventsVt::RecordsetChangeComplete(enum EventReasonEnum adReason, struct Error* pError, enum EventStatusEnum* adStatus, struct _Recordset* pRecordset) {
	HRESULT _hr = raw_RecordsetChangeComplete(adReason, pError, adStatus, pRecordset);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 214
HRESULT ADODB::RecordsetEventsVt::WillMove(enum EventReasonEnum adReason, enum EventStatusEnum* adStatus, struct _Recordset* pRecordset) {
	HRESULT _hr = raw_WillMove(adReason, adStatus, pRecordset);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 215
HRESULT ADODB::RecordsetEventsVt::MoveComplete(enum EventReasonEnum adReason, struct Error* pError, enum EventStatusEnum* adStatus, struct _Recordset* pRecordset) {
	HRESULT _hr = raw_MoveComplete(adReason, pError, adStatus, pRecordset);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 216
HRESULT ADODB::RecordsetEventsVt::EndOfRecordset(VARIANT_BOOL* fMoreData, enum EventStatusEnum* adStatus, struct _Recordset* pRecordset) {
	HRESULT _hr = raw_EndOfRecordset(fMoreData, adStatus, pRecordset);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 217
HRESULT ADODB::RecordsetEventsVt::FetchProgress(long Progress, long MaxProgress, enum EventStatusEnum* adStatus, struct _Recordset* pRecordset) {
	HRESULT _hr = raw_FetchProgress(Progress, MaxProgress, adStatus, pRecordset);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 218
HRESULT ADODB::RecordsetEventsVt::FetchComplete(struct Error* pError, enum EventStatusEnum* adStatus, struct _Recordset* pRecordset) {
	HRESULT _hr = raw_FetchComplete(pError, adStatus, pRecordset);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
//
// dispinterface ConnectionEvents wrapper method implementations
//
// Index: 219
HRESULT ADODB::ConnectionEvents::InfoMessage(struct Error* pError, enum EventStatusEnum* adStatus, struct _Connection* pConnection) {
	HRESULT _result;
	_com_dispatch_method(this, 0x0, DISPATCH_METHOD, VT_ERROR, (void*)&_result, L"\x0009\x4003\x0009", pError, adStatus, pConnection);
	return _result;
}
// Index: 220
HRESULT ADODB::ConnectionEvents::BeginTransComplete(long TransactionLevel, struct Error* pError, enum EventStatusEnum* adStatus, struct _Connection* pConnection) {
	HRESULT _result;
	_com_dispatch_method(this, 0x1, DISPATCH_METHOD, VT_ERROR, (void*)&_result, L"\x0003\x0009\x4003\x0009", TransactionLevel, pError, adStatus, pConnection);
	return _result;
}
// Index: 221
HRESULT ADODB::ConnectionEvents::CommitTransComplete(struct Error* pError, enum EventStatusEnum* adStatus, struct _Connection* pConnection) {
	HRESULT _result;
	_com_dispatch_method(this, 0x3, DISPATCH_METHOD, VT_ERROR, (void*)&_result, L"\x0009\x4003\x0009", pError, adStatus, pConnection);
	return _result;
}
// Index: 222
HRESULT ADODB::ConnectionEvents::RollbackTransComplete(struct Error* pError, enum EventStatusEnum* adStatus, struct _Connection* pConnection) {
	HRESULT _result;
	_com_dispatch_method(this, 0x2, DISPATCH_METHOD, VT_ERROR, (void*)&_result, L"\x0009\x4003\x0009", pError, adStatus, pConnection);
	return _result;
}
// Index: 223
HRESULT ADODB::ConnectionEvents::WillExecute(BSTR* Source, enum CursorTypeEnum* CursorType, enum LockTypeEnum* LockType, long* Options, enum EventStatusEnum* adStatus, struct _Command* pCommand, struct _Recordset* pRecordset, struct _Connection* pConnection) {
	HRESULT _result;
	_com_dispatch_method(this, 0x4, DISPATCH_METHOD, VT_ERROR, (void*)&_result, L"\x4008\x4003\x4003\x4003\x4003\x0009\x0009\x0009", Source, CursorType, LockType, Options, adStatus, pCommand, pRecordset, pConnection);
	return _result;
}
// Index: 224
HRESULT ADODB::ConnectionEvents::ExecuteComplete(long RecordsAffected, struct Error* pError, enum EventStatusEnum* adStatus, struct _Command* pCommand, struct _Recordset* pRecordset, struct _Connection* pConnection) {
	HRESULT _result;
	_com_dispatch_method(this, 0x5, DISPATCH_METHOD, VT_ERROR, (void*)&_result, L"\x0003\x0009\x4003\x0009\x0009\x0009", RecordsAffected, pError, adStatus, pCommand, pRecordset, pConnection);
	return _result;
}
// Index: 225
HRESULT ADODB::ConnectionEvents::WillConnect(BSTR* ConnectionString, BSTR* UserID, BSTR* Password, long* Options, enum EventStatusEnum* adStatus, struct _Connection* pConnection) {
	HRESULT _result;
	_com_dispatch_method(this, 0x6, DISPATCH_METHOD, VT_ERROR, (void*)&_result, L"\x4008\x4008\x4008\x4003\x4003\x0009", ConnectionString, UserID, Password, Options, adStatus, pConnection);
	return _result;
}
// Index: 226
HRESULT ADODB::ConnectionEvents::ConnectComplete(struct Error* pError, enum EventStatusEnum* adStatus, struct _Connection* pConnection) {
	HRESULT _result;
	_com_dispatch_method(this, 0x7, DISPATCH_METHOD, VT_ERROR, (void*)&_result, L"\x0009\x4003\x0009", pError, adStatus, pConnection);
	return _result;
}
// Index: 227
HRESULT ADODB::ConnectionEvents::Disconnect(enum EventStatusEnum* adStatus, struct _Connection* pConnection) {
	HRESULT _result;
	_com_dispatch_method(this, 0x8, DISPATCH_METHOD, VT_ERROR, (void*)&_result, L"\x4003\x0009", adStatus, pConnection);
	return _result;
}
// Index: 228
HRESULT ADODB::RecordsetEvents::WillChangeField(long cFields, const _variant_t& Fields, enum EventStatusEnum* adStatus, struct _Recordset* pRecordset) {
	HRESULT _result;
	_com_dispatch_method(this, 0x9, DISPATCH_METHOD, VT_ERROR, (void*)&_result, L"\x0003\x000c\x4003\x0009", cFields, &Fields, adStatus, pRecordset);
	return _result;
}
// Index: 229
HRESULT ADODB::RecordsetEvents::FieldChangeComplete(long cFields, const _variant_t& Fields, struct Error* pError, enum EventStatusEnum* adStatus, struct _Recordset* pRecordset) {
	HRESULT _result;
	_com_dispatch_method(this, 0xa, DISPATCH_METHOD, VT_ERROR, (void*)&_result, L"\x0003\x000c\x0009\x4003\x0009", cFields, &Fields, pError, adStatus, pRecordset);
	return _result;
}
// Index: 230
HRESULT ADODB::RecordsetEvents::WillChangeRecord(enum EventReasonEnum adReason, long cRecords, enum EventStatusEnum* adStatus, struct _Recordset* pRecordset) {
	HRESULT _result;
	_com_dispatch_method(this, 0xb, DISPATCH_METHOD, VT_ERROR, (void*)&_result, L"\x0003\x0003\x4003\x0009", adReason, cRecords, adStatus, pRecordset);
	return _result;
}
// Index: 231
HRESULT ADODB::RecordsetEvents::RecordChangeComplete(enum EventReasonEnum adReason, long cRecords, struct Error* pError, enum EventStatusEnum* adStatus, struct _Recordset* pRecordset) {
	HRESULT _result;
	_com_dispatch_method(this, 0xc, DISPATCH_METHOD, VT_ERROR, (void*)&_result, L"\x0003\x0003\x0009\x4003\x0009", adReason, cRecords, pError, adStatus, pRecordset);
	return _result;
}
// Index: 232
HRESULT ADODB::RecordsetEvents::WillChangeRecordset(enum EventReasonEnum adReason, enum EventStatusEnum* adStatus, struct _Recordset* pRecordset) {
	HRESULT _result;
	_com_dispatch_method(this, 0xd, DISPATCH_METHOD, VT_ERROR, (void*)&_result, L"\x0003\x4003\x0009", adReason, adStatus, pRecordset);
	return _result;
}
// Index: 233
HRESULT ADODB::RecordsetEvents::RecordsetChangeComplete(enum EventReasonEnum adReason, struct Error* pError, enum EventStatusEnum* adStatus, struct _Recordset* pRecordset) {
	HRESULT _result;
	_com_dispatch_method(this, 0xe, DISPATCH_METHOD, VT_ERROR, (void*)&_result, L"\x0003\x0009\x4003\x0009", adReason, pError, adStatus, pRecordset);
	return _result;
}
// Index: 234
HRESULT ADODB::RecordsetEvents::WillMove(enum EventReasonEnum adReason, enum EventStatusEnum* adStatus, struct _Recordset* pRecordset) {
	HRESULT _result;
	_com_dispatch_method(this, 0xf, DISPATCH_METHOD, VT_ERROR, (void*)&_result, L"\x0003\x4003\x0009", adReason, adStatus, pRecordset);
	return _result;
}
// Index: 235
HRESULT ADODB::RecordsetEvents::MoveComplete(enum EventReasonEnum adReason, struct Error* pError, enum EventStatusEnum* adStatus, struct _Recordset* pRecordset) {
	HRESULT _result;
	_com_dispatch_method(this, 0x10, DISPATCH_METHOD, VT_ERROR, (void*)&_result, L"\x0003\x0009\x4003\x0009", adReason, pError, adStatus, pRecordset);
	return _result;
}
// Index: 236
HRESULT ADODB::RecordsetEvents::EndOfRecordset(VARIANT_BOOL* fMoreData, enum EventStatusEnum* adStatus, struct _Recordset* pRecordset) {
	HRESULT _result;
	_com_dispatch_method(this, 0x11, DISPATCH_METHOD, VT_ERROR, (void*)&_result, L"\x400b\x4003\x0009", fMoreData, adStatus, pRecordset);
	return _result;
}
// Index: 237
HRESULT ADODB::RecordsetEvents::FetchProgress(long Progress, long MaxProgress, enum EventStatusEnum* adStatus, struct _Recordset* pRecordset) {
	HRESULT _result;
	_com_dispatch_method(this, 0x12, DISPATCH_METHOD, VT_ERROR, (void*)&_result, L"\x0003\x0003\x4003\x0009", Progress, MaxProgress, adStatus, pRecordset);
	return _result;
}
// Index: 238
HRESULT ADODB::RecordsetEvents::FetchComplete(struct Error* pError, enum EventStatusEnum* adStatus, struct _Recordset* pRecordset) {
	HRESULT _result;
	_com_dispatch_method(this, 0x13, DISPATCH_METHOD, VT_ERROR, (void*)&_result, L"\x0009\x4003\x0009", pError, adStatus, pRecordset);
	return _result;
}
// Index: 239)
IUnknownPtr ADODB::ADOConnectionConstruction15::GetDSO() {
	IUnknown* _result;
	HRESULT _hr = get_DSO(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return IUnknownPtr(_result, false);
}
// Index: 240)
IUnknownPtr ADODB::ADOConnectionConstruction15::GetSession() {
	IUnknown* _result;
	HRESULT _hr = get_Session(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return IUnknownPtr(_result, false);
}
// Index: 241
HRESULT ADODB::ADOConnectionConstruction15::WrapDSOandSession(IUnknown* pDSO, IUnknown* pSession) {
	HRESULT _hr = raw_WrapDSOandSession(pDSO, pSession);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 242
_variant_t ADODB::_Record::GetActiveConnection() {
	VARIANT _result;
	VariantInit(&_result);
	HRESULT _hr = get_ActiveConnection(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _variant_t(_result, false);
}
// Index: 243
void ADODB::_Record::PutActiveConnection(_bstr_t pvar) {
	HRESULT _hr = put_ActiveConnection(pvar);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 244
void ADODB::_Record::PutRefActiveConnection(struct _Connection* pvar) {
	HRESULT _hr = putref_ActiveConnection(pvar);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 245
enum ADODB::ObjectStateEnum ADODB::_Record::GetState() {
	enum ObjectStateEnum _result;
	HRESULT _hr = get_State(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 246
_variant_t ADODB::_Record::GetSource() {
	VARIANT _result;
	VariantInit(&_result);
	HRESULT _hr = get_Source(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _variant_t(_result, false);
}
// Index: 247
void ADODB::_Record::PutSource(_bstr_t pvar) {
	HRESULT _hr = put_Source(pvar);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 248
void ADODB::_Record::PutRefSource(IDispatch* pvar) {
	HRESULT _hr = putref_Source(pvar);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 249
enum ADODB::ConnectModeEnum ADODB::_Record::GetMode() {
	enum ConnectModeEnum _result;
	HRESULT _hr = get_Mode(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 250
void ADODB::_Record::PutMode(enum ConnectModeEnum pMode) {
	HRESULT _hr = put_Mode(pMode);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 251
_bstr_t ADODB::_Record::GetParentURL() {
	BSTR _result;
	HRESULT _hr = get_ParentURL(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _bstr_t(_result, false);
}
// Index: 252
_bstr_t ADODB::_Record::MoveRecord(_bstr_t Source, _bstr_t Destination, _bstr_t UserName, _bstr_t Password, enum MoveRecordOptionsEnum Options, VARIANT_BOOL Async) {
	BSTR _result;
	HRESULT _hr = raw_MoveRecord(Source, Destination, UserName, Password, Options, Async, &_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _bstr_t(_result, false);
}
// Index: 253
_bstr_t ADODB::_Record::CopyRecord(_bstr_t Source, _bstr_t Destination, _bstr_t UserName, _bstr_t Password, enum CopyRecordOptionsEnum Options, VARIANT_BOOL Async) {
	BSTR _result;
	HRESULT _hr = raw_CopyRecord(Source, Destination, UserName, Password, Options, Async, &_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _bstr_t(_result, false);
}
// Index: 254
HRESULT ADODB::_Record::DeleteRecord(_bstr_t Source, VARIANT_BOOL Async) {
	HRESULT _hr = raw_DeleteRecord(Source, Async);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 255
HRESULT ADODB::_Record::Open(const _variant_t& Source, const _variant_t& ActiveConnection, enum ConnectModeEnum Mode, enum RecordCreateOptionsEnum CreateOptions, enum RecordOpenOptionsEnum Options, _bstr_t UserName, _bstr_t Password) {
	HRESULT _hr = raw_Open(Source, ActiveConnection, Mode, CreateOptions, Options, UserName, Password);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 256
HRESULT ADODB::_Record::Close() {
	HRESULT _hr = raw_Close();
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 257)
ADODB::FieldsPtr ADODB::_Record::GetFields() {
	struct Fields* _result;
	HRESULT _hr = get_Fields(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return FieldsPtr(_result, false);
}
// Index: 258
enum ADODB::RecordTypeEnum ADODB::_Record::GetRecordType() {
	enum RecordTypeEnum _result;
	HRESULT _hr = get_RecordType(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 259)
ADODB::_RecordsetPtr ADODB::_Record::GetChildren() {
	struct _Recordset* _result;
	HRESULT _hr = raw_GetChildren(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _RecordsetPtr(_result, false);
}
// Index: 260
HRESULT ADODB::_Record::Cancel() {
	HRESULT _hr = raw_Cancel();
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
//
// interface _Stream wrapper method implementations
//
// Index: 261)
long ADODB::_Stream::GetSize() {
	long _result;
	HRESULT _hr = get_Size(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 262)
VARIANT_BOOL ADODB::_Stream::GetEOS() {
	VARIANT_BOOL _result;
	HRESULT _hr = get_EOS(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 263)
long ADODB::_Stream::GetPosition() {
	long _result;
	HRESULT _hr = get_Position(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 264
void ADODB::_Stream::PutPosition(long pPos) {
	HRESULT _hr = put_Position(pPos);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 265
enum ADODB::StreamTypeEnum ADODB::_Stream::GetType() {
	enum StreamTypeEnum _result;
	HRESULT _hr = get_Type(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 266
void ADODB::_Stream::PutType(enum StreamTypeEnum ptype) {
	HRESULT _hr = put_Type(ptype);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 267
enum ADODB::LineSeparatorEnum ADODB::_Stream::GetLineSeparator() {
	enum LineSeparatorEnum _result;
	HRESULT _hr = get_LineSeparator(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 268
void ADODB::_Stream::PutLineSeparator(enum LineSeparatorEnum pLS) {
	HRESULT _hr = put_LineSeparator(pLS);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 269
enum ADODB::ObjectStateEnum ADODB::_Stream::GetState() {
	enum ObjectStateEnum _result;
	HRESULT _hr = get_State(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 270
enum ADODB::ConnectModeEnum ADODB::_Stream::GetMode() {
	enum ConnectModeEnum _result;
	HRESULT _hr = get_Mode(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 271
void ADODB::_Stream::PutMode(enum ConnectModeEnum pMode) {
	HRESULT _hr = put_Mode(pMode);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 272
_bstr_t ADODB::_Stream::GetCharset() {
	BSTR _result;
	HRESULT _hr = get_Charset(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _bstr_t(_result, false);
}
// Index: 273
void ADODB::_Stream::PutCharset(_bstr_t pbstrCharset) {
	HRESULT _hr = put_Charset(pbstrCharset);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 274
_variant_t ADODB::_Stream::Read(long NumBytes) {
	VARIANT _result;
	VariantInit(&_result);
	HRESULT _hr = raw_Read(NumBytes, &_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _variant_t(_result, false);
}
// Index: 275
HRESULT ADODB::_Stream::Open(const _variant_t& Source, enum ConnectModeEnum Mode, enum StreamOpenOptionsEnum Options, _bstr_t UserName, _bstr_t Password) {
	HRESULT _hr = raw_Open(Source, Mode, Options, UserName, Password);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 276
HRESULT ADODB::_Stream::Close() {
	HRESULT _hr = raw_Close();
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 277
HRESULT ADODB::_Stream::SkipLine() {
	HRESULT _hr = raw_SkipLine();
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 278
HRESULT ADODB::_Stream::Write(const _variant_t& Buffer) {
	HRESULT _hr = raw_Write(Buffer);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 279
HRESULT ADODB::_Stream::SetEOS() {
	HRESULT _hr = raw_SetEOS();
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 280
HRESULT ADODB::_Stream::CopyTo(struct _Stream* DestStream, long CharNumber) {
	HRESULT _hr = raw_CopyTo(DestStream, CharNumber);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 281
HRESULT ADODB::_Stream::Flush() {
	HRESULT _hr = raw_Flush();
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 282
HRESULT ADODB::_Stream::SaveToFile(_bstr_t FileName, enum SaveOptionsEnum Options) {
	HRESULT _hr = raw_SaveToFile(FileName, Options);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 283
HRESULT ADODB::_Stream::LoadFromFile(_bstr_t FileName) {
	HRESULT _hr = raw_LoadFromFile(FileName);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 284
_bstr_t ADODB::_Stream::ReadText(long NumChars) {
	BSTR _result;
	HRESULT _hr = raw_ReadText(NumChars, &_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _bstr_t(_result, false);
}
// Index: 285
HRESULT ADODB::_Stream::WriteText(_bstr_t Data, enum StreamWriteEnum Options) {
	HRESULT _hr = raw_WriteText(Data, Options);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 286
HRESULT ADODB::_Stream::Cancel() {
	HRESULT _hr = raw_Cancel();
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
//
// interface ADORecordConstruction wrapper method implementations
//
// Index: 287)
IUnknownPtr ADODB::ADORecordConstruction::GetRow() {
	IUnknown* _result;
	HRESULT _hr = get_Row(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return IUnknownPtr(_result, false);
}
// Index: 288
void ADODB::ADORecordConstruction::PutRow(IUnknown* ppRow) {
	HRESULT _hr = put_Row(ppRow);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 289
void ADODB::ADORecordConstruction::PutParentRow(IUnknown* _arg1) {
	HRESULT _hr = put_ParentRow(_arg1);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
//
// interface ADOStreamConstruction wrapper method implementations
//
// Index: 290)
IUnknownPtr ADODB::ADOStreamConstruction::GetStream() {
	IUnknown* _result;
	HRESULT _hr = get_Stream(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return IUnknownPtr(_result, false);
}
// Index: 291
void ADODB::ADOStreamConstruction::PutStream(IUnknown* ppStm) {
	HRESULT _hr = put_Stream(ppStm);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
//
// interface ADOCommandConstruction wrapper method implementations
//
// Index: 292)
IUnknownPtr ADODB::ADOCommandConstruction::GetOLEDBCommand() {
	IUnknown* _result;
	HRESULT _hr = get_OLEDBCommand(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return IUnknownPtr(_result, false);
}
// Index: 293
void ADODB::ADOCommandConstruction::PutOLEDBCommand(IUnknown* ppOLEDBCommand) {
	HRESULT _hr = put_OLEDBCommand(ppOLEDBCommand);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
//
// interface ADORecordsetConstruction wrapper method implementations
//
// Index: 294)
IUnknownPtr ADODB::ADORecordsetConstruction::GetRowset() {
	IUnknown* _result;
	HRESULT _hr = get_Rowset(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return IUnknownPtr(_result, false);
}
// Index: 295
void ADODB::ADORecordsetConstruction::PutRowset(IUnknown* ppRowset) {
	HRESULT _hr = put_Rowset(ppRowset);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 296
ADODB::ADO_LONGPTR ADODB::ADORecordsetConstruction::GetChapter() {
	ADO_LONGPTR _result;
	HRESULT _hr = get_Chapter(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 297
void ADODB::ADORecordsetConstruction::PutChapter(ADO_LONGPTR plChapter) {
	HRESULT _hr = put_Chapter(plChapter);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 298)
IUnknownPtr ADODB::ADORecordsetConstruction::GetRowPosition() {
	IUnknown* _result;
	HRESULT _hr = get_RowPosition(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return IUnknownPtr(_result, false);
}
// Index: 299
void ADODB::ADORecordsetConstruction::PutRowPosition(IUnknown* ppRowPos) {
	HRESULT _hr = put_RowPosition(ppRowPos);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
//
// interface Field15 wrapper method implementations
//
// Index: 300)
long ADODB::Field15::GetActualSize() {
	long _result;
	HRESULT _hr = get_ActualSize(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 301)
long ADODB::Field15::GetAttributes() {
	long _result;
	HRESULT _hr = get_Attributes(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 302)
long ADODB::Field15::GetDefinedSize() {
	long _result;
	HRESULT _hr = get_DefinedSize(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 303
_bstr_t ADODB::Field15::GetName() {
	BSTR _result;
	HRESULT _hr = get_Name(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _bstr_t(_result, false);
}
// Index: 304
enum ADODB::DataTypeEnum ADODB::Field15::GetType() {
	enum DataTypeEnum _result;
	HRESULT _hr = get_Type(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 305
_variant_t ADODB::Field15::GetValue() {
	VARIANT _result;
	VariantInit(&_result);
	HRESULT _hr = get_Value(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _variant_t(_result, false);
}
// Index: 306
void ADODB::Field15::PutValue(const _variant_t& pvar) {
	HRESULT _hr = put_Value(pvar);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 307)
unsigned char ADODB::Field15::GetPrecision() {
	unsigned char _result;
	HRESULT _hr = get_Precision(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 308)
unsigned char ADODB::Field15::GetNumericScale() {
	unsigned char _result;
	HRESULT _hr = get_NumericScale(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 309
HRESULT ADODB::Field15::AppendChunk(const _variant_t& Data) {
	HRESULT _hr = raw_AppendChunk(Data);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 310
_variant_t ADODB::Field15::GetChunk(long Length) {
	VARIANT _result;
	VariantInit(&_result);
	HRESULT _hr = raw_GetChunk(Length, &_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _variant_t(_result, false);
}
// Index: 311
_variant_t ADODB::Field15::GetOriginalValue() {
	VARIANT _result;
	VariantInit(&_result);
	HRESULT _hr = get_OriginalValue(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _variant_t(_result, false);
}
// Index: 312
_variant_t ADODB::Field15::GetUnderlyingValue() {
	VARIANT _result;
	VariantInit(&_result);
	HRESULT _hr = get_UnderlyingValue(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _variant_t(_result, false);
}
//
// interface Connection15_Deprecated wrapper method implementations
//
// Index: 313
_bstr_t ADODB::Connection15_Deprecated::GetConnectionString() {
	BSTR _result;
	HRESULT _hr = get_ConnectionString(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _bstr_t(_result, false);
}
// Index: 314
void ADODB::Connection15_Deprecated::PutConnectionString(_bstr_t pbstr) {
	HRESULT _hr = put_ConnectionString(pbstr);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 315)
long ADODB::Connection15_Deprecated::GetCommandTimeout() {
	long _result;
	HRESULT _hr = get_CommandTimeout(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 316
void ADODB::Connection15_Deprecated::PutCommandTimeout(long plTimeout) {
	HRESULT _hr = put_CommandTimeout(plTimeout);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 317)
long ADODB::Connection15_Deprecated::GetConnectionTimeout() {
	long _result;
	HRESULT _hr = get_ConnectionTimeout(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 318
void ADODB::Connection15_Deprecated::PutConnectionTimeout(long plTimeout) {
	HRESULT _hr = put_ConnectionTimeout(plTimeout);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 319
_bstr_t ADODB::Connection15_Deprecated::GetVersion() {
	BSTR _result;
	HRESULT _hr = get_Version(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _bstr_t(_result, false);
}
// Index: 320
HRESULT ADODB::Connection15_Deprecated::Close() {
	HRESULT _hr = raw_Close();
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 321)
ADODB::_Recordset_DeprecatedPtr ADODB::Connection15_Deprecated::Execute(_bstr_t CommandText, VARIANT* RecordsAffected, long Options) {
	struct _Recordset_Deprecated* _result;
	HRESULT _hr = raw_Execute(CommandText, RecordsAffected, Options, &_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _Recordset_DeprecatedPtr(_result, false);
}
// Index: 322)
long ADODB::Connection15_Deprecated::BeginTrans() {
	long _result;
	HRESULT _hr = raw_BeginTrans(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 323
HRESULT ADODB::Connection15_Deprecated::CommitTrans() {
	HRESULT _hr = raw_CommitTrans();
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 324
HRESULT ADODB::Connection15_Deprecated::RollbackTrans() {
	HRESULT _hr = raw_RollbackTrans();
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 325
HRESULT ADODB::Connection15_Deprecated::Open(_bstr_t ConnectionString, _bstr_t UserID, _bstr_t Password, long Options) {
	HRESULT _hr = raw_Open(ConnectionString, UserID, Password, Options);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 326)
ADODB::ErrorsPtr ADODB::Connection15_Deprecated::GetErrors() {
	struct Errors* _result;
	HRESULT _hr = get_Errors(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return ErrorsPtr(_result, false);
}
// Index: 327
_bstr_t ADODB::Connection15_Deprecated::GetDefaultDatabase() {
	BSTR _result;
	HRESULT _hr = get_DefaultDatabase(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _bstr_t(_result, false);
}
// Index: 328
void ADODB::Connection15_Deprecated::PutDefaultDatabase(_bstr_t pbstr) {
	HRESULT _hr = put_DefaultDatabase(pbstr);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 329
enum ADODB::IsolationLevelEnum ADODB::Connection15_Deprecated::GetIsolationLevel() {
	enum IsolationLevelEnum _result;
	HRESULT _hr = get_IsolationLevel(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 330
void ADODB::Connection15_Deprecated::PutIsolationLevel(enum IsolationLevelEnum Level) {
	HRESULT _hr = put_IsolationLevel(Level);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 331)
long ADODB::Connection15_Deprecated::GetAttributes() {
	long _result;
	HRESULT _hr = get_Attributes(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 332
void ADODB::Connection15_Deprecated::PutAttributes(long plAttr) {
	HRESULT _hr = put_Attributes(plAttr);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 333
enum ADODB::CursorLocationEnum ADODB::Connection15_Deprecated::GetCursorLocation() {
	enum CursorLocationEnum _result;
	HRESULT _hr = get_CursorLocation(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 334
void ADODB::Connection15_Deprecated::PutCursorLocation(enum CursorLocationEnum plCursorLoc) {
	HRESULT _hr = put_CursorLocation(plCursorLoc);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 335
enum ADODB::ConnectModeEnum ADODB::Connection15_Deprecated::GetMode() {
	enum ConnectModeEnum _result;
	HRESULT _hr = get_Mode(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 336
void ADODB::Connection15_Deprecated::PutMode(enum ConnectModeEnum plMode) {
	HRESULT _hr = put_Mode(plMode);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 337
_bstr_t ADODB::Connection15_Deprecated::GetProvider() {
	BSTR _result;
	HRESULT _hr = get_Provider(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _bstr_t(_result, false);
}
// Index: 338
void ADODB::Connection15_Deprecated::PutProvider(_bstr_t pbstr) {
	HRESULT _hr = put_Provider(pbstr);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 339)
long ADODB::Connection15_Deprecated::GetState() {
	long _result;
	HRESULT _hr = get_State(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 340)
ADODB::_Recordset_DeprecatedPtr ADODB::Connection15_Deprecated::OpenSchema(enum SchemaEnum Schema, const _variant_t& Restrictions, const _variant_t& SchemaID) {
	struct _Recordset_Deprecated* _result;
	HRESULT _hr = raw_OpenSchema(Schema, Restrictions, SchemaID, &_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _Recordset_DeprecatedPtr(_result, false);
}
//
// interface Recordset15_Deprecated wrapper method implementations
//
// Index: 341)
ADODB::PositionEnum_Param ADODB::Recordset15_Deprecated::GetAbsolutePosition() {
	PositionEnum_Param _result;
	HRESULT _hr = get_AbsolutePosition(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 342
void ADODB::Recordset15_Deprecated::PutAbsolutePosition(PositionEnum_Param pl) {
	HRESULT _hr = put_AbsolutePosition(pl);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 343
void ADODB::Recordset15_Deprecated::PutRefActiveConnection(IDispatch* pvar) {
	HRESULT _hr = putref_ActiveConnection(pvar);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 344
void ADODB::Recordset15_Deprecated::PutActiveConnection(const _variant_t& pvar) {
	HRESULT _hr = put_ActiveConnection(pvar);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 345
_variant_t ADODB::Recordset15_Deprecated::GetActiveConnection() {
	VARIANT _result;
	VariantInit(&_result);
	HRESULT _hr = get_ActiveConnection(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _variant_t(_result, false);
}
// Index: 346)
VARIANT_BOOL ADODB::Recordset15_Deprecated::GetBOF() {
	VARIANT_BOOL _result;
	HRESULT _hr = get_BOF(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 347
_variant_t ADODB::Recordset15_Deprecated::GetBookmark() {
	VARIANT _result;
	VariantInit(&_result);
	HRESULT _hr = get_Bookmark(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _variant_t(_result, false);
}
// Index: 348
void ADODB::Recordset15_Deprecated::PutBookmark(const _variant_t& pvBookmark) {
	HRESULT _hr = put_Bookmark(pvBookmark);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 349)
long ADODB::Recordset15_Deprecated::GetCacheSize() {
	long _result;
	HRESULT _hr = get_CacheSize(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 350
void ADODB::Recordset15_Deprecated::PutCacheSize(long pl) {
	HRESULT _hr = put_CacheSize(pl);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 351
enum ADODB::CursorTypeEnum ADODB::Recordset15_Deprecated::GetCursorType() {
	enum CursorTypeEnum _result;
	HRESULT _hr = get_CursorType(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 352
void ADODB::Recordset15_Deprecated::PutCursorType(enum CursorTypeEnum plCursorType) {
	HRESULT _hr = put_CursorType(plCursorType);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 353)
VARIANT_BOOL ADODB::Recordset15_Deprecated::GetEndOfFile() {
	VARIANT_BOOL _result;
	HRESULT _hr = get_EndOfFile(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 354)
ADODB::Fields_DeprecatedPtr ADODB::Recordset15_Deprecated::GetFields() {
	struct Fields_Deprecated* _result;
	HRESULT _hr = get_Fields(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return Fields_DeprecatedPtr(_result, false);
}
// Index: 355
enum ADODB::LockTypeEnum ADODB::Recordset15_Deprecated::GetLockType() {
	enum LockTypeEnum _result;
	HRESULT _hr = get_LockType(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 356
void ADODB::Recordset15_Deprecated::PutLockType(enum LockTypeEnum plLockType) {
	HRESULT _hr = put_LockType(plLockType);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 357
ADODB::ADO_LONGPTR ADODB::Recordset15_Deprecated::GetMaxRecords() {
	ADO_LONGPTR _result;
	HRESULT _hr = get_MaxRecords(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 358
void ADODB::Recordset15_Deprecated::PutMaxRecords(ADO_LONGPTR plMaxRecords) {
	HRESULT _hr = put_MaxRecords(plMaxRecords);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 359
ADODB::ADO_LONGPTR ADODB::Recordset15_Deprecated::GetRecordCount() {
	ADO_LONGPTR _result;
	HRESULT _hr = get_RecordCount(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 360
void ADODB::Recordset15_Deprecated::PutRefSource(IDispatch* pvSource) {
	HRESULT _hr = putref_Source(pvSource);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 361
void ADODB::Recordset15_Deprecated::PutSource(_bstr_t pvSource) {
	HRESULT _hr = put_Source(pvSource);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 362
_variant_t ADODB::Recordset15_Deprecated::GetSource() {
	VARIANT _result;
	VariantInit(&_result);
	HRESULT _hr = get_Source(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _variant_t(_result, false);
}
// Index: 363
HRESULT ADODB::Recordset15_Deprecated::AddNew(const _variant_t& FieldList, const _variant_t& Values) {
	HRESULT _hr = raw_AddNew(FieldList, Values);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 364
HRESULT ADODB::Recordset15_Deprecated::CancelUpdate() {
	HRESULT _hr = raw_CancelUpdate();
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 365
HRESULT ADODB::Recordset15_Deprecated::Close() {
	HRESULT _hr = raw_Close();
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 366
HRESULT ADODB::Recordset15_Deprecated::Delete(enum AffectEnum AffectRecords) {
	HRESULT _hr = raw_Delete(AffectRecords);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 367
_variant_t ADODB::Recordset15_Deprecated::GetRows(long Rows, const _variant_t& Start, const _variant_t& Fields) {
	VARIANT _result;
	VariantInit(&_result);
	HRESULT _hr = raw_GetRows(Rows, Start, Fields, &_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _variant_t(_result, false);
}
// Index: 368
HRESULT ADODB::Recordset15_Deprecated::Move(ADO_LONGPTR NumRecords, const _variant_t& Start) {
	HRESULT _hr = raw_Move(NumRecords, Start);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 369
HRESULT ADODB::Recordset15_Deprecated::MoveNext() {
	HRESULT _hr = raw_MoveNext();
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 370
HRESULT ADODB::Recordset15_Deprecated::MovePrevious() {
	HRESULT _hr = raw_MovePrevious();
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 371
HRESULT ADODB::Recordset15_Deprecated::MoveFirst() {
	HRESULT _hr = raw_MoveFirst();
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 372
HRESULT ADODB::Recordset15_Deprecated::MoveLast() {
	HRESULT _hr = raw_MoveLast();
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 373
HRESULT ADODB::Recordset15_Deprecated::Open(const _variant_t& Source, const _variant_t& ActiveConnection, enum CursorTypeEnum CursorType, enum LockTypeEnum LockType, long Options) {
	HRESULT _hr = raw_Open(Source, ActiveConnection, CursorType, LockType, Options);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 374
HRESULT ADODB::Recordset15_Deprecated::Requery(long Options) {
	HRESULT _hr = raw_Requery(Options);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 375
HRESULT ADODB::Recordset15_Deprecated::_xResync(enum AffectEnum AffectRecords) {
	HRESULT _hr = raw__xResync(AffectRecords);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 376
HRESULT ADODB::Recordset15_Deprecated::Update(const _variant_t& Fields, const _variant_t& Values) {
	HRESULT _hr = raw_Update(Fields, Values);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 377)
ADODB::PositionEnum_Param ADODB::Recordset15_Deprecated::GetAbsolutePage() {
	PositionEnum_Param _result;
	HRESULT _hr = get_AbsolutePage(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 378
void ADODB::Recordset15_Deprecated::PutAbsolutePage(PositionEnum_Param pl) {
	HRESULT _hr = put_AbsolutePage(pl);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 379
enum ADODB::EditModeEnum ADODB::Recordset15_Deprecated::GetEditMode() {
	enum EditModeEnum _result;
	HRESULT _hr = get_EditMode(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 380
_variant_t ADODB::Recordset15_Deprecated::GetFilter() {
	VARIANT _result;
	VariantInit(&_result);
	HRESULT _hr = get_Filter(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _variant_t(_result, false);
}
// Index: 381
void ADODB::Recordset15_Deprecated::PutFilter(const _variant_t& Criteria) {
	HRESULT _hr = put_Filter(Criteria);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 382
ADODB::ADO_LONGPTR ADODB::Recordset15_Deprecated::GetPageCount() {
	ADO_LONGPTR _result;
	HRESULT _hr = get_PageCount(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 383)
long ADODB::Recordset15_Deprecated::GetPageSize() {
	long _result;
	HRESULT _hr = get_PageSize(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 384
void ADODB::Recordset15_Deprecated::PutPageSize(long pl) {
	HRESULT _hr = put_PageSize(pl);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 385
_bstr_t ADODB::Recordset15_Deprecated::GetSort() {
	BSTR _result;
	HRESULT _hr = get_Sort(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _bstr_t(_result, false);
}
// Index: 386
void ADODB::Recordset15_Deprecated::PutSort(_bstr_t Criteria) {
	HRESULT _hr = put_Sort(Criteria);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 387)
long ADODB::Recordset15_Deprecated::GetStatus() {
	long _result;
	HRESULT _hr = get_Status(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 388)
long ADODB::Recordset15_Deprecated::GetState() {
	long _result;
	HRESULT _hr = get_State(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 389)
ADODB::_Recordset_DeprecatedPtr ADODB::Recordset15_Deprecated::_xClone() {
	struct _Recordset_Deprecated* _result;
	HRESULT _hr = raw__xClone(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _Recordset_DeprecatedPtr(_result, false);
}
// Index: 390
HRESULT ADODB::Recordset15_Deprecated::UpdateBatch(enum AffectEnum AffectRecords) {
	HRESULT _hr = raw_UpdateBatch(AffectRecords);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 391
HRESULT ADODB::Recordset15_Deprecated::CancelBatch(enum AffectEnum AffectRecords) {
	HRESULT _hr = raw_CancelBatch(AffectRecords);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 392
enum ADODB::CursorLocationEnum ADODB::Recordset15_Deprecated::GetCursorLocation() {
	enum CursorLocationEnum _result;
	HRESULT _hr = get_CursorLocation(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 393
void ADODB::Recordset15_Deprecated::PutCursorLocation(enum CursorLocationEnum plCursorLoc) {
	HRESULT _hr = put_CursorLocation(plCursorLoc);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 394)
ADODB::_Recordset_DeprecatedPtr ADODB::Recordset15_Deprecated::NextRecordset(VARIANT* RecordsAffected) {
	struct _Recordset_Deprecated* _result;
	HRESULT _hr = raw_NextRecordset(RecordsAffected, &_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _Recordset_DeprecatedPtr(_result, false);
}
// Index: 395)
VARIANT_BOOL ADODB::Recordset15_Deprecated::Supports(enum CursorOptionEnum CursorOptions) {
	VARIANT_BOOL _result;
	HRESULT _hr = raw_Supports(CursorOptions, &_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 396
_variant_t ADODB::Recordset15_Deprecated::GetCollect(const _variant_t& Index) {
	VARIANT _result;
	VariantInit(&_result);
	HRESULT _hr = get_Collect(Index, &_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _variant_t(_result, false);
}
// Index: 397
void ADODB::Recordset15_Deprecated::PutCollect(const _variant_t& Index, const _variant_t& pvar) {
	HRESULT _hr = put_Collect(Index, pvar);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 398
enum ADODB::MarshalOptionsEnum ADODB::Recordset15_Deprecated::GetMarshalOptions() {
	enum MarshalOptionsEnum _result;
	HRESULT _hr = get_MarshalOptions(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 399
void ADODB::Recordset15_Deprecated::PutMarshalOptions(enum MarshalOptionsEnum peMarshal) {
	HRESULT _hr = put_MarshalOptions(peMarshal);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 400
HRESULT ADODB::Recordset15_Deprecated::Find(_bstr_t Criteria, ADO_LONGPTR SkipRecords, enum SearchDirectionEnum SearchDirection, const _variant_t& Start) {
	HRESULT _hr = raw_Find(Criteria, SkipRecords, SearchDirection, Start);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
//
// interface Recordset20_Deprecated wrapper method implementations
//
// Index: 401
HRESULT ADODB::Recordset20_Deprecated::Cancel() {
	HRESULT _hr = raw_Cancel();
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 402)
IUnknownPtr ADODB::Recordset20_Deprecated::GetDataSource() {
	IUnknown* _result;
	HRESULT _hr = get_DataSource(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return IUnknownPtr(_result, false);
}
// Index: 403
void ADODB::Recordset20_Deprecated::PutRefDataSource(IUnknown* ppunkDataSource) {
	HRESULT _hr = putref_DataSource(ppunkDataSource);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 404
HRESULT ADODB::Recordset20_Deprecated::_xSave(_bstr_t FileName, enum PersistFormatEnum PersistFormat) {
	HRESULT _hr = raw__xSave(FileName, PersistFormat);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 405)
IDispatchPtr ADODB::Recordset20_Deprecated::GetActiveCommand() {
	IDispatch* _result;
	HRESULT _hr = get_ActiveCommand(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return IDispatchPtr(_result, false);
}
// Index: 406
void ADODB::Recordset20_Deprecated::PutStayInSync(VARIANT_BOOL pbStayInSync) {
	HRESULT _hr = put_StayInSync(pbStayInSync);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 407)
VARIANT_BOOL ADODB::Recordset20_Deprecated::GetStayInSync() {
	VARIANT_BOOL _result;
	HRESULT _hr = get_StayInSync(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 408
_bstr_t ADODB::Recordset20_Deprecated::GetString(enum StringFormatEnum StringFormat, long NumRows, _bstr_t ColumnDelimeter, _bstr_t RowDelimeter, _bstr_t NullExpr) {
	BSTR _result;
	HRESULT _hr = raw_GetString(StringFormat, NumRows, ColumnDelimeter, RowDelimeter, NullExpr, &_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _bstr_t(_result, false);
}
// Index: 409
_bstr_t ADODB::Recordset20_Deprecated::GetDataMember() {
	BSTR _result;
	HRESULT _hr = get_DataMember(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _bstr_t(_result, false);
}
// Index: 410
void ADODB::Recordset20_Deprecated::PutDataMember(_bstr_t pbstrDataMember) {
	HRESULT _hr = put_DataMember(pbstrDataMember);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 411
enum ADODB::CompareEnum ADODB::Recordset20_Deprecated::CompareBookmarks(const _variant_t& Bookmark1, const _variant_t& Bookmark2) {
	enum CompareEnum _result;
	HRESULT _hr = raw_CompareBookmarks(Bookmark1, Bookmark2, &_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 412)
ADODB::_Recordset_DeprecatedPtr ADODB::Recordset20_Deprecated::Clone(enum LockTypeEnum LockType) {
	struct _Recordset_Deprecated* _result;
	HRESULT _hr = raw_Clone(LockType, &_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _Recordset_DeprecatedPtr(_result, false);
}
// Index: 413
HRESULT ADODB::Recordset20_Deprecated::Resync(enum AffectEnum AffectRecords, enum ResyncEnum ResyncValues) {
	HRESULT _hr = raw_Resync(AffectRecords, ResyncValues);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
//
// interface Recordset21_Deprecated wrapper method implementations
//
// Index: 414
HRESULT ADODB::Recordset21_Deprecated::Seek(const _variant_t& KeyValues, enum SeekEnum SeekOption) {
	HRESULT _hr = raw_Seek(KeyValues, SeekOption);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 415
void ADODB::Recordset21_Deprecated::PutIndex(_bstr_t pbstrIndex) {
	HRESULT _hr = put_Index(pbstrIndex);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 416
_bstr_t ADODB::Recordset21_Deprecated::GetIndex() {
	BSTR _result;
	HRESULT _hr = get_Index(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _bstr_t(_result, false);
}
//
// interface _Recordset_Deprecated wrapper method implementations
//
// Index: 417
HRESULT ADODB::_Recordset_Deprecated::Save(const _variant_t& Destination, enum PersistFormatEnum PersistFormat) {
	HRESULT _hr = raw_Save(Destination, PersistFormat);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 418)
ADODB::Field_DeprecatedPtr ADODB::Fields15_Deprecated::GetItem(const _variant_t& Index) {
	struct Field_Deprecated* _result;
	HRESULT _hr = get_Item(Index, &_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return Field_DeprecatedPtr(_result, false);
}
// Index: 419
HRESULT ADODB::Fields20_Deprecated::_Append(_bstr_t Name, enum DataTypeEnum Type, ADO_LONGPTR DefinedSize, enum FieldAttributeEnum Attrib) {
	HRESULT _hr = raw__Append(Name, Type, DefinedSize, Attrib);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 420
HRESULT ADODB::Fields20_Deprecated::Delete(const _variant_t& Index) {
	HRESULT _hr = raw_Delete(Index);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 421
HRESULT ADODB::Fields_Deprecated::Append(_bstr_t Name, enum DataTypeEnum Type, ADO_LONGPTR DefinedSize, enum FieldAttributeEnum Attrib, const _variant_t& FieldValue) {
	HRESULT _hr = raw_Append(Name, Type, DefinedSize, Attrib, FieldValue);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 422
HRESULT ADODB::Fields_Deprecated::Update() {
	HRESULT _hr = raw_Update();
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 423
HRESULT ADODB::Fields_Deprecated::Resync(enum ResyncEnum ResyncValues) {
	HRESULT _hr = raw_Resync(ResyncValues);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 424
HRESULT ADODB::Fields_Deprecated::CancelUpdate() {
	HRESULT _hr = raw_CancelUpdate();
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 425
ADODB::ADO_LONGPTR ADODB::Field20_Deprecated::GetActualSize() {
	ADO_LONGPTR _result;
	HRESULT _hr = get_ActualSize(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 426)
long ADODB::Field20_Deprecated::GetAttributes() {
	long _result;
	HRESULT _hr = get_Attributes(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 427
ADODB::ADO_LONGPTR ADODB::Field20_Deprecated::GetDefinedSize() {
	ADO_LONGPTR _result;
	HRESULT _hr = get_DefinedSize(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 428
_bstr_t ADODB::Field20_Deprecated::GetName() {
	BSTR _result;
	HRESULT _hr = get_Name(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _bstr_t(_result, false);
}
// Index: 429
enum ADODB::DataTypeEnum ADODB::Field20_Deprecated::GetType() {
	enum DataTypeEnum _result;
	HRESULT _hr = get_Type(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 430
_variant_t ADODB::Field20_Deprecated::GetValue() {
	VARIANT _result;
	VariantInit(&_result);
	HRESULT _hr = get_Value(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _variant_t(_result, false);
}
// Index: 431
void ADODB::Field20_Deprecated::PutValue(const _variant_t& pvar) {
	HRESULT _hr = put_Value(pvar);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 432)
unsigned char ADODB::Field20_Deprecated::GetPrecision() {
	unsigned char _result;
	HRESULT _hr = get_Precision(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 433)
unsigned char ADODB::Field20_Deprecated::GetNumericScale() {
	unsigned char _result;
	HRESULT _hr = get_NumericScale(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 434
HRESULT ADODB::Field20_Deprecated::AppendChunk(const _variant_t& Data) {
	HRESULT _hr = raw_AppendChunk(Data);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 435
_variant_t ADODB::Field20_Deprecated::GetChunk(long Length) {
	VARIANT _result;
	VariantInit(&_result);
	HRESULT _hr = raw_GetChunk(Length, &_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _variant_t(_result, false);
}
// Index: 436
_variant_t ADODB::Field20_Deprecated::GetOriginalValue() {
	VARIANT _result;
	VariantInit(&_result);
	HRESULT _hr = get_OriginalValue(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _variant_t(_result, false);
}
// Index: 437
_variant_t ADODB::Field20_Deprecated::GetUnderlyingValue() {
	VARIANT _result;
	VariantInit(&_result);
	HRESULT _hr = get_UnderlyingValue(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _variant_t(_result, false);
}
// Index: 438)
IUnknownPtr ADODB::Field20_Deprecated::GetDataFormat() {
	IUnknown* _result;
	HRESULT _hr = get_DataFormat(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return IUnknownPtr(_result, false);
}
// Index: 439
void ADODB::Field20_Deprecated::PutRefDataFormat(IUnknown* ppiDF) {
	HRESULT _hr = putref_DataFormat(ppiDF);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 440
void ADODB::Field20_Deprecated::PutPrecision(unsigned char pbPrecision) {
	HRESULT _hr = put_Precision(pbPrecision);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 441
void ADODB::Field20_Deprecated::PutNumericScale(unsigned char pbNumericScale) {
	HRESULT _hr = put_NumericScale(pbNumericScale);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 442
void ADODB::Field20_Deprecated::PutType(enum DataTypeEnum pDataType) {
	HRESULT _hr = put_Type(pDataType);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 443
void ADODB::Field20_Deprecated::PutDefinedSize(ADO_LONGPTR pl) {
	HRESULT _hr = put_DefinedSize(pl);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 444
void ADODB::Field20_Deprecated::PutAttributes(long pl) {
	HRESULT _hr = put_Attributes(pl);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
//
// interface Field_Deprecated wrapper method implementations
//
// Index: 445)
long ADODB::Field_Deprecated::GetStatus() {
	long _result;
	HRESULT _hr = get_Status(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
//
// interface _Connection_Deprecated wrapper method implementations
//
// Index: 446
HRESULT ADODB::_Connection_Deprecated::Cancel() {
	HRESULT _hr = raw_Cancel();
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
//
// interface _Record_Deprecated wrapper method implementations
//
// Index: 447
_variant_t ADODB::_Record_Deprecated::GetActiveConnection() {
	VARIANT _result;
	VariantInit(&_result);
	HRESULT _hr = get_ActiveConnection(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _variant_t(_result, false);
}
// Index: 448
void ADODB::_Record_Deprecated::PutActiveConnection(_bstr_t pvar) {
	HRESULT _hr = put_ActiveConnection(pvar);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 449
void ADODB::_Record_Deprecated::PutRefActiveConnection(struct _Connection_Deprecated* pvar) {
	HRESULT _hr = putref_ActiveConnection(pvar);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 450
enum ADODB::ObjectStateEnum ADODB::_Record_Deprecated::GetState() {
	enum ObjectStateEnum _result;
	HRESULT _hr = get_State(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 451
_variant_t ADODB::_Record_Deprecated::GetSource() {
	VARIANT _result;
	VariantInit(&_result);
	HRESULT _hr = get_Source(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _variant_t(_result, false);
}
// Index: 452
void ADODB::_Record_Deprecated::PutSource(_bstr_t pvar) {
	HRESULT _hr = put_Source(pvar);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 453
void ADODB::_Record_Deprecated::PutRefSource(IDispatch* pvar) {
	HRESULT _hr = putref_Source(pvar);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 454
enum ADODB::ConnectModeEnum ADODB::_Record_Deprecated::GetMode() {
	enum ConnectModeEnum _result;
	HRESULT _hr = get_Mode(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 455
void ADODB::_Record_Deprecated::PutMode(enum ConnectModeEnum pMode) {
	HRESULT _hr = put_Mode(pMode);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 456
_bstr_t ADODB::_Record_Deprecated::GetParentURL() {
	BSTR _result;
	HRESULT _hr = get_ParentURL(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _bstr_t(_result, false);
}
// Index: 457
_bstr_t ADODB::_Record_Deprecated::MoveRecord(_bstr_t Source, _bstr_t Destination, _bstr_t UserName, _bstr_t Password, enum MoveRecordOptionsEnum Options, VARIANT_BOOL Async) {
	BSTR _result;
	HRESULT _hr = raw_MoveRecord(Source, Destination, UserName, Password, Options, Async, &_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _bstr_t(_result, false);
}
// Index: 458
_bstr_t ADODB::_Record_Deprecated::CopyRecord(_bstr_t Source, _bstr_t Destination, _bstr_t UserName, _bstr_t Password, enum CopyRecordOptionsEnum Options, VARIANT_BOOL Async) {
	BSTR _result;
	HRESULT _hr = raw_CopyRecord(Source, Destination, UserName, Password, Options, Async, &_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _bstr_t(_result, false);
}
// Index: 459
HRESULT ADODB::_Record_Deprecated::DeleteRecord(_bstr_t Source, VARIANT_BOOL Async) {
	HRESULT _hr = raw_DeleteRecord(Source, Async);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 460
HRESULT ADODB::_Record_Deprecated::Open(const _variant_t& Source, const _variant_t& ActiveConnection, enum ConnectModeEnum Mode, enum RecordCreateOptionsEnum CreateOptions, enum RecordOpenOptionsEnum Options, _bstr_t UserName, _bstr_t Password) {
	HRESULT _hr = raw_Open(Source, ActiveConnection, Mode, CreateOptions, Options, UserName, Password);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 461
HRESULT ADODB::_Record_Deprecated::Close() {
	HRESULT _hr = raw_Close();
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 462)
ADODB::Fields_DeprecatedPtr ADODB::_Record_Deprecated::GetFields() {
	struct Fields_Deprecated* _result;
	HRESULT _hr = get_Fields(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return Fields_DeprecatedPtr(_result, false);
}
// Index: 463
enum ADODB::RecordTypeEnum ADODB::_Record_Deprecated::GetRecordType() {
	enum RecordTypeEnum _result;
	HRESULT _hr = get_RecordType(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 464)
ADODB::_Recordset_DeprecatedPtr ADODB::_Record_Deprecated::GetChildren() {
	struct _Recordset_Deprecated* _result;
	HRESULT _hr = raw_GetChildren(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _Recordset_DeprecatedPtr(_result, false);
}
// Index: 465
HRESULT ADODB::_Record_Deprecated::Cancel() {
	HRESULT _hr = raw_Cancel();
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 466
ADODB::ADO_LONGPTR ADODB::_Stream_Deprecated::GetSize() {
	ADO_LONGPTR _result;
	HRESULT _hr = get_Size(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 467)
VARIANT_BOOL ADODB::_Stream_Deprecated::GetEOS() {
	VARIANT_BOOL _result;
	HRESULT _hr = get_EOS(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 468
ADODB::ADO_LONGPTR ADODB::_Stream_Deprecated::GetPosition() {
	ADO_LONGPTR _result;
	HRESULT _hr = get_Position(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 469
void ADODB::_Stream_Deprecated::PutPosition(ADO_LONGPTR pPos) {
	HRESULT _hr = put_Position(pPos);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 470
enum ADODB::StreamTypeEnum ADODB::_Stream_Deprecated::GetType() {
	enum StreamTypeEnum _result;
	HRESULT _hr = get_Type(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 471
void ADODB::_Stream_Deprecated::PutType(enum StreamTypeEnum ptype) {
	HRESULT _hr = put_Type(ptype);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 472
enum ADODB::LineSeparatorEnum ADODB::_Stream_Deprecated::GetLineSeparator() {
	enum LineSeparatorEnum _result;
	HRESULT _hr = get_LineSeparator(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 473
void ADODB::_Stream_Deprecated::PutLineSeparator(enum LineSeparatorEnum pLS) {
	HRESULT _hr = put_LineSeparator(pLS);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 474
enum ADODB::ObjectStateEnum ADODB::_Stream_Deprecated::GetState() {
	enum ObjectStateEnum _result;
	HRESULT _hr = get_State(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 475
enum ADODB::ConnectModeEnum ADODB::_Stream_Deprecated::GetMode() {
	enum ConnectModeEnum _result;
	HRESULT _hr = get_Mode(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 476
void ADODB::_Stream_Deprecated::PutMode(enum ConnectModeEnum pMode) {
	HRESULT _hr = put_Mode(pMode);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 477
_bstr_t ADODB::_Stream_Deprecated::GetCharset() {
	BSTR _result;
	HRESULT _hr = get_Charset(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _bstr_t(_result, false);
}
// Index: 478
void ADODB::_Stream_Deprecated::PutCharset(_bstr_t pbstrCharset) {
	HRESULT _hr = put_Charset(pbstrCharset);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 479
_variant_t ADODB::_Stream_Deprecated::Read(long NumBytes) {
	VARIANT _result;
	VariantInit(&_result);
	HRESULT _hr = raw_Read(NumBytes, &_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _variant_t(_result, false);
}
// Index: 480
HRESULT ADODB::_Stream_Deprecated::Open(const _variant_t& Source, enum ConnectModeEnum Mode, enum StreamOpenOptionsEnum Options, _bstr_t UserName, _bstr_t Password) {
	HRESULT _hr = raw_Open(Source, Mode, Options, UserName, Password);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 481
HRESULT ADODB::_Stream_Deprecated::Close() {
	HRESULT _hr = raw_Close();
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 482
HRESULT ADODB::_Stream_Deprecated::SkipLine() {
	HRESULT _hr = raw_SkipLine();
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 483
HRESULT ADODB::_Stream_Deprecated::Write(const _variant_t& Buffer) {
	HRESULT _hr = raw_Write(Buffer);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 484
HRESULT ADODB::_Stream_Deprecated::SetEOS() {
	HRESULT _hr = raw_SetEOS();
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 485
HRESULT ADODB::_Stream_Deprecated::CopyTo(struct _Stream_Deprecated* DestStream, ADO_LONGPTR CharNumber) {
	HRESULT _hr = raw_CopyTo(DestStream, CharNumber);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 486
HRESULT ADODB::_Stream_Deprecated::Flush() {
	HRESULT _hr = raw_Flush();
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 487
HRESULT ADODB::_Stream_Deprecated::SaveToFile(_bstr_t FileName, enum SaveOptionsEnum Options) {
	HRESULT _hr = raw_SaveToFile(FileName, Options);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 488
HRESULT ADODB::_Stream_Deprecated::LoadFromFile(_bstr_t FileName) {
	HRESULT _hr = raw_LoadFromFile(FileName);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 489
_bstr_t ADODB::_Stream_Deprecated::ReadText(long NumChars) {
	BSTR _result;
	HRESULT _hr = raw_ReadText(NumChars, &_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _bstr_t(_result, false);
}
// Index: 490
HRESULT ADODB::_Stream_Deprecated::WriteText(_bstr_t Data, enum StreamWriteEnum Options) {
	HRESULT _hr = raw_WriteText(Data, Options);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 491
HRESULT ADODB::_Stream_Deprecated::Cancel() {
	HRESULT _hr = raw_Cancel();
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
//
// interface Field15_Deprecated wrapper method implementations
//
// Index: 492
ADODB::ADO_LONGPTR ADODB::Field15_Deprecated::GetActualSize() {
	ADO_LONGPTR _result;
	HRESULT _hr = get_ActualSize(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 493)
long ADODB::Field15_Deprecated::GetAttributes() {
	long _result;
	HRESULT _hr = get_Attributes(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 494
ADODB::ADO_LONGPTR ADODB::Field15_Deprecated::GetDefinedSize() {
	ADO_LONGPTR _result;
	HRESULT _hr = get_DefinedSize(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 495
_bstr_t ADODB::Field15_Deprecated::GetName() {
	BSTR _result;
	HRESULT _hr = get_Name(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _bstr_t(_result, false);
}
// Index: 496
enum ADODB::DataTypeEnum ADODB::Field15_Deprecated::GetType() {
	enum DataTypeEnum _result;
	HRESULT _hr = get_Type(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 497
_variant_t ADODB::Field15_Deprecated::GetValue() {
	VARIANT _result;
	VariantInit(&_result);
	HRESULT _hr = get_Value(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _variant_t(_result, false);
}
// Index: 498
void ADODB::Field15_Deprecated::PutValue(const _variant_t& pvar) {
	HRESULT _hr = put_Value(pvar);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 499)
unsigned char ADODB::Field15_Deprecated::GetPrecision() {
	unsigned char _result;
	HRESULT _hr = get_Precision(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 500)
unsigned char ADODB::Field15_Deprecated::GetNumericScale() {
	unsigned char _result;
	HRESULT _hr = get_NumericScale(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 501
HRESULT ADODB::Field15_Deprecated::AppendChunk(const _variant_t& Data) {
	HRESULT _hr = raw_AppendChunk(Data);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 502
_variant_t ADODB::Field15_Deprecated::GetChunk(long Length) {
	VARIANT _result;
	VariantInit(&_result);
	HRESULT _hr = raw_GetChunk(Length, &_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _variant_t(_result, false);
}
// Index: 503
_variant_t ADODB::Field15_Deprecated::GetOriginalValue() {
	VARIANT _result;
	VariantInit(&_result);
	HRESULT _hr = get_OriginalValue(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _variant_t(_result, false);
}
// Index: 504
_variant_t ADODB::Field15_Deprecated::GetUnderlyingValue() {
	VARIANT _result;
	VariantInit(&_result);
	HRESULT _hr = get_UnderlyingValue(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _variant_t(_result, false);
}
//
// interface _Parameter_Deprecated wrapper method implementations
//
// Index: 505
_bstr_t ADODB::_Parameter_Deprecated::GetName() {
	BSTR _result;
	HRESULT _hr = get_Name(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _bstr_t(_result, false);
}
// Index: 506
void ADODB::_Parameter_Deprecated::PutName(_bstr_t pbstr) {
	HRESULT _hr = put_Name(pbstr);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 507
_variant_t ADODB::_Parameter_Deprecated::GetValue() {
	VARIANT _result;
	VariantInit(&_result);
	HRESULT _hr = get_Value(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _variant_t(_result, false);
}
// Index: 508
void ADODB::_Parameter_Deprecated::PutValue(const _variant_t& pvar) {
	HRESULT _hr = put_Value(pvar);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 509
enum ADODB::DataTypeEnum ADODB::_Parameter_Deprecated::GetType() {
	enum DataTypeEnum _result;
	HRESULT _hr = get_Type(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 510
void ADODB::_Parameter_Deprecated::PutType(enum DataTypeEnum psDataType) {
	HRESULT _hr = put_Type(psDataType);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 511
void ADODB::_Parameter_Deprecated::PutDirection(enum ParameterDirectionEnum plParmDirection) {
	HRESULT _hr = put_Direction(plParmDirection);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 512
enum ADODB::ParameterDirectionEnum ADODB::_Parameter_Deprecated::GetDirection() {
	enum ParameterDirectionEnum _result;
	HRESULT _hr = get_Direction(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 513
void ADODB::_Parameter_Deprecated::PutPrecision(unsigned char pbPrecision) {
	HRESULT _hr = put_Precision(pbPrecision);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 514)
unsigned char ADODB::_Parameter_Deprecated::GetPrecision() {
	unsigned char _result;
	HRESULT _hr = get_Precision(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 515
void ADODB::_Parameter_Deprecated::PutNumericScale(unsigned char pbScale) {
	HRESULT _hr = put_NumericScale(pbScale);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 516)
unsigned char ADODB::_Parameter_Deprecated::GetNumericScale() {
	unsigned char _result;
	HRESULT _hr = get_NumericScale(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 517
void ADODB::_Parameter_Deprecated::PutSize(ADO_LONGPTR pl) {
	HRESULT _hr = put_Size(pl);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 518)
ADODB::ADO_LONGPTR ADODB::_Parameter_Deprecated::GetSize() {
	ADO_LONGPTR _result;
	HRESULT _hr = get_Size(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 519
HRESULT ADODB::_Parameter_Deprecated::AppendChunk(const _variant_t& Val) {
	HRESULT _hr = raw_AppendChunk(Val);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 520)
long ADODB::_Parameter_Deprecated::GetAttributes() {
	long _result;
	HRESULT _hr = get_Attributes(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 521
void ADODB::_Parameter_Deprecated::PutAttributes(long plParmAttribs) {
	HRESULT _hr = put_Attributes(plParmAttribs);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 522)
ADODB::_Parameter_DeprecatedPtr ADODB::Parameters_Deprecated::GetItem(const _variant_t& Index) {
	struct _Parameter_Deprecated* _result;
	HRESULT _hr = get_Item(Index, &_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _Parameter_DeprecatedPtr(_result, false);
}
// Index: 523)
ADODB::_Connection_DeprecatedPtr ADODB::Command15_Deprecated::GetActiveConnection() {
	struct _Connection_Deprecated* _result;
	HRESULT _hr = get_ActiveConnection(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _Connection_DeprecatedPtr(_result, false);
}
// Index: 524
void ADODB::Command15_Deprecated::PutRefActiveConnection(struct _Connection_Deprecated* ppvObject) {
	HRESULT _hr = putref_ActiveConnection(ppvObject);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 525
void ADODB::Command15_Deprecated::PutActiveConnection(const _variant_t& ppvObject) {
	HRESULT _hr = put_ActiveConnection(ppvObject);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 526
_bstr_t ADODB::Command15_Deprecated::GetCommandText() {
	BSTR _result;
	HRESULT _hr = get_CommandText(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _bstr_t(_result, false);
}
// Index: 527
void ADODB::Command15_Deprecated::PutCommandText(_bstr_t pbstr) {
	HRESULT _hr = put_CommandText(pbstr);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 528)
long ADODB::Command15_Deprecated::GetCommandTimeout() {
	long _result;
	HRESULT _hr = get_CommandTimeout(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 529
void ADODB::Command15_Deprecated::PutCommandTimeout(long pl) {
	HRESULT _hr = put_CommandTimeout(pl);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 530)
VARIANT_BOOL ADODB::Command15_Deprecated::GetPrepared() {
	VARIANT_BOOL _result;
	HRESULT _hr = get_Prepared(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 531
void ADODB::Command15_Deprecated::PutPrepared(VARIANT_BOOL pfPrepared) {
	HRESULT _hr = put_Prepared(pfPrepared);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 532)
ADODB::_Recordset_DeprecatedPtr ADODB::Command15_Deprecated::Execute(VARIANT* RecordsAffected, VARIANT* Parameters, long Options) {
	struct _Recordset_Deprecated* _result;
	HRESULT _hr = raw_Execute(RecordsAffected, Parameters, Options, &_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _Recordset_DeprecatedPtr(_result, false);
}
// Index: 533)
ADODB::_Parameter_DeprecatedPtr ADODB::Command15_Deprecated::CreateParameter(_bstr_t Name, enum DataTypeEnum Type, enum ParameterDirectionEnum Direction, ADO_LONGPTR Size, const _variant_t& Value) {
	struct _Parameter_Deprecated* _result;
	HRESULT _hr = raw_CreateParameter(Name, Type, Direction, Size, Value, &_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _Parameter_DeprecatedPtr(_result, false);
}
// Index: 534)
ADODB::Parameters_DeprecatedPtr ADODB::Command15_Deprecated::GetParameters() {
	struct Parameters_Deprecated* _result;
	HRESULT _hr = get_Parameters(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return Parameters_DeprecatedPtr(_result, false);
}
// Index: 535
void ADODB::Command15_Deprecated::PutCommandType(enum CommandTypeEnum plCmdType) {
	HRESULT _hr = put_CommandType(plCmdType);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 536
enum ADODB::CommandTypeEnum ADODB::Command15_Deprecated::GetCommandType() {
	enum CommandTypeEnum _result;
	HRESULT _hr = get_CommandType(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 537
_bstr_t ADODB::Command15_Deprecated::GetName() {
	BSTR _result;
	HRESULT _hr = get_Name(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _bstr_t(_result, false);
}
// Index: 538
void ADODB::Command15_Deprecated::PutName(_bstr_t pbstrName) {
	HRESULT _hr = put_Name(pbstrName);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
//
// interface Command25_Deprecated wrapper method implementations
//
// Index: 539)
long ADODB::Command25_Deprecated::GetState() {
	long _result;
	HRESULT _hr = get_State(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 540
HRESULT ADODB::Command25_Deprecated::Cancel() {
	HRESULT _hr = raw_Cancel();
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 541
void ADODB::_Command_Deprecated::PutRefCommandStream(IUnknown* pvStream) {
	HRESULT _hr = putref_CommandStream(pvStream);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 542
_variant_t ADODB::_Command_Deprecated::GetCommandStream() {
	VARIANT _result;
	VariantInit(&_result);
	HRESULT _hr = get_CommandStream(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _variant_t(_result, false);
}
// Index: 543
void ADODB::_Command_Deprecated::PutDialect(_bstr_t pbstrDialect) {
	HRESULT _hr = put_Dialect(pbstrDialect);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 544
_bstr_t ADODB::_Command_Deprecated::GetDialect() {
	BSTR _result;
	HRESULT _hr = get_Dialect(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _bstr_t(_result, false);
}
// Index: 545
void ADODB::_Command_Deprecated::PutNamedParameters(VARIANT_BOOL pfNamedParameters) {
	HRESULT _hr = put_NamedParameters(pfNamedParameters);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
}
// Index: 546)
VARIANT_BOOL ADODB::_Command_Deprecated::GetNamedParameters() {
	VARIANT_BOOL _result;
	HRESULT _hr = get_NamedParameters(&_result);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _result;
}
// Index: 547
HRESULT ADODB::ConnectionEventsVt_Deprecated::InfoMessage(struct Error* pError, enum EventStatusEnum* adStatus, struct _Connection_Deprecated* pConnection) {
	HRESULT _hr = raw_InfoMessage(pError, adStatus, pConnection);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 548
HRESULT ADODB::ConnectionEventsVt_Deprecated::BeginTransComplete(long TransactionLevel, struct Error* pError, enum EventStatusEnum* adStatus, struct _Connection_Deprecated* pConnection) {
	HRESULT _hr = raw_BeginTransComplete(TransactionLevel, pError, adStatus, pConnection);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 549
HRESULT ADODB::ConnectionEventsVt_Deprecated::CommitTransComplete(struct Error* pError, enum EventStatusEnum* adStatus, struct _Connection_Deprecated* pConnection) {
	HRESULT _hr = raw_CommitTransComplete(pError, adStatus, pConnection);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 550
HRESULT ADODB::ConnectionEventsVt_Deprecated::RollbackTransComplete(struct Error* pError, enum EventStatusEnum* adStatus, struct _Connection_Deprecated* pConnection) {
	HRESULT _hr = raw_RollbackTransComplete(pError, adStatus, pConnection);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 551
HRESULT ADODB::ConnectionEventsVt_Deprecated::WillExecute(BSTR* Source, enum CursorTypeEnum* CursorType, enum LockTypeEnum* LockType, long* Options, enum EventStatusEnum* adStatus, struct _Command_Deprecated* pCommand, struct _Recordset_Deprecated* pRecordset, struct _Connection_Deprecated* pConnection) {
	HRESULT _hr = raw_WillExecute(Source, CursorType, LockType, Options, adStatus, pCommand, pRecordset, pConnection);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 552
HRESULT ADODB::ConnectionEventsVt_Deprecated::ExecuteComplete(long RecordsAffected, struct Error* pError, enum EventStatusEnum* adStatus, struct _Command_Deprecated* pCommand, struct _Recordset_Deprecated* pRecordset, struct _Connection_Deprecated* pConnection) {
	HRESULT _hr = raw_ExecuteComplete(RecordsAffected, pError, adStatus, pCommand, pRecordset, pConnection);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 553
HRESULT ADODB::ConnectionEventsVt_Deprecated::WillConnect(BSTR* ConnectionString, BSTR* UserID, BSTR* Password, long* Options, enum EventStatusEnum* adStatus, struct _Connection_Deprecated* pConnection) {
	HRESULT _hr = raw_WillConnect(ConnectionString, UserID, Password, Options, adStatus, pConnection);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 554
HRESULT ADODB::ConnectionEventsVt_Deprecated::ConnectComplete(struct Error* pError, enum EventStatusEnum* adStatus, struct _Connection_Deprecated* pConnection) {
	HRESULT _hr = raw_ConnectComplete(pError, adStatus, pConnection);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 555
HRESULT ADODB::ConnectionEventsVt_Deprecated::Disconnect(enum EventStatusEnum* adStatus, struct _Connection_Deprecated* pConnection) {
	HRESULT _hr = raw_Disconnect(adStatus, pConnection);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 556
HRESULT ADODB::RecordsetEventsVt_Deprecated::WillChangeField(long cFields, const _variant_t& Fields, enum EventStatusEnum* adStatus, struct _Recordset_Deprecated* pRecordset) {
	HRESULT _hr = raw_WillChangeField(cFields, Fields, adStatus, pRecordset);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 557
HRESULT ADODB::RecordsetEventsVt_Deprecated::FieldChangeComplete(long cFields, const _variant_t& Fields, struct Error* pError, enum EventStatusEnum* adStatus, struct _Recordset_Deprecated* pRecordset) {
	HRESULT _hr = raw_FieldChangeComplete(cFields, Fields, pError, adStatus, pRecordset);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 558
HRESULT ADODB::RecordsetEventsVt_Deprecated::WillChangeRecord(enum EventReasonEnum adReason, long cRecords, enum EventStatusEnum* adStatus, struct _Recordset_Deprecated* pRecordset) {
	HRESULT _hr = raw_WillChangeRecord(adReason, cRecords, adStatus, pRecordset);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 559
HRESULT ADODB::RecordsetEventsVt_Deprecated::RecordChangeComplete(enum EventReasonEnum adReason, long cRecords, struct Error* pError, enum EventStatusEnum* adStatus, struct _Recordset_Deprecated* pRecordset) {
	HRESULT _hr = raw_RecordChangeComplete(adReason, cRecords, pError, adStatus, pRecordset);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 560
HRESULT ADODB::RecordsetEventsVt_Deprecated::WillChangeRecordset(enum EventReasonEnum adReason, enum EventStatusEnum* adStatus, struct _Recordset_Deprecated* pRecordset) {
	HRESULT _hr = raw_WillChangeRecordset(adReason, adStatus, pRecordset);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 561
HRESULT ADODB::RecordsetEventsVt_Deprecated::RecordsetChangeComplete(enum EventReasonEnum adReason, struct Error* pError, enum EventStatusEnum* adStatus, struct _Recordset_Deprecated* pRecordset) {
	HRESULT _hr = raw_RecordsetChangeComplete(adReason, pError, adStatus, pRecordset);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 562
HRESULT ADODB::RecordsetEventsVt_Deprecated::WillMove(enum EventReasonEnum adReason, enum EventStatusEnum* adStatus, struct _Recordset_Deprecated* pRecordset) {
	HRESULT _hr = raw_WillMove(adReason, adStatus, pRecordset);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 563
HRESULT ADODB::RecordsetEventsVt_Deprecated::MoveComplete(enum EventReasonEnum adReason, struct Error* pError, enum EventStatusEnum* adStatus, struct _Recordset_Deprecated* pRecordset) {
	HRESULT _hr = raw_MoveComplete(adReason, pError, adStatus, pRecordset);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 564
HRESULT ADODB::RecordsetEventsVt_Deprecated::EndOfRecordset(VARIANT_BOOL* fMoreData, enum EventStatusEnum* adStatus, struct _Recordset_Deprecated* pRecordset) {
	HRESULT _hr = raw_EndOfRecordset(fMoreData, adStatus, pRecordset);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 565
HRESULT ADODB::RecordsetEventsVt_Deprecated::FetchProgress(long Progress, long MaxProgress, enum EventStatusEnum* adStatus, struct _Recordset_Deprecated* pRecordset) {
	HRESULT _hr = raw_FetchProgress(Progress, MaxProgress, adStatus, pRecordset);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 566
HRESULT ADODB::RecordsetEventsVt_Deprecated::FetchComplete(struct Error* pError, enum EventStatusEnum* adStatus, struct _Recordset_Deprecated* pRecordset) {
	HRESULT _hr = raw_FetchComplete(pError, adStatus, pRecordset);
	if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
	return _hr;
}
// Index: 567
HRESULT ADODB::ConnectionEvents_Deprecated::InfoMessage(struct Error* pError, enum EventStatusEnum* adStatus, struct _Connection_Deprecated* pConnection) {
	HRESULT _result;
	_com_dispatch_method(this, 0x0, DISPATCH_METHOD, VT_ERROR, (void*)&_result, L"\x0009\x4003\x0009", pError, adStatus, pConnection);
	return _result;
}
// Index: 568
HRESULT ADODB::ConnectionEvents_Deprecated::BeginTransComplete(long TransactionLevel, struct Error* pError, enum EventStatusEnum* adStatus, struct _Connection_Deprecated* pConnection) {
	HRESULT _result;
	_com_dispatch_method(this, 0x1, DISPATCH_METHOD, VT_ERROR, (void*)&_result, L"\x0003\x0009\x4003\x0009", TransactionLevel, pError, adStatus, pConnection);
	return _result;
}
// Index: 569
HRESULT ADODB::ConnectionEvents_Deprecated::CommitTransComplete(struct Error* pError, enum EventStatusEnum* adStatus, struct _Connection_Deprecated* pConnection) {
	HRESULT _result;
	_com_dispatch_method(this, 0x3, DISPATCH_METHOD, VT_ERROR, (void*)&_result, L"\x0009\x4003\x0009", pError, adStatus, pConnection);
	return _result;
}
// Index: 570
HRESULT ADODB::ConnectionEvents_Deprecated::RollbackTransComplete(struct Error* pError, enum EventStatusEnum* adStatus, struct _Connection_Deprecated* pConnection) {
	HRESULT _result;
	_com_dispatch_method(this, 0x2, DISPATCH_METHOD, VT_ERROR, (void*)&_result, L"\x0009\x4003\x0009", pError, adStatus, pConnection);
	return _result;
}
// Index: 571
HRESULT ADODB::ConnectionEvents_Deprecated::WillExecute(BSTR* Source, enum CursorTypeEnum* CursorType, enum LockTypeEnum* LockType, long* Options, enum EventStatusEnum* adStatus, struct _Command_Deprecated* pCommand, struct _Recordset_Deprecated* pRecordset, struct _Connection_Deprecated* pConnection) {
	HRESULT _result;
	_com_dispatch_method(this, 0x4, DISPATCH_METHOD, VT_ERROR, (void*)&_result, L"\x4008\x4003\x4003\x4003\x4003\x0009\x0009\x0009", Source, CursorType, LockType, Options, adStatus, pCommand, pRecordset, pConnection);
	return _result;
}
// Index: 572
HRESULT ADODB::ConnectionEvents_Deprecated::ExecuteComplete(long RecordsAffected, struct Error* pError, enum EventStatusEnum* adStatus, struct _Command_Deprecated* pCommand, struct _Recordset_Deprecated* pRecordset, struct _Connection_Deprecated* pConnection) {
	HRESULT _result;
	_com_dispatch_method(this, 0x5, DISPATCH_METHOD, VT_ERROR, (void*)&_result, L"\x0003\x0009\x4003\x0009\x0009\x0009", RecordsAffected, pError, adStatus, pCommand, pRecordset, pConnection);
	return _result;
}
// Index: 573
HRESULT ADODB::ConnectionEvents_Deprecated::WillConnect(BSTR* ConnectionString, BSTR* UserID, BSTR* Password, long* Options, enum EventStatusEnum* adStatus, struct _Connection_Deprecated* pConnection) {
	HRESULT _result;
	_com_dispatch_method(this, 0x6, DISPATCH_METHOD, VT_ERROR, (void*)&_result, L"\x4008\x4008\x4008\x4003\x4003\x0009", ConnectionString, UserID, Password, Options, adStatus, pConnection);
	return _result;
}
// Index: 574
HRESULT ADODB::ConnectionEvents_Deprecated::ConnectComplete(struct Error* pError, enum EventStatusEnum* adStatus, struct _Connection_Deprecated* pConnection) {
	HRESULT _result;
	_com_dispatch_method(this, 0x7, DISPATCH_METHOD, VT_ERROR, (void*)&_result, L"\x0009\x4003\x0009", pError, adStatus, pConnection);
	return _result;
}
// Index: 575
HRESULT ADODB::ConnectionEvents_Deprecated::Disconnect(enum EventStatusEnum* adStatus, struct _Connection_Deprecated* pConnection) {
	HRESULT _result;
	_com_dispatch_method(this, 0x8, DISPATCH_METHOD, VT_ERROR, (void*)&_result, L"\x4003\x0009", adStatus, pConnection);
	return _result;
}
// Index: 576
HRESULT ADODB::RecordsetEvents_Deprecated::WillChangeField(long cFields, const _variant_t& Fields, enum EventStatusEnum* adStatus, struct _Recordset_Deprecated* pRecordset) {
	HRESULT _result;
	_com_dispatch_method(this, 0x9, DISPATCH_METHOD, VT_ERROR, (void*)&_result, L"\x0003\x000c\x4003\x0009", cFields, &Fields, adStatus, pRecordset);
	return _result;
}
// Index: 577
HRESULT ADODB::RecordsetEvents_Deprecated::FieldChangeComplete(long cFields, const _variant_t& Fields, struct Error* pError, enum EventStatusEnum* adStatus, struct _Recordset_Deprecated* pRecordset) {
	HRESULT _result;
	_com_dispatch_method(this, 0xa, DISPATCH_METHOD, VT_ERROR, (void*)&_result, L"\x0003\x000c\x0009\x4003\x0009", cFields, &Fields, pError, adStatus, pRecordset);
	return _result;
}
// Index: 578
HRESULT ADODB::RecordsetEvents_Deprecated::WillChangeRecord(enum EventReasonEnum adReason, long cRecords, enum EventStatusEnum* adStatus, struct _Recordset_Deprecated* pRecordset) {
	HRESULT _result;
	_com_dispatch_method(this, 0xb, DISPATCH_METHOD, VT_ERROR, (void*)&_result, L"\x0003\x0003\x4003\x0009", adReason, cRecords, adStatus, pRecordset);
	return _result;
}
// Index: 579
HRESULT ADODB::RecordsetEvents_Deprecated::RecordChangeComplete(enum EventReasonEnum adReason, long cRecords, struct Error* pError, enum EventStatusEnum* adStatus, struct _Recordset_Deprecated* pRecordset) {
	HRESULT _result;
	_com_dispatch_method(this, 0xc, DISPATCH_METHOD, VT_ERROR, (void*)&_result, L"\x0003\x0003\x0009\x4003\x0009", adReason, cRecords, pError, adStatus, pRecordset);
	return _result;
}
// Index: 580
HRESULT ADODB::RecordsetEvents_Deprecated::WillChangeRecordset(enum EventReasonEnum adReason, enum EventStatusEnum* adStatus, struct _Recordset_Deprecated* pRecordset) {
	HRESULT _result;
	_com_dispatch_method(this, 0xd, DISPATCH_METHOD, VT_ERROR, (void*)&_result, L"\x0003\x4003\x0009", adReason, adStatus, pRecordset);
	return _result;
}
// Index: 581
HRESULT ADODB::RecordsetEvents_Deprecated::RecordsetChangeComplete(enum EventReasonEnum adReason, struct Error* pError, enum EventStatusEnum* adStatus, struct _Recordset_Deprecated* pRecordset) {
	HRESULT _result;
	_com_dispatch_method(this, 0xe, DISPATCH_METHOD, VT_ERROR, (void*)&_result, L"\x0003\x0009\x4003\x0009", adReason, pError, adStatus, pRecordset);
	return _result;
}
// Index: 582
HRESULT ADODB::RecordsetEvents_Deprecated::WillMove(enum EventReasonEnum adReason, enum EventStatusEnum* adStatus, struct _Recordset_Deprecated* pRecordset) {
	HRESULT _result;
	_com_dispatch_method(this, 0xf, DISPATCH_METHOD, VT_ERROR, (void*)&_result, L"\x0003\x4003\x0009", adReason, adStatus, pRecordset);
	return _result;
}
// Index: 583
HRESULT ADODB::RecordsetEvents_Deprecated::MoveComplete(enum EventReasonEnum adReason, struct Error* pError, enum EventStatusEnum* adStatus, struct _Recordset_Deprecated* pRecordset) {
	HRESULT _result;
	_com_dispatch_method(this, 0x10, DISPATCH_METHOD, VT_ERROR, (void*)&_result, L"\x0003\x0009\x4003\x0009", adReason, pError, adStatus, pRecordset);
	return _result;
}
// Index: 584
HRESULT ADODB::RecordsetEvents_Deprecated::EndOfRecordset(VARIANT_BOOL* fMoreData, enum EventStatusEnum* adStatus, struct _Recordset_Deprecated* pRecordset) {
	HRESULT _result;
	_com_dispatch_method(this, 0x11, DISPATCH_METHOD, VT_ERROR, (void*)&_result, L"\x400b\x4003\x0009", fMoreData, adStatus, pRecordset);
	return _result;
}
// Index: 585
HRESULT ADODB::RecordsetEvents_Deprecated::FetchProgress(long Progress, long MaxProgress, enum EventStatusEnum* adStatus, struct _Recordset_Deprecated* pRecordset) {
	HRESULT _result;
	_com_dispatch_method(this, 0x12, DISPATCH_METHOD, VT_ERROR, (void*)&_result, L"\x0003\x0003\x4003\x0009", Progress, MaxProgress, adStatus, pRecordset);
	return _result;
}
// Index: 586
HRESULT ADODB::RecordsetEvents_Deprecated::FetchComplete(struct Error* pError, enum EventStatusEnum* adStatus, struct _Recordset_Deprecated* pRecordset) {
	HRESULT _result;
	_com_dispatch_method(this, 0x13, DISPATCH_METHOD, VT_ERROR, (void*)&_result, L"\x0009\x4003\x0009", pError, adStatus, pRecordset);
	return _result;
}
char* MsSQL::Fonctions::ListerInstancesPhysque()
{
	return nullptr;
}
