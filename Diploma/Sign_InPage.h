#pragma once
#include "Log_InPage.h"
#include "DBFicsation.h"
#include <stdlib.h>

namespace Diploma {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// summary for Sign_InPage
	public ref class Sign_InPage : public System::Windows::Forms::Form
	{
	public:
		Sign_InPage(void);

	protected:
		/// delete all
		~Sign_InPage();
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mainMenuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;
	private: ::JMetroTextBox::JMetroTextBox^ CardNumberTxt;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: ::JMetroTextBox::JMetroTextBox^ PIN_CodeTxt;

	private: System::Windows::Forms::Label^ label5;
	private: ::JMetroTextBox::JMetroTextBox^ UserNameTxt;

	private: System::Windows::Forms::Label^ label6;
	private: ::JMetroTextBox::JMetroTextBox^ PhoneNumberTxt;

	private: ::JThinButton::JThinButton^ Sign_InSubmit;

	private: ::JDragControl::JDragControl^ jDragControl1;
	private: ::JDragControl::JDragControl^ jDragControl2;
	private: System::ComponentModel::IContainer^ components;

	private:
		
#pragma region Windows Form Designer generated code

		/// func for designer. don`t change

		void InitializeComponent(void);
#pragma endregion
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void label3_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
	private: System::Void label3_MouseLeave(System::Object^ sender, System::EventArgs^ e);
		   //config the MenuStrip
	private: System::Void mainMenuToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
		   //config the registration button
	private: System::Void Sign_InSubmit_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
