#pragma once
#include "Card_InForm.h"
#include "Card_OutForm.h"
#include "BalanceForm.h"
#include "Phone_InForm.h"
#include "DepositForm.h"
#include "ChangingForm.h"
#include "ConversionForm.h"
#include <stdlib.h>

namespace Diploma {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// summary for MainMenuPage
	public ref class MainMenuPage : public System::Windows::Forms::Form
	{
	public:
		MainMenuPage(void);

	protected:
		/// delete all
		~MainMenuPage();
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label2;

	private: ::JDragControl::JDragControl^ jDragControl1;
	private: ::JDragControl::JDragControl^ jDragControl2;
	private: ::JThinButton::JThinButton^ ReplanishmentFormButton;
	private: ::JThinButton::JThinButton^ BalanceFormButton;

	private: ::JThinButton::JThinButton^ WithdrawalFormButton;
	private: ::JThinButton::JThinButton^ ConversionFormButton;

	private: ::JThinButton::JThinButton^ DepositFormButton;

	private: ::JThinButton::JThinButton^ PhoneReplenishmentFormButton;
	private: ::JThinButton::JThinButton^ ChangePIN_CodeOrPhone;
	private: System::Windows::Forms::ToolStripMenuItem^ menuToolStripMenuItem;

	private: System::ComponentModel::IContainer^ components;

	private:

#pragma region Windows Form Designer generated code

		/// func for designer. don`t change

		void InitializeComponent(void);
#pragma endregion
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void label3_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
	private: System::Void label3_MouseLeave(System::Object^ sender, System::EventArgs^ e);
	private: System::Void menuToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void aboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ReplanishmentFormButton_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void WithdrawalForm_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void BalanceFormButton_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void PhoneReplenishmentFormButton_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void DepositForm_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ChangePIN_CodeOrPhone_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ConversionFormButton_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
