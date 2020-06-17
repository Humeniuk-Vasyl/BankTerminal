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

	/// summary for DepositForm
	public ref class DepositForm : public System::Windows::Forms::Form
	{
	public:
		DepositForm(void);

	protected:
		/// delete all
		~DepositForm();
	private: System::Windows::Forms::Label^ label3;
	protected:
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mainMenuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label6;
	private: ::JMetroTextBox::JMetroTextBox^ ClientCardNumber;

	private: System::Windows::Forms::Label^ label4;
	private: ::JMetroTextBox::JMetroTextBox^ DepositSumm;

	private: ::JMetroTextBox::JMetroTextBox^ TermNumber;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label5;
	private: ::JMetroTextBox::JMetroTextBox^ DepositMinSumm;

	private: System::Windows::Forms::Label^ label7;
	private: ::JMetroTextBox::JMetroTextBox^ PercentageRate;
	private: ::JThinButton::JThinButton^ DepositButton;

	private: ::JMetroTextBox::JMetroTextBox^ DepositMaxSumm;

	private: System::Windows::Forms::Label^ label8;
	private: ::JDragControl::JDragControl^ jDragControl1;
	private: ::JThinButton::JThinButton^ MinusTerm;
	private: ::JThinButton::JThinButton^ PlusTerm;

	private: System::ComponentModel::IContainer^ components;

	private:
		
#pragma region Windows Form Designer generated code
		/// func for designer. don`t change
		void InitializeComponent(void);
#pragma endregion
		ParametersClass^ n = gcnew ParametersClass();
		DBFicsation f5;
	private: System::Void DepositForm_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void label3_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
	private: System::Void label3_MouseLeave(System::Object^ sender, System::EventArgs^ e);
	private: System::Void mainMenuToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void aboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void MinusTerm_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void PlusTerm_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void DepositButton_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
