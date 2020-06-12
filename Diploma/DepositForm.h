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
	private: ::JMetroTextBox::JMetroTextBox^ jMetroTextBox2;
	private: ::JMetroTextBox::JMetroTextBox^ jMetroTextBox1;
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
	private: ::JThinButton::JThinButton^ jThinButton2;
	private: ::JThinButton::JThinButton^ jThinButton1;
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
			this->jMetroTextBox2 = (gcnew ::JMetroTextBox::JMetroTextBox());
			this->jMetroTextBox1 = (gcnew ::JMetroTextBox::JMetroTextBox());
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
			this->jThinButton1 = (gcnew ::JThinButton::JThinButton());
			this->jThinButton2 = (gcnew ::JThinButton::JThinButton());
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
			// jMetroTextBox2
			// 
			this->jMetroTextBox2->BackColor = System::Drawing::Color::Transparent;
			this->jMetroTextBox2->BorderColor = System::Drawing::Color::Empty;
			this->jMetroTextBox2->BorderRadius = 20;
			this->jMetroTextBox2->FillColor = System::Drawing::Color::White;
			this->jMetroTextBox2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->jMetroTextBox2->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->jMetroTextBox2->ForeColors = System::Drawing::Color::Gray;
			this->jMetroTextBox2->IsPassword = false;
			this->jMetroTextBox2->LineThickness = 2;
			this->jMetroTextBox2->Location = System::Drawing::Point(421, 385);
			this->jMetroTextBox2->Margin = System::Windows::Forms::Padding(4);
			this->jMetroTextBox2->MaxLength = 32767;
			this->jMetroTextBox2->MouseOnHover = System::Drawing::Color::DarkGray;
			this->jMetroTextBox2->Name = L"jMetroTextBox2";
			this->jMetroTextBox2->OnCursor = System::Windows::Forms::Cursors::IBeam;
			this->jMetroTextBox2->OnFocusColor = System::Drawing::Color::DarkGray;
			this->jMetroTextBox2->OnFocusFontColor = System::Drawing::Color::Gray;
			this->jMetroTextBox2->ReadOnly = false;
			this->jMetroTextBox2->Size = System::Drawing::Size(218, 51);
			this->jMetroTextBox2->TabIndex = 45;
			this->jMetroTextBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->jMetroTextBox2->TextName = L"1000";
			// 
			// jMetroTextBox1
			// 
			this->jMetroTextBox1->BackColor = System::Drawing::Color::Transparent;
			this->jMetroTextBox1->BorderColor = System::Drawing::Color::Empty;
			this->jMetroTextBox1->BorderRadius = 20;
			this->jMetroTextBox1->Enabled = false;
			this->jMetroTextBox1->FillColor = System::Drawing::SystemColors::Window;
			this->jMetroTextBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->jMetroTextBox1->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->jMetroTextBox1->ForeColors = System::Drawing::Color::Gray;
			this->jMetroTextBox1->IsPassword = false;
			this->jMetroTextBox1->LineThickness = 2;
			this->jMetroTextBox1->Location = System::Drawing::Point(421, 241);
			this->jMetroTextBox1->Margin = System::Windows::Forms::Padding(4);
			this->jMetroTextBox1->MaxLength = 32767;
			this->jMetroTextBox1->MouseOnHover = System::Drawing::Color::DarkGray;
			this->jMetroTextBox1->Name = L"jMetroTextBox1";
			this->jMetroTextBox1->OnCursor = System::Windows::Forms::Cursors::IBeam;
			this->jMetroTextBox1->OnFocusColor = System::Drawing::Color::DarkGray;
			this->jMetroTextBox1->OnFocusFontColor = System::Drawing::Color::Gray;
			this->jMetroTextBox1->ReadOnly = false;
			this->jMetroTextBox1->Size = System::Drawing::Size(218, 51);
			this->jMetroTextBox1->TabIndex = 44;
			this->jMetroTextBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->jMetroTextBox1->TextName = L"1";
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
			// jThinButton1
			// 
			this->jThinButton1->BackColor = System::Drawing::Color::Transparent;
			this->jThinButton1->BackgroundColor = System::Drawing::Color::White;
			this->jThinButton1->BorderColor = System::Drawing::SystemColors::Highlight;
			this->jThinButton1->BorderRadius = 17;
			this->jThinButton1->ButtonText = L"+";
			this->jThinButton1->Font = (gcnew System::Drawing::Font(L"Verdana", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->jThinButton1->Font_Size = (gcnew System::Drawing::Font(L"Verdana", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->jThinButton1->ForeColors = System::Drawing::SystemColors::Highlight;
			this->jThinButton1->HoverBackground = System::Drawing::Color::White;
			this->jThinButton1->HoverBorder = System::Drawing::Color::Empty;
			this->jThinButton1->HoverFontColor = System::Drawing::SystemColors::Highlight;
			this->jThinButton1->LineThickness = 2;
			this->jThinButton1->Location = System::Drawing::Point(641, 249);
			this->jThinButton1->Margin = System::Windows::Forms::Padding(4);
			this->jThinButton1->Name = L"jThinButton1";
			this->jThinButton1->Size = System::Drawing::Size(40, 38);
			this->jThinButton1->TabIndex = 57;
			// 
			// jThinButton2
			// 
			this->jThinButton2->BackColor = System::Drawing::Color::Transparent;
			this->jThinButton2->BackgroundColor = System::Drawing::Color::White;
			this->jThinButton2->BorderColor = System::Drawing::SystemColors::Highlight;
			this->jThinButton2->BorderRadius = 17;
			this->jThinButton2->ButtonText = L"-";
			this->jThinButton2->Font = (gcnew System::Drawing::Font(L"Verdana", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->jThinButton2->Font_Size = (gcnew System::Drawing::Font(L"Verdana", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->jThinButton2->ForeColors = System::Drawing::SystemColors::Highlight;
			this->jThinButton2->HoverBackground = System::Drawing::Color::White;
			this->jThinButton2->HoverBorder = System::Drawing::Color::Empty;
			this->jThinButton2->HoverFontColor = System::Drawing::SystemColors::Highlight;
			this->jThinButton2->LineThickness = 2;
			this->jThinButton2->Location = System::Drawing::Point(377, 249);
			this->jThinButton2->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->jThinButton2->Name = L"jThinButton2";
			this->jThinButton2->Size = System::Drawing::Size(40, 38);
			this->jThinButton2->TabIndex = 58;
			// 
			// DepositForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(700, 584);
			this->Controls->Add(this->jThinButton2);
			this->Controls->Add(this->jThinButton1);
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
			this->Controls->Add(this->jMetroTextBox2);
			this->Controls->Add(this->jMetroTextBox1);
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
	
		//MessageBox();
		this->Hide();
		EndForm^ _EndForm5 = gcnew EndForm();
		_EndForm5->ShowDialog();
	}
};
}
