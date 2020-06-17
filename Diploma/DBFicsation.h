#pragma once
#include "ParametersClass.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace Data;
using namespace Data::SqlClient;

ref class DBFicsation
{
public:
	SqlConnection^ conn;
	SqlConnectionStringBuilder^ connStringBuilder;

	void ConnectToDB();

public: void Insert(String^ CardNumber, String^ PIN_Code, String^ UserName, String^ PhoneNumber);
public: void Insert(String^ CardNumber, String^ PIN_Code, String^ UserName);
public: void Log_In_Submit(ParametersClass^ n);
public: int FindClone(ParametersClass^ n);
public: void DataSelect(ParametersClass^ n);
public: void UpdateBalance(ParametersClass^ n, int SummTxt);
public: void UpdateDeposit(ParametersClass^ n, int SummTxt);
public: void UpdatePIN_Code(ParametersClass^ n, String^ NewPIN_Code);
public: void UpdatePhoneNumber(ParametersClass^ n, String^ NewPhoneNumber);

};