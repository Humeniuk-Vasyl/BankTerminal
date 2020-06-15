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

	/// <summary>
	/// Сводка для Card_OutForm
	/// </summary>
	public ref class Card_OutForm : public System::Windows::Forms::Form
	{
	public:
		Card_OutForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Card_OutForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mainMenuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel2;
	private: ::JThinButton::JThinButton^ WithdrowalButton;

	private: ::JThinButton::JThinButton^ jThinButton6;
	private: ::JThinButton::JThinButton^ jThinButton5;
	private: ::JThinButton::JThinButton^ jThinButton4;
	private: ::JThinButton::JThinButton^ jThinButton3;
	private: ::JThinButton::JThinButton^ jThinButton2;
	private: ::JThinButton::JThinButton^ jThinButton1;
	private: ::JMetroTextBox::JMetroTextBox^ SummOfWithdrowal;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: ::JMetroTextBox::JMetroTextBox^ CardNumberTxt;
	private: ::JMetroTextBox::JMetroTextBox^ UserNameTxt;
	private: ::JMetroTextBox::JMetroTextBox^ MaxWithdrowalSumm;



	private: ::JDragControl::JDragControl^ jDragControl1;
	private: System::ComponentModel::IContainer^ components;


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mainMenuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->WithdrowalButton = (gcnew ::JThinButton::JThinButton());
			this->jThinButton6 = (gcnew ::JThinButton::JThinButton());
			this->jThinButton5 = (gcnew ::JThinButton::JThinButton());
			this->jThinButton4 = (gcnew ::JThinButton::JThinButton());
			this->jThinButton3 = (gcnew ::JThinButton::JThinButton());
			this->jThinButton2 = (gcnew ::JThinButton::JThinButton());
			this->jThinButton1 = (gcnew ::JThinButton::JThinButton());
			this->SummOfWithdrowal = (gcnew ::JMetroTextBox::JMetroTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->CardNumberTxt = (gcnew ::JMetroTextBox::JMetroTextBox());
			this->UserNameTxt = (gcnew ::JMetroTextBox::JMetroTextBox());
			this->MaxWithdrowalSumm = (gcnew ::JMetroTextBox::JMetroTextBox());
			this->jDragControl1 = (gcnew ::JDragControl::JDragControl(this->components));
			this->menuStrip1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::Coral;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->fileToolStripMenuItem,
					this->aboutToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(700, 27);
			this->menuStrip1->TabIndex = 5;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->BackColor = System::Drawing::Color::Coral;
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->mainMenuToolStripMenuItem,
					this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->fileToolStripMenuItem->ForeColor = System::Drawing::Color::RoyalBlue;
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(84, 23);
			this->fileToolStripMenuItem->Text = L"Actions";
			// 
			// mainMenuToolStripMenuItem
			// 
			this->mainMenuToolStripMenuItem->BackColor = System::Drawing::Color::White;
			this->mainMenuToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mainMenuToolStripMenuItem->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->mainMenuToolStripMenuItem->Name = L"mainMenuToolStripMenuItem";
			this->mainMenuToolStripMenuItem->Size = System::Drawing::Size(133, 28);
			this->mainMenuToolStripMenuItem->Text = L"Main";
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->BackColor = System::Drawing::Color::White;
			this->exitToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->exitToolStripMenuItem->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(133, 28);
			this->exitToolStripMenuItem->Text = L"Exit";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->BackColor = System::Drawing::Color::Coral;
			this->aboutToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->aboutToolStripMenuItem->ForeColor = System::Drawing::Color::RoyalBlue;
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(72, 23);
			this->aboutToolStripMenuItem->Text = L"About";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Coral;
			this->label3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label3->Location = System::Drawing::Point(670, -5);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(31, 32);
			this->label3->TabIndex = 8;
			this->label3->Text = L"X";
			this->label3->Click += gcnew System::EventHandler(this, &Card_OutForm::label3_Click);
			this->label3->MouseLeave += gcnew System::EventHandler(this, &Card_OutForm::label3_MouseLeave);
			this->label3->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Card_OutForm::label3_MouseMove);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Coral;
			this->panel1->Controls->Add(this->label2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 27);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(700, 100);
			this->panel1->TabIndex = 9;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label2->Location = System::Drawing::Point(239, 22);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(235, 47);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Withdrowal";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Coral;
			this->panel2->Location = System::Drawing::Point(349, 147);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(5, 390);
			this->panel2->TabIndex = 10;
			// 
			// WithdrowalButton
			// 
			this->WithdrowalButton->BackColor = System::Drawing::Color::Transparent;
			this->WithdrowalButton->BackgroundColor = System::Drawing::Color::Coral;
			this->WithdrowalButton->BorderColor = System::Drawing::Color::White;
			this->WithdrowalButton->BorderRadius = 23;
			this->WithdrowalButton->ButtonText = L"Зняти кошти";
			this->WithdrowalButton->Font = (gcnew System::Drawing::Font(L"Verdana", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->WithdrowalButton->Font_Size = (gcnew System::Drawing::Font(L"Verdana", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->WithdrowalButton->ForeColors = System::Drawing::Color::Black;
			this->WithdrowalButton->HoverBackground = System::Drawing::Color::OrangeRed;
			this->WithdrowalButton->HoverBorder = System::Drawing::Color::OrangeRed;
			this->WithdrowalButton->HoverFontColor = System::Drawing::Color::White;
			this->WithdrowalButton->LineThickness = 2;
			this->WithdrowalButton->Location = System::Drawing::Point(374, 484);
			this->WithdrowalButton->Margin = System::Windows::Forms::Padding(5);
			this->WithdrowalButton->Name = L"WithdrowalButton";
			this->WithdrowalButton->Size = System::Drawing::Size(304, 52);
			this->WithdrowalButton->TabIndex = 36;
			this->WithdrowalButton->Click += gcnew System::EventHandler(this, &Card_OutForm::WithdrowalButton_Click);
			// 
			// jThinButton6
			// 
			this->jThinButton6->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->jThinButton6->BackColor = System::Drawing::Color::Transparent;
			this->jThinButton6->BackgroundColor = System::Drawing::Color::Coral;
			this->jThinButton6->BorderColor = System::Drawing::Color::White;
			this->jThinButton6->BorderRadius = 15;
			this->jThinButton6->ButtonText = L"2000";
			this->jThinButton6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold));
			this->jThinButton6->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold));
			this->jThinButton6->ForeColors = System::Drawing::SystemColors::Info;
			this->jThinButton6->HoverBackground = System::Drawing::Color::OrangeRed;
			this->jThinButton6->HoverBorder = System::Drawing::Color::OrangeRed;
			this->jThinButton6->HoverFontColor = System::Drawing::Color::White;
			this->jThinButton6->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->jThinButton6->LineThickness = 2;
			this->jThinButton6->Location = System::Drawing::Point(528, 368);
			this->jThinButton6->Margin = System::Windows::Forms::Padding(12, 11, 12, 11);
			this->jThinButton6->Name = L"jThinButton6";
			this->jThinButton6->Size = System::Drawing::Size(150, 110);
			this->jThinButton6->TabIndex = 35;
			// 
			// jThinButton5
			// 
			this->jThinButton5->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->jThinButton5->BackColor = System::Drawing::Color::Transparent;
			this->jThinButton5->BackgroundColor = System::Drawing::Color::Coral;
			this->jThinButton5->BorderColor = System::Drawing::Color::White;
			this->jThinButton5->BorderRadius = 15;
			this->jThinButton5->ButtonText = L"1000";
			this->jThinButton5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold));
			this->jThinButton5->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold));
			this->jThinButton5->ForeColors = System::Drawing::SystemColors::Info;
			this->jThinButton5->HoverBackground = System::Drawing::Color::OrangeRed;
			this->jThinButton5->HoverBorder = System::Drawing::Color::OrangeRed;
			this->jThinButton5->HoverFontColor = System::Drawing::Color::White;
			this->jThinButton5->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->jThinButton5->LineThickness = 2;
			this->jThinButton5->Location = System::Drawing::Point(374, 368);
			this->jThinButton5->Margin = System::Windows::Forms::Padding(12, 11, 12, 11);
			this->jThinButton5->Name = L"jThinButton5";
			this->jThinButton5->Size = System::Drawing::Size(150, 110);
			this->jThinButton5->TabIndex = 34;
			// 
			// jThinButton4
			// 
			this->jThinButton4->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->jThinButton4->BackColor = System::Drawing::Color::Transparent;
			this->jThinButton4->BackgroundColor = System::Drawing::Color::Coral;
			this->jThinButton4->BorderColor = System::Drawing::Color::White;
			this->jThinButton4->BorderRadius = 15;
			this->jThinButton4->ButtonText = L"500";
			this->jThinButton4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold));
			this->jThinButton4->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold));
			this->jThinButton4->ForeColors = System::Drawing::SystemColors::Info;
			this->jThinButton4->HoverBackground = System::Drawing::Color::OrangeRed;
			this->jThinButton4->HoverBorder = System::Drawing::Color::OrangeRed;
			this->jThinButton4->HoverFontColor = System::Drawing::Color::White;
			this->jThinButton4->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->jThinButton4->LineThickness = 2;
			this->jThinButton4->Location = System::Drawing::Point(528, 258);
			this->jThinButton4->Margin = System::Windows::Forms::Padding(12, 11, 12, 11);
			this->jThinButton4->Name = L"jThinButton4";
			this->jThinButton4->Size = System::Drawing::Size(150, 110);
			this->jThinButton4->TabIndex = 33;
			// 
			// jThinButton3
			// 
			this->jThinButton3->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->jThinButton3->BackColor = System::Drawing::Color::Transparent;
			this->jThinButton3->BackgroundColor = System::Drawing::Color::Coral;
			this->jThinButton3->BorderColor = System::Drawing::Color::White;
			this->jThinButton3->BorderRadius = 15;
			this->jThinButton3->ButtonText = L"200";
			this->jThinButton3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold));
			this->jThinButton3->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold));
			this->jThinButton3->ForeColors = System::Drawing::SystemColors::Info;
			this->jThinButton3->HoverBackground = System::Drawing::Color::OrangeRed;
			this->jThinButton3->HoverBorder = System::Drawing::Color::OrangeRed;
			this->jThinButton3->HoverFontColor = System::Drawing::Color::White;
			this->jThinButton3->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->jThinButton3->LineThickness = 2;
			this->jThinButton3->Location = System::Drawing::Point(374, 258);
			this->jThinButton3->Margin = System::Windows::Forms::Padding(12, 11, 12, 11);
			this->jThinButton3->Name = L"jThinButton3";
			this->jThinButton3->Size = System::Drawing::Size(150, 110);
			this->jThinButton3->TabIndex = 32;
			// 
			// jThinButton2
			// 
			this->jThinButton2->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->jThinButton2->BackColor = System::Drawing::Color::Transparent;
			this->jThinButton2->BackgroundColor = System::Drawing::Color::Coral;
			this->jThinButton2->BorderColor = System::Drawing::Color::White;
			this->jThinButton2->BorderRadius = 15;
			this->jThinButton2->ButtonText = L"100";
			this->jThinButton2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold));
			this->jThinButton2->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold));
			this->jThinButton2->ForeColors = System::Drawing::SystemColors::Info;
			this->jThinButton2->HoverBackground = System::Drawing::Color::OrangeRed;
			this->jThinButton2->HoverBorder = System::Drawing::Color::OrangeRed;
			this->jThinButton2->HoverFontColor = System::Drawing::Color::White;
			this->jThinButton2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->jThinButton2->LineThickness = 2;
			this->jThinButton2->Location = System::Drawing::Point(528, 147);
			this->jThinButton2->Margin = System::Windows::Forms::Padding(12, 11, 12, 11);
			this->jThinButton2->Name = L"jThinButton2";
			this->jThinButton2->Size = System::Drawing::Size(150, 110);
			this->jThinButton2->TabIndex = 31;
			// 
			// jThinButton1
			// 
			this->jThinButton1->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->jThinButton1->BackColor = System::Drawing::Color::Transparent;
			this->jThinButton1->BackgroundColor = System::Drawing::Color::Coral;
			this->jThinButton1->BorderColor = System::Drawing::Color::White;
			this->jThinButton1->BorderRadius = 15;
			this->jThinButton1->ButtonText = L"50";
			this->jThinButton1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold));
			this->jThinButton1->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold));
			this->jThinButton1->ForeColors = System::Drawing::SystemColors::Info;
			this->jThinButton1->HoverBackground = System::Drawing::Color::OrangeRed;
			this->jThinButton1->HoverBorder = System::Drawing::Color::OrangeRed;
			this->jThinButton1->HoverFontColor = System::Drawing::Color::White;
			this->jThinButton1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->jThinButton1->LineThickness = 2;
			this->jThinButton1->Location = System::Drawing::Point(374, 147);
			this->jThinButton1->Margin = System::Windows::Forms::Padding(12, 11, 12, 11);
			this->jThinButton1->Name = L"jThinButton1";
			this->jThinButton1->Size = System::Drawing::Size(150, 110);
			this->jThinButton1->TabIndex = 30;
			// 
			// SummOfWithdrowal
			// 
			this->SummOfWithdrowal->BackColor = System::Drawing::Color::Transparent;
			this->SummOfWithdrowal->BorderColor = System::Drawing::Color::Empty;
			this->SummOfWithdrowal->BorderRadius = 20;
			this->SummOfWithdrowal->FillColor = System::Drawing::SystemColors::Window;
			this->SummOfWithdrowal->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->SummOfWithdrowal->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->SummOfWithdrowal->ForeColors = System::Drawing::Color::Gray;
			this->SummOfWithdrowal->IsPassword = false;
			this->SummOfWithdrowal->LineThickness = 2;
			this->SummOfWithdrowal->Location = System::Drawing::Point(68, 189);
			this->SummOfWithdrowal->Margin = System::Windows::Forms::Padding(4);
			this->SummOfWithdrowal->MaxLength = 32767;
			this->SummOfWithdrowal->MouseOnHover = System::Drawing::Color::DarkGray;
			this->SummOfWithdrowal->Name = L"SummOfWithdrowal";
			this->SummOfWithdrowal->OnCursor = System::Windows::Forms::Cursors::IBeam;
			this->SummOfWithdrowal->OnFocusColor = System::Drawing::Color::DarkGray;
			this->SummOfWithdrowal->OnFocusFontColor = System::Drawing::Color::Gray;
			this->SummOfWithdrowal->ReadOnly = false;
			this->SummOfWithdrowal->Size = System::Drawing::Size(218, 48);
			this->SummOfWithdrowal->TabIndex = 38;
			this->SummOfWithdrowal->TabStop = false;
			this->SummOfWithdrowal->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->SummOfWithdrowal->TextName = L"";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(60, 166);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(237, 20);
			this->label1->TabIndex = 37;
			this->label1->Text = L"Введіть суму видачі (кратну 50)";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(14, 461);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(111, 19);
			this->label6->TabIndex = 41;
			this->label6->Text = L"Номер картки";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(14, 415);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(88, 19);
			this->label5->TabIndex = 40;
			this->label5->Text = L"Отримувач";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(14, 368);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(202, 19);
			this->label4->TabIndex = 39;
			this->label4->Text = L"Максимальна сума видачі";
			// 
			// CardNumberTxt
			// 
			this->CardNumberTxt->BackColor = System::Drawing::Color::Transparent;
			this->CardNumberTxt->BorderColor = System::Drawing::Color::Empty;
			this->CardNumberTxt->BorderRadius = 10;
			this->CardNumberTxt->Enabled = false;
			this->CardNumberTxt->FillColor = System::Drawing::Color::White;
			this->CardNumberTxt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->CardNumberTxt->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->CardNumberTxt->ForeColors = System::Drawing::Color::Gray;
			this->CardNumberTxt->IsPassword = false;
			this->CardNumberTxt->LineThickness = 2;
			this->CardNumberTxt->Location = System::Drawing::Point(124, 447);
			this->CardNumberTxt->Margin = System::Windows::Forms::Padding(4);
			this->CardNumberTxt->MaxLength = 32767;
			this->CardNumberTxt->MouseOnHover = System::Drawing::Color::DarkGray;
			this->CardNumberTxt->Name = L"CardNumberTxt";
			this->CardNumberTxt->OnCursor = System::Windows::Forms::Cursors::IBeam;
			this->CardNumberTxt->OnFocusColor = System::Drawing::Color::DarkGray;
			this->CardNumberTxt->OnFocusFontColor = System::Drawing::Color::Gray;
			this->CardNumberTxt->ReadOnly = false;
			this->CardNumberTxt->Size = System::Drawing::Size(218, 48);
			this->CardNumberTxt->TabIndex = 44;
			this->CardNumberTxt->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->CardNumberTxt->TextName = L"****";
			// 
			// UserNameTxt
			// 
			this->UserNameTxt->BackColor = System::Drawing::Color::Transparent;
			this->UserNameTxt->BorderColor = System::Drawing::Color::Empty;
			this->UserNameTxt->BorderRadius = 10;
			this->UserNameTxt->Enabled = false;
			this->UserNameTxt->FillColor = System::Drawing::Color::White;
			this->UserNameTxt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->UserNameTxt->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->UserNameTxt->ForeColors = System::Drawing::Color::Gray;
			this->UserNameTxt->IsPassword = false;
			this->UserNameTxt->LineThickness = 2;
			this->UserNameTxt->Location = System::Drawing::Point(124, 400);
			this->UserNameTxt->Margin = System::Windows::Forms::Padding(4);
			this->UserNameTxt->MaxLength = 32767;
			this->UserNameTxt->MouseOnHover = System::Drawing::Color::DarkGray;
			this->UserNameTxt->Name = L"UserNameTxt";
			this->UserNameTxt->OnCursor = System::Windows::Forms::Cursors::IBeam;
			this->UserNameTxt->OnFocusColor = System::Drawing::Color::DarkGray;
			this->UserNameTxt->OnFocusFontColor = System::Drawing::Color::Gray;
			this->UserNameTxt->ReadOnly = false;
			this->UserNameTxt->Size = System::Drawing::Size(218, 48);
			this->UserNameTxt->TabIndex = 43;
			this->UserNameTxt->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->UserNameTxt->TextName = L"Name";
			// 
			// MaxWithdrowalSumm
			// 
			this->MaxWithdrowalSumm->BackColor = System::Drawing::Color::Transparent;
			this->MaxWithdrowalSumm->BorderColor = System::Drawing::Color::Empty;
			this->MaxWithdrowalSumm->BorderRadius = 10;
			this->MaxWithdrowalSumm->Enabled = false;
			this->MaxWithdrowalSumm->FillColor = System::Drawing::Color::White;
			this->MaxWithdrowalSumm->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->MaxWithdrowalSumm->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->MaxWithdrowalSumm->ForeColors = System::Drawing::Color::Gray;
			this->MaxWithdrowalSumm->IsPassword = false;
			this->MaxWithdrowalSumm->LineThickness = 2;
			this->MaxWithdrowalSumm->Location = System::Drawing::Point(234, 354);
			this->MaxWithdrowalSumm->Margin = System::Windows::Forms::Padding(4);
			this->MaxWithdrowalSumm->MaxLength = 32767;
			this->MaxWithdrowalSumm->MouseOnHover = System::Drawing::Color::DarkGray;
			this->MaxWithdrowalSumm->Name = L"MaxWithdrowalSumm";
			this->MaxWithdrowalSumm->OnCursor = System::Windows::Forms::Cursors::IBeam;
			this->MaxWithdrowalSumm->OnFocusColor = System::Drawing::Color::DarkGray;
			this->MaxWithdrowalSumm->OnFocusFontColor = System::Drawing::Color::Gray;
			this->MaxWithdrowalSumm->ReadOnly = false;
			this->MaxWithdrowalSumm->Size = System::Drawing::Size(110, 48);
			this->MaxWithdrowalSumm->TabIndex = 42;
			this->MaxWithdrowalSumm->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->MaxWithdrowalSumm->TextName = L"50000";
			// 
			// jDragControl1
			// 
			this->jDragControl1->GetForm = this;
			this->jDragControl1->TargetControl = this->menuStrip1;
			// 
			// Card_OutForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(700, 550);
			this->Controls->Add(this->CardNumberTxt);
			this->Controls->Add(this->UserNameTxt);
			this->Controls->Add(this->MaxWithdrowalSumm);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->SummOfWithdrowal);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->WithdrowalButton);
			this->Controls->Add(this->jThinButton6);
			this->Controls->Add(this->jThinButton5);
			this->Controls->Add(this->jThinButton4);
			this->Controls->Add(this->jThinButton3);
			this->Controls->Add(this->jThinButton2);
			this->Controls->Add(this->jThinButton1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Card_OutForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Card_OutForm";
			this->Load += gcnew System::EventHandler(this, &Card_OutForm::Card_OutForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		ParametersClass^ n = gcnew ParametersClass();
		DBFicsation f2;
		int userBalance = Convert::ToInt32(n->Balance);
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
		exit(0);
	}
	private: System::Void label3_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		this->label3->ForeColor = System::Drawing::Color::Tomato;
	}
	private: System::Void label3_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->label3->ForeColor = System::Drawing::Color::Gainsboro;
	}
	private: System::Void Card_OutForm_Load(System::Object^ sender, System::EventArgs^ e) {
		//Using the DB user info
		CardNumberTxt->TextName = Convert::ToString(n->CardNumber);
		UserNameTxt->TextName = Convert::ToString(n->UserName);
	}
	private: System::Void WithdrowalButton_Click(System::Object^ sender, System::EventArgs^ e) {
		int SummTxt;
		if (SummOfWithdrowal->TextName == "") {
			MessageBox::Show("Summ can`t be empty");
		}
		else if (SummTxt < 50 || SummTxt > 50000) {
			MessageBox::Show("Input summ between 50 and 50000");
		}
		else if (SummTxt > userBalance)
		{
			MessageBox::Show("Not anoutgh money on the balance");
		} 
		else{
			SummTxt = Convert::ToInt32(SummOfWithdrowal->TextName);
			f2.UpdateBalance(n, -SummTxt);
			this->Hide();
			EndForm^ _EndForm2 = gcnew EndForm();
			_EndForm2->ShowDialog();
		}
	}
	};
}
