#include "DBFicsation.h"

inline void DBFicsation::ConnectToDB() {
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
inline void DBFicsation::Insert(String^ CardNumber, String^ PIN_Code, String^ UserName, String^ PhoneNumber) {
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
		if (conn != nullptr) {
			conn->Close();
		}
		// Completed
	}
}
// polimorf Insert function
inline void DBFicsation::Insert(String^ CardNumber, String^ PIN_Code, String^ UserName) {
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
		if (conn != nullptr) {
			conn->Close();
		}
		// Completed
	}
}
//Log_In_Submit function
inline void DBFicsation::Log_In_Submit(ParametersClass^ n) {
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
		if (dtbl->Rows->Count == 1) {
			MessageBox::Show("login successful!");
		}
		else {
			MessageBox::Show("Check your card number and PIN-code");
		}
	}
	finally {
		if (conn != nullptr) {
			conn->Close();
		}
		// Completed
	}
}
// func for find already exists users
int DBFicsation::FindClone(ParametersClass^ n)
{
	DataTable^ dtbl = gcnew DataTable();
	try {
		
		ConnectToDB();

		String^ cmdText = "SELECT * FROM dbo.Clients Where CardNumber = '" + n->CardNumber + "' AND PIN_Code  = '" + n->PIN_Code + "'";
		conn->Open();
		SqlDataAdapter^ sda = gcnew SqlDataAdapter(cmdText, conn);
		sda->Fill(dtbl);
	}
	finally {
		if (conn != nullptr) {
			conn->Close();
		}
		// Completed
	}
	return dtbl->Rows->Count;
}
// fund for select data about user
inline void DBFicsation::DataSelect(ParametersClass^ n) {
	try {
		// Connection to DB
		ConnectToDB();
		String^ cmdText2 = "SELECT * FROM dbo.Clients Where CardNumber = '" + n->CardNumber + "' AND PIN_Code  = '" + n->PIN_Code + "'";
		SqlCommand^ cmd2 = gcnew SqlCommand(cmdText2, conn);
		conn->Open();
		SqlDataReader^ reader = cmd2->ExecuteReader();
		while (reader->Read()) {
			n->UserName = (reader["UserName"]->ToString());
			n->PhoneNumber = (reader["PhoneNumber"]->ToString());
			n->Balance = (reader["Balanse"]->ToString());
			n->Deposit = (reader["Deposit"]->ToString());
		}
	}
	finally {
		if (conn != nullptr){
			conn->Close();
		}
		// Completed
	}
}
//func for update the balance
inline void DBFicsation::UpdateBalance(ParametersClass^ n, int SummTxt) {
	try {
		// Connection to DB
		ConnectToDB();
		int StartSummBalance = Convert::ToInt32(n->Balance);
		StartSummBalance += SummTxt;
		String^ FinishSummBalance = Convert::ToString(StartSummBalance);
		String^ cmdText2 = "Update dbo.Clients SET Balanse = @Balanse Where CardNumber = '" + n->CardNumber + "' AND PIN_Code  = '" + n->PIN_Code + "'";
		SqlCommand^ cmd2 = gcnew SqlCommand(cmdText2, conn);
		cmd2->Parameters->AddWithValue("@Balanse", FinishSummBalance);
		conn->Open();
		cmd2->ExecuteNonQuery();
	}
	finally {
		if (conn != nullptr) {
			conn->Close();
		}
		// Completed
	}
}
//func for update the Deposit
inline void DBFicsation::UpdateDeposit(ParametersClass^ n, int SummTxt) {
	try {
		// Connection to DB
		ConnectToDB();
		int StartSummDeposit = Convert::ToInt32(n->Deposit);
		StartSummDeposit += SummTxt;
		String^ FinishSummDeposit = Convert::ToString(StartSummDeposit);
		String^ cmdText2 = "Update dbo.Clients SET Deposit = @Deposit Where CardNumber = '" + n->CardNumber + "' AND PIN_Code  = '" + n->PIN_Code + "'";
		SqlCommand^ cmd2 = gcnew SqlCommand(cmdText2, conn);
		cmd2->Parameters->AddWithValue("@Deposit", FinishSummDeposit);
		conn->Open();
		cmd2->ExecuteNonQuery();
	}
	finally {
		if (conn != nullptr) {
			conn->Close();
		}
		// Completed
	}
}
//func for update PIN-Code
inline void DBFicsation::UpdatePIN_Code(ParametersClass^ n, String^ NewPIN_Code) {
	try {
		// Connection to DB
		ConnectToDB();

		String^ cmdText3 = "Update dbo.Clients SET PIN_Code = @PIN_Code Where CardNumber = '" + n->CardNumber + "' AND PIN_Code  = '" + n->PIN_Code + "'";
		SqlCommand^ cmd3 = gcnew SqlCommand(cmdText3, conn);
		cmd3->Parameters->AddWithValue("@PIN_Code", NewPIN_Code);
		conn->Open();
		cmd3->ExecuteNonQuery();
	}
	finally {
		if (conn != nullptr) {
			conn->Close();
		}
		// Completed
	}
}
// func for update user phone number
inline void DBFicsation::UpdatePhoneNumber(ParametersClass^ n, String^ NewPhoneNumber) {
	try {
		// Connection to DB
		ConnectToDB();

		String^ cmdText4 = "Update dbo.Clients SET PhoneNumber = @PhoneNumber Where CardNumber = '" + n->CardNumber + "' AND PIN_Code  = '" + n->PIN_Code + "'";
		SqlCommand^ cmd4 = gcnew SqlCommand(cmdText4, conn);
		cmd4->Parameters->AddWithValue("@PhoneNumber", NewPhoneNumber);
		conn->Open();
		cmd4->ExecuteNonQuery();
	}
	finally {
		if (conn != nullptr) {
			conn->Close();
		}
		// Completed
	}
}
