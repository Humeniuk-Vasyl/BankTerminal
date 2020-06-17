#pragma once
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace Data;
using namespace Data::SqlClient;

ref class ParametersClass {
public:
	static String^ cardNumber;
	static property String^ CardNumber {
		String^ get() {
			return cardNumber;
		}
		void set(String^ value) {
			cardNumber = value;
		}
	}
	static String^ pIN_code;
	static property String^ PIN_Code {
		String^ get() {
			return pIN_code;
		}
		void set(String^ value) {
			pIN_code = value;
		}
	}
	static String^ userName;
	static property String^ UserName {
		String^ get() {
			return userName;
		}
		void set(String^ value) {
			userName = value;
		}
	}
	static String^ phoneNumber;
	static property String^ PhoneNumber {
		String^ get() {
			return phoneNumber;
		}
		void set(String^ value) {
			phoneNumber = value;
		}
	}
	static String^ balance;
	static property String^ Balance {
		String^ get() {
			return balance;
		}
		void set(String^ value) {
			balance = value;
		}
	}
	static String^ deposit;
	static property String^ Deposit {
		String^ get() {
			return deposit;
		}
		void set(String^ value) {
			deposit = value;
		}
	}
};

