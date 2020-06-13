#pragma once
#include <stdlib.h>
#include "EndForm.h"

namespace Diploma {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для DepositForm
	/// </summary>
	public ref class DepositForm : public System::Windows::Forms::Form
	{
	public:
		DepositForm(void)
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
		~DepositForm()
		{
			if (components)
			{
				delete components;
			}
		}
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
	private: ::JMetroTextBox::JMetroTextBox^ jMetroTextBox4;
	private: System::Windows::Forms::Label^ label4;
	private: ::JMetroTextBox::JMetroTextBox^ SummNumber;


	private: ::JMetroTextBox::JMetroTextBox^ TermNumber;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label5;
	private: ::JMetroTextBox::JMetroTextBox^ jMetroTextBox3;
	private: System::Windows::Forms::Label^ label7;
	private: ::JMetroTextBox::JMetroTextBox^ jMetroTextBox5;
	private: ::JThinButton::JThinButton^ jThinButton7;

	private: ::JMetroTextBox::JMetroTextBox^ jMetroTextBox6;
	private: System::Windows::Forms::Label^ label8;
	private: ::JDragControl::JDragControl^ jDragControl1;
	private: ::JThinButton::JThinButton^ MinusTerm;
	private: ::JThinButton::JThinButton^ PlusTerm;


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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mainMenuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->jMetroTextBox4 = (gcnew ::JMetroTextBox::JMetroTextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SummNumber = (gcnew ::JMetroTextBox::JMetroTextBox());
			this->TermNumber = (gcnew ::JMetroTextBox::JMetroTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->jMetroTextBox3 = (gcnew ::JMetroTextBox::JMetroTextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->jMetroTextBox5 = (gcnew ::JMetroTextBox::JMetroTextBox());
			this->jThinButton7 = (gcnew ::JThinButton::JThinButton());
			this->jMetroTextBox6 = (gcnew ::JMetroTextBox::JMetroTextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->jDragControl1 = (gcnew ::JDragControl::JDragControl(this->components));
			this->PlusTerm = (gcnew ::JThinButton::JThinButton());
			this->MinusTerm = (gcnew ::JThinButton::JThinButton());
			this->menuStrip1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->label3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->Location = System::Drawing::Point(672, -5);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(31, 32);
			this->label3->TabIndex = 11;
			this->label3->Text = L"X";
			this->label3->Click += gcnew System::EventHandler(this, &DepositForm::label3_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->fileToolStripMenuItem,
					this->aboutToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(700, 27);
			this->menuStrip1->TabIndex = 10;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->mainMenuToolStripMenuItem,
					this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->fileToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ButtonFace;
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
			this->mainMenuToolStripMenuItem->Click += gcnew System::EventHandler(this, &DepositForm::mainMenuToolStripMenuItem_Click);
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
			this->aboutToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->aboutToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->aboutToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(72, 23);
			this->aboutToolStripMenuItem->Text = L"About";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->panel1->Controls->Add(this->label2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 27);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(700, 106);
			this->panel1->TabIndex = 38;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(255, 28);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(186, 49);
			this->label2->TabIndex = 1;
			this->label2->Text = L"DEPOSIT";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(6, 437);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(111, 19);
			this->label6->TabIndex = 48;
			this->label6->Text = L"Номер картки";
			// 
			// jMetroTextBox4
			// 
			this->jMetroTextBox4->BackColor = System::Drawing::Color::Transparent;
			this->jMetroTextBox4->BorderColor = System::Drawing::Color::Empty;
			this->jMetroTextBox4->BorderRadius = 10;
			this->jMetroTextBox4->Enabled = false;
			this->jMetroTextBox4->FillColor = System::Drawing::Color::White;
			this->jMetroTextBox4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->jMetroTextBox4->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->jMetroTextBox4->ForeColors = System::Drawing::Color::Gray;
			this->jMetroTextBox4->IsPassword = false;
			this->jMetroTextBox4->LineThickness = 2;
			this->jMetroTextBox4->Location = System::Drawing::Point(152, 419);
			this->jMetroTextBox4->Margin = System::Windows::Forms::Padding(4);
			this->jMetroTextBox4->MaxLength = 32767;
			this->jMetroTextBox4->MouseOnHover = System::Drawing::Color::DarkGray;
			this->jMetroTextBox4->Name = L"jMetroTextBox4";
			this->jMetroTextBox4->OnCursor = System::Windows::Forms::Cursors::IBeam;
			this->jMetroTextBox4->OnFocusColor = System::Drawing::Color::DarkGray;
			this->jMetroTextBox4->OnFocusFontColor = System::Drawing::Color::Gray;
			this->jMetroTextBox4->ReadOnly = false;
			this->jMetroTextBox4->Size = System::Drawing::Size(188, 51);
			this->jMetroTextBox4->TabIndex = 47;
			this->jMetroTextBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->jMetroTextBox4->TextName = L"**** 5565";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(6, 256);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(221, 19);
			this->label4->TabIndex = 46;
			this->label4->Text = L"Максимальна сума депозиту";
			// 
			// SummNumber
			// 
			this->SummNumber->BackColor = System::Drawing::Color::Transparent;
			this->SummNumber->BorderColor = System::Drawing::SystemColors::Highlight;
			this->SummNumber->BorderRadius = 20;
			this->SummNumber->FillColor = System::Drawing::Color::White;
			this->SummNumber->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->SummNumber->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->SummNumber->ForeColors = System::Drawing::Color::Gray;
			this->SummNumber->IsPassword = false;
			this->SummNumber->LineThickness = 2;
			this->SummNumber->Location = System::Drawing::Point(421, 385);
			this->SummNumber->Margin = System::Windows::Forms::Padding(4);
			this->SummNumber->MaxLength = 32767;
			this->SummNumber->MouseOnHover = System::Drawing::Color::DarkGray;
			this->SummNumber->Name = L"SummNumber";
			this->SummNumber->OnCursor = System::Windows::Forms::Cursors::IBeam;
			this->SummNumber->OnFocusColor = System::Drawing::Color::DarkGray;
			this->SummNumber->OnFocusFontColor = System::Drawing::Color::Gray;
			this->SummNumber->ReadOnly = false;
			this->SummNumber->Size = System::Drawing::Size(218, 51);
			this->SummNumber->TabIndex = 45;
			this->SummNumber->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->SummNumber->TextName = L"1000";
			// 
			// TermNumber
			// 
			this->TermNumber->BackColor = System::Drawing::Color::Transparent;
			this->TermNumber->BorderColor = System::Drawing::SystemColors::Highlight;
			this->TermNumber->BorderRadius = 20;
			this->TermNumber->Enabled = false;
			this->TermNumber->FillColor = System::Drawing::SystemColors::Window;
			this->TermNumber->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->TermNumber->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->TermNumber->ForeColors = System::Drawing::Color::Gray;
			this->TermNumber->IsPassword = false;
			this->TermNumber->LineThickness = 2;
			this->TermNumber->Location = System::Drawing::Point(421, 241);
			this->TermNumber->Margin = System::Windows::Forms::Padding(4);
			this->TermNumber->MaxLength = 32767;
			this->TermNumber->MouseOnHover = System::Drawing::Color::DarkGray;
			this->TermNumber->Name = L"TermNumber";
			this->TermNumber->OnCursor = System::Windows::Forms::Cursors::IBeam;
			this->TermNumber->OnFocusColor = System::Drawing::Color::DarkGray;
			this->TermNumber->OnFocusFontColor = System::Drawing::Color::Gray;
			this->TermNumber->ReadOnly = false;
			this->TermNumber->Size = System::Drawing::Size(218, 51);
			this->TermNumber->TabIndex = 44;
			this->TermNumber->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->TermNumber->TextName = L"1";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(382, 360);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(300, 21);
			this->label1->TabIndex = 43;
			this->label1->Text = L"Введіть суму депозиту (кратну 100)";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->panel2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->panel2->Location = System::Drawing::Point(349, 150);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(5, 414);
			this->panel2->TabIndex = 49;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(6, 317);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(200, 19);
			this->label5->TabIndex = 51;
			this->label5->Text = L"Мінімальна сума депозиту";
			// 
			// jMetroTextBox3
			// 
			this->jMetroTextBox3->BackColor = System::Drawing::Color::Transparent;
			this->jMetroTextBox3->BorderColor = System::Drawing::Color::Empty;
			this->jMetroTextBox3->BorderRadius = 10;
			this->jMetroTextBox3->Enabled = false;
			this->jMetroTextBox3->FillColor = System::Drawing::Color::White;
			this->jMetroTextBox3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->jMetroTextBox3->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->jMetroTextBox3->ForeColors = System::Drawing::Color::Gray;
			this->jMetroTextBox3->IsPassword = false;
			this->jMetroTextBox3->LineThickness = 2;
			this->jMetroTextBox3->Location = System::Drawing::Point(228, 300);
			this->jMetroTextBox3->Margin = System::Windows::Forms::Padding(4);
			this->jMetroTextBox3->MaxLength = 32767;
			this->jMetroTextBox3->MouseOnHover = System::Drawing::Color::DarkGray;
			this->jMetroTextBox3->Name = L"jMetroTextBox3";
			this->jMetroTextBox3->OnCursor = System::Windows::Forms::Cursors::IBeam;
			this->jMetroTextBox3->OnFocusColor = System::Drawing::Color::DarkGray;
			this->jMetroTextBox3->OnFocusFontColor = System::Drawing::Color::Gray;
			this->jMetroTextBox3->ReadOnly = false;
			this->jMetroTextBox3->Size = System::Drawing::Size(112, 51);
			this->jMetroTextBox3->TabIndex = 50;
			this->jMetroTextBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->jMetroTextBox3->TextName = L"1000";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(6, 377);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(139, 19);
			this->label7->TabIndex = 53;
			this->label7->Text = L"Процентна ставка";
			// 
			// jMetroTextBox5
			// 
			this->jMetroTextBox5->BackColor = System::Drawing::Color::Transparent;
			this->jMetroTextBox5->BorderColor = System::Drawing::Color::Empty;
			this->jMetroTextBox5->BorderRadius = 10;
			this->jMetroTextBox5->Enabled = false;
			this->jMetroTextBox5->FillColor = System::Drawing::Color::White;
			this->jMetroTextBox5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->jMetroTextBox5->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->jMetroTextBox5->ForeColors = System::Drawing::Color::Gray;
			this->jMetroTextBox5->IsPassword = false;
			this->jMetroTextBox5->LineThickness = 2;
			this->jMetroTextBox5->Location = System::Drawing::Point(152, 360);
			this->jMetroTextBox5->Margin = System::Windows::Forms::Padding(4);
			this->jMetroTextBox5->MaxLength = 32767;
			this->jMetroTextBox5->MouseOnHover = System::Drawing::Color::DarkGray;
			this->jMetroTextBox5->Name = L"jMetroTextBox5";
			this->jMetroTextBox5->OnCursor = System::Windows::Forms::Cursors::IBeam;
			this->jMetroTextBox5->OnFocusColor = System::Drawing::Color::DarkGray;
			this->jMetroTextBox5->OnFocusFontColor = System::Drawing::Color::Gray;
			this->jMetroTextBox5->ReadOnly = false;
			this->jMetroTextBox5->Size = System::Drawing::Size(188, 51);
			this->jMetroTextBox5->TabIndex = 52;
			this->jMetroTextBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->jMetroTextBox5->TextName = L"Name";
			// 
			// jThinButton7
			// 
			this->jThinButton7->BackColor = System::Drawing::Color::Transparent;
			this->jThinButton7->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->jThinButton7->BorderColor = System::Drawing::Color::White;
			this->jThinButton7->BorderRadius = 23;
			this->jThinButton7->ButtonText = L"ОФОРМИТИ ДЕПОЗИТ";
			this->jThinButton7->Font = (gcnew System::Drawing::Font(L"Verdana", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->jThinButton7->Font_Size = (gcnew System::Drawing::Font(L"Verdana", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->jThinButton7->ForeColors = System::Drawing::Color::Silver;
			this->jThinButton7->HoverBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->jThinButton7->HoverBorder = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->jThinButton7->HoverFontColor = System::Drawing::Color::White;
			this->jThinButton7->LineThickness = 2;
			this->jThinButton7->Location = System::Drawing::Point(375, 502);
			this->jThinButton7->Margin = System::Windows::Forms::Padding(4);
			this->jThinButton7->Name = L"jThinButton7";
			this->jThinButton7->Size = System::Drawing::Size(304, 52);
			this->jThinButton7->TabIndex = 54;
			this->jThinButton7->Click += gcnew System::EventHandler(this, &DepositForm::jThinButton7_Click);
			// 
			// jMetroTextBox6
			// 
			this->jMetroTextBox6->BackColor = System::Drawing::Color::Transparent;
			this->jMetroTextBox6->BorderColor = System::Drawing::Color::Empty;
			this->jMetroTextBox6->BorderRadius = 10;
			this->jMetroTextBox6->Enabled = false;
			this->jMetroTextBox6->FillColor = System::Drawing::SystemColors::Window;
			this->jMetroTextBox6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->jMetroTextBox6->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->jMetroTextBox6->ForeColors = System::Drawing::Color::Gray;
			this->jMetroTextBox6->IsPassword = false;
			this->jMetroTextBox6->LineThickness = 2;
			this->jMetroTextBox6->Location = System::Drawing::Point(228, 241);
			this->jMetroTextBox6->Margin = System::Windows::Forms::Padding(4);
			this->jMetroTextBox6->MaxLength = 32767;
			this->jMetroTextBox6->MouseOnHover = System::Drawing::Color::DarkGray;
			this->jMetroTextBox6->Name = L"jMetroTextBox6";
			this->jMetroTextBox6->OnCursor = System::Windows::Forms::Cursors::IBeam;
			this->jMetroTextBox6->OnFocusColor = System::Drawing::Color::DarkGray;
			this->jMetroTextBox6->OnFocusFontColor = System::Drawing::Color::Gray;
			this->jMetroTextBox6->ReadOnly = false;
			this->jMetroTextBox6->Size = System::Drawing::Size(112, 51);
			this->jMetroTextBox6->TabIndex = 56;
			this->jMetroTextBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->jMetroTextBox6->TextName = L"20000";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(413, 216);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(238, 21);
			this->label8->TabIndex = 55;
			this->label8->Text = L"Виберіть строк (від 1 до 12)";
			// 
			// jDragControl1
			// 
			this->jDragControl1->GetForm = this;
			this->jDragControl1->TargetControl = this->menuStrip1;
			// 
			// PlusTerm
			// 
			this->PlusTerm->BackColor = System::Drawing::Color::Transparent;
			this->PlusTerm->BackgroundColor = System::Drawing::Color::White;
			this->PlusTerm->BorderColor = System::Drawing::SystemColors::Highlight;
			this->PlusTerm->BorderRadius = 17;
			this->PlusTerm->ButtonText = L"+";
			this->PlusTerm->Font = (gcnew System::Drawing::Font(L"Verdana", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PlusTerm->Font_Size = (gcnew System::Drawing::Font(L"Verdana", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PlusTerm->ForeColors = System::Drawing::SystemColors::Highlight;
			this->PlusTerm->HoverBackground = System::Drawing::Color::White;
			this->PlusTerm->HoverBorder = System::Drawing::Color::Empty;
			this->PlusTerm->HoverFontColor = System::Drawing::SystemColors::Highlight;
			this->PlusTerm->LineThickness = 2;
			this->PlusTerm->Location = System::Drawing::Point(641, 249);
			this->PlusTerm->Margin = System::Windows::Forms::Padding(4);
			this->PlusTerm->Name = L"PlusTerm";
			this->PlusTerm->Size = System::Drawing::Size(40, 38);
			this->PlusTerm->TabIndex = 57;
			this->PlusTerm->Click += gcnew System::EventHandler(this, &DepositForm::PlusTerm_Click);
			// 
			// MinusTerm
			// 
			this->MinusTerm->BackColor = System::Drawing::Color::Transparent;
			this->MinusTerm->BackgroundColor = System::Drawing::Color::White;
			this->MinusTerm->BorderColor = System::Drawing::SystemColors::Highlight;
			this->MinusTerm->BorderRadius = 17;
			this->MinusTerm->ButtonText = L"-";
			this->MinusTerm->Font = (gcnew System::Drawing::Font(L"Verdana", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MinusTerm->Font_Size = (gcnew System::Drawing::Font(L"Verdana", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MinusTerm->ForeColors = System::Drawing::SystemColors::Highlight;
			this->MinusTerm->HoverBackground = System::Drawing::Color::White;
			this->MinusTerm->HoverBorder = System::Drawing::Color::Empty;
			this->MinusTerm->HoverFontColor = System::Drawing::SystemColors::Highlight;
			this->MinusTerm->LineThickness = 2;
			this->MinusTerm->Location = System::Drawing::Point(379, 249);
			this->MinusTerm->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->MinusTerm->Name = L"MinusTerm";
			this->MinusTerm->Size = System::Drawing::Size(40, 37);
			this->MinusTerm->TabIndex = 58;
			this->MinusTerm->Click += gcnew System::EventHandler(this, &DepositForm::MinusTerm_Click);
			// 
			// DepositForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(700, 584);
			this->Controls->Add(this->MinusTerm);
			this->Controls->Add(this->PlusTerm);
			this->Controls->Add(this->jMetroTextBox6);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->jThinButton7);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->jMetroTextBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->jMetroTextBox3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->jMetroTextBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->SummNumber);
			this->Controls->Add(this->TermNumber);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"DepositForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"DepositForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
		exit(0);
	}
	private: System::Void mainMenuToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void jThinButton7_Click(System::Object^ sender, System::EventArgs^ e) {
		int summ1 = Convert::ToInt32(SummNumber->TextName);
		if (summ1 < 100 || summ1> 20000 || summ1 % 100 != 0)
		{
			MessageBox::Show("Please input correct number");
			summ1 = 1000;
			SummNumber->TextName = Convert::ToString(summ1);

		}
		//MessageBox();
		this->Hide();
		EndForm^ _EndForm5 = gcnew EndForm();
		_EndForm5->ShowDialog();
	}

	private: System::Void MinusTerm_Click(System::Object^ sender, System::EventArgs^ e) {
		if (TermNumber->TextName != "1")
		{
			int temp1 = Convert::ToInt32(TermNumber->TextName);
			temp1--;
			TermNumber->TextName = Convert::ToString(temp1);
		}
	}
	private: System::Void PlusTerm_Click(System::Object^ sender, System::EventArgs^ e) {
		if (TermNumber->TextName != "12")
		{
			int temp2 = Convert::ToInt32(TermNumber->TextName);
			temp2++;
			TermNumber->TextName = Convert::ToString(temp2);
		}
	}
	};
}
