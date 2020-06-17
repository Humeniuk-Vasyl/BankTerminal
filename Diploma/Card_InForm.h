#pragma once
#include <stdlib.h>
#include <iostream>
#include "ParametersClass.h"
#include "DBFicsation.h"
#include "EndForm.h"
namespace Diploma {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// summary for Card_InForm
	public ref class Card_InForm : public System::Windows::Forms::Form
	{
	public:
		Card_InForm(void);

	protected:
		/// delete all
		~Card_InForm();
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mainMenuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel2;
	private: ::JThinButton::JThinButton^ Button50;
	private: ::JThinButton::JThinButton^ Button100;
	private: ::JThinButton::JThinButton^ Button200;
	private: ::JThinButton::JThinButton^ Button500;
	private: ::JThinButton::JThinButton^ Button1000;
	private: ::JThinButton::JThinButton^ Button2000;

	private: ::JThinButton::JThinButton^ ReplanishButton;

	private: System::Windows::Forms::Label^ label1;
	private: ::JMetroTextBox::JMetroTextBox^ SummOfReplanishment;

	private: ::JMetroTextBox::JMetroTextBox^ MaxSummTxt;

	private: ::JMetroTextBox::JMetroTextBox^ UserNameTxt;
	private: ::JMetroTextBox::JMetroTextBox^ CardNumberTxt;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: ::JDragControl::JDragControl^ jDragControl1;
	private: System::Windows::Forms::Label^ label7;
	private: ::JMetroTextBox::JMetroTextBox^ CurrentBalanceTxt;
	private: System::ComponentModel::IContainer^ components;

	private:

#pragma region Windows Form Designer generated code
		/// func for designer. don`t change
		void InitializeComponent(void);
#pragma endregion
		ParametersClass^ n = gcnew ParametersClass(); //Creating user-data value
		DBFicsation f2;								  //Creating DB source n conn class
	private: System::Void Card_InForm_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void label3_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
	private: System::Void label3_MouseLeave(System::Object^ sender, System::EventArgs^ e);
	private: System::Void mainMenuToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ReplanishButton_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Button50_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Button100_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Button200_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Button500_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Button1000_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Button2000_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void aboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
