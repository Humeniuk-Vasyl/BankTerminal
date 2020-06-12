#pragma once
//input class with spec parameters
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

	void ConnectToDB() {
		// Creation the connect to DB
		// Data Source=роман-пк\sqlexpress;Initial Catalog=ClientsDB;Integrated Security=True
		connStringBuilder = gcnew SqlConnectionStringBuilder();
		connStringBuilder->DataSource = "роман-пк\\sqlexpress";
		connStringBuilder->InitialCatalog = "ClientsDB";
		connStringBuilder->IntegratedSecurity = true;

		conn = gcnew SqlConnection(Convert::ToString(connStringBuilder));
	}

	//---------------  Functions for table "Clients"  ---------------


	// Insert function
public: void Insert(String^ CardNumber, String^ PIN_Code, String^ UserName, String^ PhoneNumber) {
	try {
		// Connection to DB
		ConnectToDB();

		String^ cmdText = "INSERT INTO dbo.Clients(CardNumber, PIN_Code, UserName, PhoneNumber) Values(@CardNumber, @PIN_Code, @UserName, @PhoneNumber)";
		SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);

		// Set parameters

		cmd->Parameters->AddWithValue("@CardNumber", CardNumber);
		cmd->Parameters->AddWithValue("@PIN_Code", PIN_Code);
		cmd->Parameters->AddWithValue("@UserName", UserName);
		cmd->Parameters->AddWithValue("@PhoneNumber", PhoneNumber);
		conn->Open();
		cmd->ExecuteNonQuery();
	}
	finally {
		if (conn != nullptr)
		{
			conn->Close();
		}
		// Completed
	}
}
	  // polimorf Insert function
public: void Insert(String^ CardNumber, String^ PIN_Code, String^ UserName) {
	try {
		// Connection to DB
		ConnectToDB();

		String^ cmdText = "INSERT INTO dbo.Clients(CardNumber, PIN_Code, UserName) Values(@CardNumber, @PIN_Code, @UserName)";
		SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);

		// Set parameters

		cmd->Parameters->AddWithValue("@CardNumber", CardNumber);
		cmd->Parameters->AddWithValue("@PIN_Code", PIN_Code);
		cmd->Parameters->AddWithValue("@UserName", UserName);
		conn->Open();
		cmd->ExecuteNonQuery();
	}
	finally {
		if (conn != nullptr)
		{
			conn->Close();
		}
		// Completed
	}
}

	  //Log_In_Submit function
public: void Log_In_Submit(ParametersClass^ n) {

	try {
		// Connection to DB
		ConnectToDB();

		String^ cmdText = "SELECT * FROM dbo.Clients Where CardNumber = '" + n->CardNumber + "' AND PIN_Code  = '" + n->PIN_Code + "'";
		SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);

		cmd->Parameters->AddWithValue("@CardNumber", n->CardNumber);
		cmd->Parameters->AddWithValue("@PIN_Code", n->PIN_Code);
		conn->Open();
		SqlDataAdapter^ sda = gcnew SqlDataAdapter(cmdText, conn);
		DataTable^ dtbl = gcnew DataTable();
		sda->Fill(dtbl);

		cmd->ExecuteNonQuery();
		if (dtbl->Rows->Count == 1)
		{
			MessageBox::Show("login successful!");
		}
		else
		{
			MessageBox::Show("Check your card number and PIN-code");
		}
	}
	finally {
		if (conn != nullptr)
		{
			conn->Close();
		}
		// Completed
	}

}
};

