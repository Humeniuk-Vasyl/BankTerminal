#pragma once
#include <stdlib.h>
#include "EndForm.h"
#include "ParametersClass.h"

namespace Diploma {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// summary for BalanceForm
	public ref class BalanceForm : public System::Windows::Forms::Form
	{
	public:
		BalanceForm(void)
		{
			InitializeComponent();

		}

	protected:
		/// delete all
		~BalanceForm();
	private: System::Windows::Forms::Label^ label3;
	protected:
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mainMenuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label1;
	private: ::JMetroTextBox::JMetroTextBox^ DepositTxt;

	private: ::JMetroTextBox::JMetroTextBox^ BalanceTxt;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label2;
	private: ::JThinButton::JThinButton^ GetCheckButton;


	private: ::JDragControl::JDragControl^ jDragControl1;
	private: System::ComponentModel::IContainer^ components;

	private:

#pragma region Windows Form Designer generated code

		/// func for designer. don`t change

		void InitializeComponent(void);
#pragma endregion
		ParametersClass^ n = gcnew ParametersClass();
	private: System::Void BalanceForm_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void mainMenuToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void aboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void label3_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
	private: System::Void label3_MouseLeave(System::Object^ sender, System::EventArgs^ e);
	private: System::Void GetCheckButton_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
