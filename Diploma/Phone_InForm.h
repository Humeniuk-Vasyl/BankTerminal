#pragma once
#include <stdlib.h>
#include "EndForm.h"
#include "ParametersClass.h"
#include "DBFicsation.h"

namespace Diploma {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// summary for Phone_InForm
	public ref class Phone_InForm : public System::Windows::Forms::Form
	{
	public:
		Phone_InForm(void);

	protected:
		/// delete all
		~Phone_InForm();
	private: System::Windows::Forms::Label^ label3;
	protected:
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mainMenuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label4;
	private: ::JMetroTextBox::JMetroTextBox^ MaxSummOfPhoneRepl;

	private: ::JMetroTextBox::JMetroTextBox^ SummOfPhoneRepl;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label6;
	private: ::JMetroTextBox::JMetroTextBox^ PhoneNumberTxt;

	private: ::JThinButton::JThinButton^ PhoneReplButton;
	private: ::JThinButton::JThinButton^ Button200;

	private: ::JThinButton::JThinButton^ Button100;

	private: ::JThinButton::JThinButton^ Button50;

	private: ::JThinButton::JThinButton^ Button20;
	private: ::JThinButton::JThinButton^ Button10;

	private: ::JThinButton::JThinButton^ Button5;

	private: ::JDragControl::JDragControl^ jDragControl1;
	private: System::ComponentModel::IContainer^ components;

	private:

#pragma region Windows Form Designer generated code
		/// func for designer. don`t change
		void InitializeComponent(void);
#pragma endregion
		ParametersClass^ n = gcnew ParametersClass();
		DBFicsation f4;
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void label3_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
	private: System::Void label3_MouseLeave(System::Object^ sender, System::EventArgs^ e);
	private: System::Void mainMenuToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void aboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void PhoneReplButton_click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Button5_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Button10_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Button20_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Button50_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Button100_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Button200_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
