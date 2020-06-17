#pragma once
#include "MainMenuPage.h"
#include <stdlib.h>
#include "DBFicsation.h"
#include "ParametersClass.h"

namespace Diploma {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// summary for Log_InPage
	public ref class Log_InPage : public System::Windows::Forms::Form
	{
	public:
		Log_InPage(void);

	protected:
		/// delete all
		~Log_InPage();
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
	private: System::Windows::Forms::Label^ label3;
	private: ::JMetroTextBox::JMetroTextBox^ CardNumberTxt;
	private: ::JMetroTextBox::JMetroTextBox^ PIN_CodeTxt;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: ::JThinButton::JThinButton^ SubmitButton;

	private: ::JDragControl::JDragControl^ jDragControl1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label4;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// func for designer. don`t change

#pragma region Windows Form Designer generated code
		 //config the END label
		void InitializeComponent(void);
#pragma endregion
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void label3_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
	private: System::Void label3_MouseLeave(System::Object^ sender, System::EventArgs^ e);
	private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void aboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
		   //config the user data submit button
	private: System::Void SubmitButton_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
