#pragma once
#include "EndForm.h"
#include <stdlib.h>

namespace Diploma {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// summary for ConversionForm
	public ref class ConversionForm : public System::Windows::Forms::Form
	{
	public:
		ConversionForm(void);

	protected:
		/// delete all
		~ConversionForm();
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mainMenuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel2;
	private: ::JMetroTextBox::JMetroTextBox^ ÑurrencyNumber2;
	private: ::JMetroTextBox::JMetroTextBox^ ÑurrencyNumber1;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListBox^ CurrencyBox1;
	private: System::Windows::Forms::ListBox^ CurrencyBox2;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: ::JMetroTextBox::JMetroTextBox^ jMetroTextBox3;
	private: ::JMetroTextBox::JMetroTextBox^ jMetroTextBox4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: ::JMetroTextBox::JMetroTextBox^ jMetroTextBox5;
	private: ::JMetroTextBox::JMetroTextBox^ jMetroTextBox6;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: ::JMetroTextBox::JMetroTextBox^ jMetroTextBox7;
	private: ::JMetroTextBox::JMetroTextBox^ jMetroTextBox8;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: ::JMetroTextBox::JMetroTextBox^ jMetroTextBox9;
	private: ::JMetroTextBox::JMetroTextBox^ jMetroTextBox10;
	private: ::JThinButton::JThinButton^ CalculateButton;
	private: ::JThinButton::JThinButton^ AdditionallyButton;

	private: ::JDragControl::JDragControl^ jDragControl1;
	private: System::ComponentModel::IContainer^ components;

	private:

#pragma region Windows Form Designer generated code
		/// func for designer. don`t change
		void InitializeComponent(void);
#pragma endregion
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void label3_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
	private: System::Void label3_MouseLeave(System::Object^ sender, System::EventArgs^ e);
	private: System::Void mainMenuToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void aboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void CalculateButton_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void AdditionallyButton_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
