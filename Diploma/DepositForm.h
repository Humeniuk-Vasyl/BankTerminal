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
			this->ClientCardNumber = (gcnew ::JMetroTextBox::JMetroTextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->DepositSumm = (gcnew ::JMetroTextBox::JMetroTextBox());
			this->TermNumber = (gcnew ::JMetroTextBox::JMetroTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->DepositMinSumm = (gcnew ::JMetroTextBox::JMetroTextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->PercentageRate = (gcnew ::JMetroTextBox::JMetroTextBox());
			this->DepositButton = (gcnew ::JThinButton::JThinButton());
			this->DepositMaxSumm = (gcnew ::JMetroTextBox::JMetroTextBox());
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
			this->label3->MouseLeave += gcnew System::EventHandler(this, &DepositForm::label3_MouseLeave);
			this->label3->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &DepositForm::label3_MouseMove);
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
			// ClientCardNumber
			// 
			this->ClientCardNumber->BackColor = System::Drawing::Color::Transparent;
			this->ClientCardNumber->BorderColor = System::Drawing::Color::Empty;
			this->ClientCardNumber->BorderRadius = 10;
			this->ClientCardNumber->Enabled = false;
			this->ClientCardNumber->FillColor = System::Drawing::Color::White;
			this->ClientCardNumber->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->ClientCardNumber->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->ClientCardNumber->ForeColors = System::Drawing::Color::Gray;
			this->ClientCardNumber->IsPassword = false;
			this->ClientCardNumber->LineThickness = 2;
			this->ClientCardNumber->Location = System::Drawing::Point(152, 419);
			this->ClientCardNumber->Margin = System::Windows::Forms::Padding(4);
			this->ClientCardNumber->MaxLength = 32767;
			this->ClientCardNumber->MouseOnHover = System::Drawing::Color::DarkGray;
			this->ClientCardNumber->Name = L"ClientCardNumber";
			this->ClientCardNumber->OnCursor = System::Windows::Forms::Cursors::IBeam;
			this->ClientCardNumber->OnFocusColor = System::Drawing::Color::DarkGray;
			this->ClientCardNumber->OnFocusFontColor = System::Drawing::Color::Gray;
			this->ClientCardNumber->ReadOnly = false;
			this->ClientCardNumber->Size = System::Drawing::Size(188, 51);
			this->ClientCardNumber->TabIndex = 47;
			this->ClientCardNumber->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->ClientCardNumber->TextName = L"**** 5565";
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
			// DepositSumm
			// 
			this->DepositSumm->BackColor = System::Drawing::Color::Transparent;
			this->DepositSumm->BorderColor = System::Drawing::SystemColors::Highlight;
			this->DepositSumm->BorderRadius = 20;
			this->DepositSumm->FillColor = System::Drawing::Color::White;
			this->DepositSumm->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->DepositSumm->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->DepositSumm->ForeColors = System::Drawing::Color::Gray;
			this->DepositSumm->IsPassword = false;
			this->DepositSumm->LineThickness = 2;
			this->DepositSumm->Location = System::Drawing::Point(421, 385);
			this->DepositSumm->Margin = System::Windows::Forms::Padding(4);
			this->DepositSumm->MaxLength = 32767;
			this->DepositSumm->MouseOnHover = System::Drawing::Color::DarkGray;
			this->DepositSumm->Name = L"DepositSumm";
			this->DepositSumm->OnCursor = System::Windows::Forms::Cursors::IBeam;
			this->DepositSumm->OnFocusColor = System::Drawing::Color::DarkGray;
			this->DepositSumm->OnFocusFontColor = System::Drawing::Color::Gray;
			this->DepositSumm->ReadOnly = false;
			this->DepositSumm->Size = System::Drawing::Size(218, 51);
			this->DepositSumm->TabIndex = 45;
			this->DepositSumm->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->DepositSumm->TextName = L"1000";
			// 
			// TermNumber
			// 
			this->TermNumber->BackColor = System::Drawing::Color::Transparent;
			this->TermNumber->BorderColor = System::Drawing::SystemColors::Highlight;
			this->TermNumber->BorderRadius = 20;
			this->TermNumber->Enabled = false;
			this->TermNumber->FillColor = System::Drawing::Color::White;
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
			// DepositMinSumm
			// 
			this->DepositMinSumm->BackColor = System::Drawing::Color::Transparent;
			this->DepositMinSumm->BorderColor = System::Drawing::Color::Empty;
			this->DepositMinSumm->BorderRadius = 10;
			this->DepositMinSumm->Enabled = false;
			this->DepositMinSumm->FillColor = System::Drawing::Color::White;
			this->DepositMinSumm->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->DepositMinSumm->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->DepositMinSumm->ForeColors = System::Drawing::Color::Gray;
			this->DepositMinSumm->IsPassword = false;
			this->DepositMinSumm->LineThickness = 2;
			this->DepositMinSumm->Location = System::Drawing::Point(228, 300);
			this->DepositMinSumm->Margin = System::Windows::Forms::Padding(4);
			this->DepositMinSumm->MaxLength = 32767;
			this->DepositMinSumm->MouseOnHover = System::Drawing::Color::DarkGray;
			this->DepositMinSumm->Name = L"DepositMinSumm";
			this->DepositMinSumm->OnCursor = System::Windows::Forms::Cursors::IBeam;
			this->DepositMinSumm->OnFocusColor = System::Drawing::Color::DarkGray;
			this->DepositMinSumm->OnFocusFontColor = System::Drawing::Color::Gray;
			this->DepositMinSumm->ReadOnly = false;
			this->DepositMinSumm->Size = System::Drawing::Size(112, 51);
			this->DepositMinSumm->TabIndex = 50;
			this->DepositMinSumm->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->DepositMinSumm->TextName = L"1000";
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
			// PercentageRate
			// 
			this->PercentageRate->BackColor = System::Drawing::Color::Transparent;
			this->PercentageRate->BorderColor = System::Drawing::Color::Empty;
			this->PercentageRate->BorderRadius = 10;
			this->PercentageRate->Enabled = false;
			this->PercentageRate->FillColor = System::Drawing::Color::White;
			this->PercentageRate->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->PercentageRate->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->PercentageRate->ForeColors = System::Drawing::Color::Gray;
			this->PercentageRate->IsPassword = false;
			this->PercentageRate->LineThickness = 2;
			this->PercentageRate->Location = System::Drawing::Point(152, 360);
			this->PercentageRate->Margin = System::Windows::Forms::Padding(4);
			this->PercentageRate->MaxLength = 32767;
			this->PercentageRate->MouseOnHover = System::Drawing::Color::DarkGray;
			this->PercentageRate->Name = L"PercentageRate";
			this->PercentageRate->OnCursor = System::Windows::Forms::Cursors::IBeam;
			this->PercentageRate->OnFocusColor = System::Drawing::Color::DarkGray;
			this->PercentageRate->OnFocusFontColor = System::Drawing::Color::Gray;
			this->PercentageRate->ReadOnly = false;
			this->PercentageRate->Size = System::Drawing::Size(188, 51);
			this->PercentageRate->TabIndex = 52;
			this->PercentageRate->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->PercentageRate->TextName = L"Name";
			// 
			// DepositButton
			// 
			this->DepositButton->BackColor = System::Drawing::Color::Transparent;
			this->DepositButton->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->DepositButton->BorderColor = System::Drawing::Color::White;
			this->DepositButton->BorderRadius = 23;
			this->DepositButton->ButtonText = L"ОФОРМИТИ ДЕПОЗИТ";
			this->DepositButton->Font = (gcnew System::Drawing::Font(L"Verdana", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DepositButton->Font_Size = (gcnew System::Drawing::Font(L"Verdana", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DepositButton->ForeColors = System::Drawing::Color::Silver;
			this->DepositButton->HoverBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->DepositButton->HoverBorder = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->DepositButton->HoverFontColor = System::Drawing::Color::White;
			this->DepositButton->LineThickness = 2;
			this->DepositButton->Location = System::Drawing::Point(375, 502);
			this->DepositButton->Margin = System::Windows::Forms::Padding(4);
			this->DepositButton->Name = L"DepositButton";
			this->DepositButton->Size = System::Drawing::Size(304, 52);
			this->DepositButton->TabIndex = 54;
			this->DepositButton->Click += gcnew System::EventHandler(this, &DepositForm::DepositButton_Click);
			// 
			// DepositMaxSumm
			// 
			this->DepositMaxSumm->BackColor = System::Drawing::Color::Transparent;
			this->DepositMaxSumm->BorderColor = System::Drawing::Color::Empty;
			this->DepositMaxSumm->BorderRadius = 10;
			this->DepositMaxSumm->Enabled = false;
			this->DepositMaxSumm->FillColor = System::Drawing::Color::White;
			this->DepositMaxSumm->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->DepositMaxSumm->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->DepositMaxSumm->ForeColors = System::Drawing::Color::Gray;
			this->DepositMaxSumm->IsPassword = false;
			this->DepositMaxSumm->LineThickness = 2;
			this->DepositMaxSumm->Location = System::Drawing::Point(228, 241);
			this->DepositMaxSumm->Margin = System::Windows::Forms::Padding(4);
			this->DepositMaxSumm->MaxLength = 32767;
			this->DepositMaxSumm->MouseOnHover = System::Drawing::Color::DarkGray;
			this->DepositMaxSumm->Name = L"DepositMaxSumm";
			this->DepositMaxSumm->OnCursor = System::Windows::Forms::Cursors::IBeam;
			this->DepositMaxSumm->OnFocusColor = System::Drawing::Color::DarkGray;
			this->DepositMaxSumm->OnFocusFontColor = System::Drawing::Color::Gray;
			this->DepositMaxSumm->ReadOnly = false;
			this->DepositMaxSumm->Size = System::Drawing::Size(112, 51);
			this->DepositMaxSumm->TabIndex = 56;
			this->DepositMaxSumm->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->DepositMaxSumm->TextName = L"20000";
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
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(700, 584);
			this->Controls->Add(this->MinusTerm);
			this->Controls->Add(this->PlusTerm);
			this->Controls->Add(this->DepositMaxSumm);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->DepositButton);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->PercentageRate);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->DepositMinSumm);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->ClientCardNumber);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->DepositSumm);
			this->Controls->Add(this->TermNumber);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"DepositForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"DepositForm";
			this->Load += gcnew System::EventHandler(this, &DepositForm::DepositForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		ParametersClass^ n = gcnew ParametersClass();
		DBFicsation f5;
	private: System::Void DepositForm_Load(System::Object^ sender, System::EventArgs^ e) {
		ClientCardNumber->TextName = n->CardNumber;

	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
		exit(0);
	}
	private: System::Void label3_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		this->label3->ForeColor = System::Drawing::Color::Tomato;
	}
	private: System::Void label3_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->label3->ForeColor = System::Drawing::Color::Gainsboro;
	}
	private: System::Void mainMenuToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void MinusTerm_Click(System::Object^ sender, System::EventArgs^ e) {
		if (TermNumber->TextName != "1") {
			int temp1 = Convert::ToInt32(TermNumber->TextName);
			temp1--;
			TermNumber->TextName = Convert::ToString(temp1);
		}
		int TermStat = Convert::ToInt32(TermNumber->TextName);
		if (TermStat == 1) {
			PercentageRate->TextName = "10 % ";
		}
		if (TermStat == 2) {
			PercentageRate->TextName = "10,5 % ";
		}
		if (TermStat >= 3 && TermStat <= 5) {
			PercentageRate->TextName = "11,5 % ";
		}
		if (TermStat >= 6 && TermStat <= 8) {
			PercentageRate->TextName = "12 % ";
		}
		if (TermStat >= 9 && TermStat <= 10) {
			PercentageRate->TextName = "12,5 % ";
		}
		if (TermStat == 12) {
			PercentageRate->TextName = "13 % ";
		}

	}
	private: System::Void PlusTerm_Click(System::Object^ sender, System::EventArgs^ e) {
		if (TermNumber->TextName != "12") {
			int temp2 = Convert::ToInt32(TermNumber->TextName);
			temp2++;
			TermNumber->TextName = Convert::ToString(temp2);
		}
		int TermStat = Convert::ToInt32(TermNumber->TextName);
		if (TermStat == 1) {
			PercentageRate->TextName = "10 % ";
		}
		if (TermStat == 2) {
			PercentageRate->TextName = "10,5 % ";
		}
		if (TermStat >= 3 && TermStat <= 5) {
			PercentageRate->TextName = "11,5 % ";
		}
		if (TermStat >= 6 && TermStat <= 8) {
			PercentageRate->TextName = "12 % ";
		}
		if (TermStat >= 9 && TermStat <= 10) {
			PercentageRate->TextName = "12,5 % ";
		}
		if (TermStat == 12) {
			PercentageRate->TextName = "13 % ";
		}
	}
	private: System::Void DepositButton_Click(System::Object^ sender, System::EventArgs^ e) {
		int SummTxt;
		try
		{
			SummTxt = Convert::ToInt32(DepositSumm->TextName);
		}
		catch (const System::FormatException^ ex) {
			MessageBox::Show("Incorect format!");
		}
		if (DepositSumm->TextName == "") {
			MessageBox::Show("Summ can`t be empty");
		}
		if (DepositSumm->TextName != "") {

			SummTxt = Convert::ToInt32(DepositSumm->TextName);
		}
		if (SummTxt > Convert::ToInt32(n->Balance))
		{
			MessageBox::Show("Not enought money on balance");
		}
		if (SummTxt < 1000 || SummTxt > 20000 || SummTxt % 100 != 0) {
			MessageBox::Show("Input summ between 1000 and 20000 and multiple of 100");
		}
		else {
			int summ1 = Convert::ToInt32(DepositSumm->TextName);
			//MessageBox();
			f5.UpdateBalance(n, -summ1);
			f5.UpdateDeposit(n, summ1);
			this->Hide();
			EndForm^ _EndForm5 = gcnew EndForm();
			_EndForm5->ShowDialog();
		}
	}

	};
}
