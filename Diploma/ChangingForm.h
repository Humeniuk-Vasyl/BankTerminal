#pragma once
#include "EndForm.h"
#include "ParametersClass.h"
#include "DBFicsation.h"
#include <stdlib.h>
namespace Diploma {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// summary for ChangingForm
	public ref class ChangingForm : public System::Windows::Forms::Form
	{
	public:
		ChangingForm(void);

	protected:
		/// delete all
		~ChangingForm();
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ToolStripMenuItem^ menuToolStripMenuItem;
	private: System::Windows::Forms::Label^ label3;
	private: ::JThinButton::JThinButton^ ChangePIN_codeButton;
	private: System::Windows::Forms::Panel^ panel2;
	private: ::JThinButton::JThinButton^ ChangePhoneNumberButton;
	private: ::JMetroTextBox::JMetroTextBox^ NewNumberTxt;

	private: ::JMetroTextBox::JMetroTextBox^ ReNewNumberTxt;

	private: ::JMetroTextBox::JMetroTextBox^ NewPINTxt;
	private: ::JMetroTextBox::JMetroTextBox^ OldPINTxt1;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label6;
	private: ::JMetroTextBox::JMetroTextBox^ ReNewPINTxt;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: ::JDragControl::JDragControl^ jDragControl1;
	private: System::ComponentModel::IContainer^ components;

	protected:

	private:

#pragma region Windows Form Designer generated code

		/// func for designer. don`t change

		void InitializeComponent(void);
#pragma endregion
		ParametersClass^ n = gcnew ParametersClass();
		DBFicsation f6;
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void label3_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
	private: System::Void label3_MouseLeave(System::Object^ sender, System::EventArgs^ e);
	private: System::Void menuToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		exit(0);
	}
	private: System::Void ChangePIN_codeButton_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ChangePhoneNumberButton_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
