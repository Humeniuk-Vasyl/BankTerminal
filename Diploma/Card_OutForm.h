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
	private: ::JThinButton::JThinButton^ Button2000;


	private: ::JThinButton::JThinButton^ Button1000;

	private: ::JThinButton::JThinButton^ Button500;

	private: ::JThinButton::JThinButton^ Button200;

	private: ::JThinButton::JThinButton^ Button100;

	private: ::JThinButton::JThinButton^ Button50;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Card_OutForm::typeid));
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
			this->Button2000 = (gcnew ::JThinButton::JThinButton());
			this->Button1000 = (gcnew ::JThinButton::JThinButton());
			this->Button500 = (gcnew ::JThinButton::JThinButton());
			this->Button200 = (gcnew ::JThinButton::JThinButton());
			this->Button100 = (gcnew ::JThinButton::JThinButton());
			this->Button50 = (gcnew ::JThinButton::JThinButton());
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
			this->menuStrip1->Size = System::Drawing::Size(700, 30);
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
			this->fileToolStripMenuItem->ForeColor = System::Drawing::Color::Black;
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(84, 26);
			this->fileToolStripMenuItem->Text = L"Actions";
			// 
			// mainMenuToolStripMenuItem
			// 
			this->mainMenuToolStripMenuItem->BackColor = System::Drawing::Color::White;
			this->mainMenuToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mainMenuToolStripMenuItem->ForeColor = System::Drawing::Color::Black;
			this->mainMenuToolStripMenuItem->Name = L"mainMenuToolStripMenuItem";
			this->mainMenuToolStripMenuItem->Size = System::Drawing::Size(133, 28);
			this->mainMenuToolStripMenuItem->Text = L"Main";
			this->mainMenuToolStripMenuItem->Click += gcnew System::EventHandler(this, &Card_OutForm::mainMenuToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->BackColor = System::Drawing::Color::White;
			this->exitToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->exitToolStripMenuItem->ForeColor = System::Drawing::Color::Black;
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(133, 28);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Card_OutForm::exitToolStripMenuItem_Click);
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->BackColor = System::Drawing::Color::Coral;
			this->aboutToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->aboutToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(72, 26);
			this->aboutToolStripMenuItem->Text = L"About";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Coral;
			this->label3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
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
			this->panel1->Location = System::Drawing::Point(0, 30);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(700, 100);
			this->panel1->TabIndex = 9;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
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
			this->panel2->Location = System::Drawing::Point(349, 141);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(5, 400);
			this->panel2->TabIndex = 10;
			// 
			// WithdrowalButton
			// 
			this->WithdrowalButton->BackColor = System::Drawing::Color::Transparent;
			this->WithdrowalButton->BackgroundColor = System::Drawing::Color::Coral;
			this->WithdrowalButton->BorderColor = System::Drawing::Color::White;
			this->WithdrowalButton->BorderRadius = 23;
			this->WithdrowalButton->ButtonText = L"Зняти кошти";
			this->WithdrowalButton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->WithdrowalButton->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->WithdrowalButton->ForeColors = System::Drawing::SystemColors::ActiveCaptionText;
			this->WithdrowalButton->HoverBackground = System::Drawing::Color::OrangeRed;
			this->WithdrowalButton->HoverBorder = System::Drawing::Color::OrangeRed;
			this->WithdrowalButton->HoverFontColor = System::Drawing::Color::White;
			this->WithdrowalButton->LineThickness = 2;
			this->WithdrowalButton->Location = System::Drawing::Point(374, 486);
			this->WithdrowalButton->Margin = System::Windows::Forms::Padding(5);
			this->WithdrowalButton->Name = L"WithdrowalButton";
			this->WithdrowalButton->Size = System::Drawing::Size(304, 52);
			this->WithdrowalButton->TabIndex = 36;
			this->WithdrowalButton->Click += gcnew System::EventHandler(this, &Card_OutForm::WithdrowalButton_Click);
			// 
			// Button2000
			// 
			this->Button2000->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->Button2000->BackColor = System::Drawing::Color::Transparent;
			this->Button2000->BackgroundColor = System::Drawing::Color::Coral;
			this->Button2000->BorderColor = System::Drawing::Color::White;
			this->Button2000->BorderRadius = 15;
			this->Button2000->ButtonText = L"2000";
			this->Button2000->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold));
			this->Button2000->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold));
			this->Button2000->ForeColors = System::Drawing::SystemColors::Info;
			this->Button2000->HoverBackground = System::Drawing::Color::OrangeRed;
			this->Button2000->HoverBorder = System::Drawing::Color::OrangeRed;
			this->Button2000->HoverFontColor = System::Drawing::Color::White;
			this->Button2000->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->Button2000->LineThickness = 2;
			this->Button2000->Location = System::Drawing::Point(528, 370);
			this->Button2000->Margin = System::Windows::Forms::Padding(12, 11, 12, 11);
			this->Button2000->Name = L"Button2000";
			this->Button2000->Size = System::Drawing::Size(150, 110);
			this->Button2000->TabIndex = 35;
			this->Button2000->Click += gcnew System::EventHandler(this, &Card_OutForm::Button2000_Click);
			// 
			// Button1000
			// 
			this->Button1000->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->Button1000->BackColor = System::Drawing::Color::Transparent;
			this->Button1000->BackgroundColor = System::Drawing::Color::Coral;
			this->Button1000->BorderColor = System::Drawing::Color::White;
			this->Button1000->BorderRadius = 15;
			this->Button1000->ButtonText = L"1000";
			this->Button1000->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold));
			this->Button1000->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold));
			this->Button1000->ForeColors = System::Drawing::SystemColors::Info;
			this->Button1000->HoverBackground = System::Drawing::Color::OrangeRed;
			this->Button1000->HoverBorder = System::Drawing::Color::OrangeRed;
			this->Button1000->HoverFontColor = System::Drawing::Color::White;
			this->Button1000->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->Button1000->LineThickness = 2;
			this->Button1000->Location = System::Drawing::Point(374, 370);
			this->Button1000->Margin = System::Windows::Forms::Padding(12, 11, 12, 11);
			this->Button1000->Name = L"Button1000";
			this->Button1000->Size = System::Drawing::Size(150, 110);
			this->Button1000->TabIndex = 34;
			this->Button1000->Click += gcnew System::EventHandler(this, &Card_OutForm::Button1000_Click);
			// 
			// Button500
			// 
			this->Button500->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->Button500->BackColor = System::Drawing::Color::Transparent;
			this->Button500->BackgroundColor = System::Drawing::Color::Coral;
			this->Button500->BorderColor = System::Drawing::Color::White;
			this->Button500->BorderRadius = 15;
			this->Button500->ButtonText = L"500";
			this->Button500->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold));
			this->Button500->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold));
			this->Button500->ForeColors = System::Drawing::SystemColors::Info;
			this->Button500->HoverBackground = System::Drawing::Color::OrangeRed;
			this->Button500->HoverBorder = System::Drawing::Color::OrangeRed;
			this->Button500->HoverFontColor = System::Drawing::Color::White;
			this->Button500->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->Button500->LineThickness = 2;
			this->Button500->Location = System::Drawing::Point(528, 256);
			this->Button500->Margin = System::Windows::Forms::Padding(12, 11, 12, 11);
			this->Button500->Name = L"Button500";
			this->Button500->Size = System::Drawing::Size(150, 110);
			this->Button500->TabIndex = 33;
			this->Button500->Click += gcnew System::EventHandler(this, &Card_OutForm::Button500_Click);
			// 
			// Button200
			// 
			this->Button200->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->Button200->BackColor = System::Drawing::Color::Transparent;
			this->Button200->BackgroundColor = System::Drawing::Color::Coral;
			this->Button200->BorderColor = System::Drawing::Color::White;
			this->Button200->BorderRadius = 15;
			this->Button200->ButtonText = L"200";
			this->Button200->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold));
			this->Button200->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold));
			this->Button200->ForeColors = System::Drawing::SystemColors::Info;
			this->Button200->HoverBackground = System::Drawing::Color::OrangeRed;
			this->Button200->HoverBorder = System::Drawing::Color::OrangeRed;
			this->Button200->HoverFontColor = System::Drawing::Color::White;
			this->Button200->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->Button200->LineThickness = 2;
			this->Button200->Location = System::Drawing::Point(374, 256);
			this->Button200->Margin = System::Windows::Forms::Padding(12, 11, 12, 11);
			this->Button200->Name = L"Button200";
			this->Button200->Size = System::Drawing::Size(150, 110);
			this->Button200->TabIndex = 32;
			this->Button200->Click += gcnew System::EventHandler(this, &Card_OutForm::Button200_Click);
			// 
			// Button100
			// 
			this->Button100->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->Button100->BackColor = System::Drawing::Color::Transparent;
			this->Button100->BackgroundColor = System::Drawing::Color::Coral;
			this->Button100->BorderColor = System::Drawing::Color::White;
			this->Button100->BorderRadius = 15;
			this->Button100->ButtonText = L"100";
			this->Button100->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold));
			this->Button100->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold));
			this->Button100->ForeColors = System::Drawing::SystemColors::Info;
			this->Button100->HoverBackground = System::Drawing::Color::OrangeRed;
			this->Button100->HoverBorder = System::Drawing::Color::OrangeRed;
			this->Button100->HoverFontColor = System::Drawing::Color::White;
			this->Button100->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->Button100->LineThickness = 2;
			this->Button100->Location = System::Drawing::Point(528, 142);
			this->Button100->Margin = System::Windows::Forms::Padding(12, 11, 12, 11);
			this->Button100->Name = L"Button100";
			this->Button100->Size = System::Drawing::Size(150, 110);
			this->Button100->TabIndex = 31;
			this->Button100->Click += gcnew System::EventHandler(this, &Card_OutForm::Button100_Click);
			// 
			// Button50
			// 
			this->Button50->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->Button50->BackColor = System::Drawing::Color::Transparent;
			this->Button50->BackgroundColor = System::Drawing::Color::Coral;
			this->Button50->BorderColor = System::Drawing::Color::White;
			this->Button50->BorderRadius = 15;
			this->Button50->ButtonText = L"50";
			this->Button50->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold));
			this->Button50->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold));
			this->Button50->ForeColors = System::Drawing::SystemColors::Info;
			this->Button50->HoverBackground = System::Drawing::Color::OrangeRed;
			this->Button50->HoverBorder = System::Drawing::Color::OrangeRed;
			this->Button50->HoverFontColor = System::Drawing::Color::White;
			this->Button50->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->Button50->LineThickness = 2;
			this->Button50->Location = System::Drawing::Point(374, 142);
			this->Button50->Margin = System::Windows::Forms::Padding(12, 11, 12, 11);
			this->Button50->Name = L"Button50";
			this->Button50->Size = System::Drawing::Size(150, 110);
			this->Button50->TabIndex = 30;
			this->Button50->Click += gcnew System::EventHandler(this, &Card_OutForm::Button50_Click);
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
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(60, 166);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(237, 20);
			this->label1->TabIndex = 37;
			this->label1->Text = L"Введіть суму видачі (кратну 50)";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(14, 461);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(111, 19);
			this->label6->TabIndex = 41;
			this->label6->Text = L"Номер картки";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(14, 415);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(88, 19);
			this->label5->TabIndex = 40;
			this->label5->Text = L"Отримувач";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::White;
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
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
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
			this->Controls->Add(this->Button2000);
			this->Controls->Add(this->Button1000);
			this->Controls->Add(this->Button500);
			this->Controls->Add(this->Button200);
			this->Controls->Add(this->Button100);
			this->Controls->Add(this->Button50);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->menuStrip1);
			this->DoubleBuffered = true;
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
		try {
			SummTxt = Convert::ToInt32(SummOfWithdrowal->TextName);
		}
		catch (const System::FormatException^ ex) {
			MessageBox::Show("Incorect format!");
			ex;
		}
		if (SummOfWithdrowal->TextName == "") {
			MessageBox::Show("Summ can`t be empty");
		}
		if (SummTxt > Convert::ToInt32(n->Balance)) {
			MessageBox::Show("Not enought money on balance");
		}
		if (SummTxt < 50 || SummTxt > 50000 || SummTxt % 50 != 0) {
			MessageBox::Show("Input summ between 50 and 50000 and multiple of fifty");
		}
		else {
			SummTxt = Convert::ToInt32(SummOfWithdrowal->TextName);
			f2.UpdateBalance(n, -SummTxt);
			this->Hide();
			EndForm^ _EndForm2 = gcnew EndForm();
			_EndForm2->ShowDialog();
		}
	}
	private: System::Void Button50_Click(System::Object^ sender, System::EventArgs^ e) {
		int SummTxt1 = 50;
		if (SummTxt1 > Convert::ToInt32(n->Balance)) {
			MessageBox::Show("Not enought money on balance");
		}
		else {
			f2.UpdateBalance(n, -50);
			this->Hide();
			EndForm^ _EndForm2 = gcnew EndForm();
			_EndForm2->ShowDialog();
		}
	}
	private: System::Void Button100_Click(System::Object^ sender, System::EventArgs^ e) {
		int SummTxt1 = 100;
		if (SummTxt1 > Convert::ToInt32(n->Balance)) {
			MessageBox::Show("Not enought money on balance");
		}
		else {
			f2.UpdateBalance(n, -100);
			this->Hide();
			EndForm^ _EndForm2 = gcnew EndForm();
			_EndForm2->ShowDialog();
		}
	}
	private: System::Void Button200_Click(System::Object^ sender, System::EventArgs^ e) {
		int SummTxt1 = 200;
		if (SummTxt1 > Convert::ToInt32(n->Balance)) {
			MessageBox::Show("Not enought money on balance");
		}
		else {
			f2.UpdateBalance(n, -200);
			this->Hide();
			EndForm^ _EndForm2 = gcnew EndForm();
			_EndForm2->ShowDialog();
		}
	}
	private: System::Void Button500_Click(System::Object^ sender, System::EventArgs^ e) {
		int SummTxt1 = 500;
		if (SummTxt1 > Convert::ToInt32(n->Balance)) {
			MessageBox::Show("Not enought money on balance");
		}
		else {
			f2.UpdateBalance(n, -500);
			this->Hide();
			EndForm^ _EndForm2 = gcnew EndForm();
			_EndForm2->ShowDialog();
		}
	}
	private: System::Void Button1000_Click(System::Object^ sender, System::EventArgs^ e) {
		int SummTxt1 = 1000;
		if (SummTxt1 > Convert::ToInt32(n->Balance)) {
			MessageBox::Show("Not enought money on balance");
		}
		else {
			f2.UpdateBalance(n, -1000);
			this->Hide();
			EndForm^ _EndForm2 = gcnew EndForm();
			_EndForm2->ShowDialog();
		}
	}
	private: System::Void Button2000_Click(System::Object^ sender, System::EventArgs^ e) {
		int SummTxt1 = 2000;
		if (SummTxt1 > Convert::ToInt32(n->Balance)) {
			MessageBox::Show("Not enought money on balance");
		}
		else {
			f2.UpdateBalance(n, -2000);
			this->Hide();
			EndForm^ _EndForm2 = gcnew EndForm();
			_EndForm2->ShowDialog();
		}
	}
	private: System::Void mainMenuToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		exit(0);
	}
	};
}
