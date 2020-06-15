#pragma once
#include <stdlib.h>
#include "ParametersClass.h"
#include "DBFicsation.h"
#include "EndForm.h"
namespace Diploma {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Card_InForm
	/// </summary>
	public ref class Card_InForm : public System::Windows::Forms::Form
	{
	public:
		Card_InForm(void)
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
		~Card_InForm()
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
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel2;
	private: ::JThinButton::JThinButton^ Button50;
	private: ::JThinButton::JThinButton^ Button100;
	private: ::JThinButton::JThinButton^ Button200;
	private: ::JThinButton::JThinButton^ Button500;
	private: ::JThinButton::JThinButton^ Button1000;
	private: ::JThinButton::JThinButton^ Button2000;







	private: ::JThinButton::JThinButton^ ReplanishButton;

	private: System::Windows::Forms::Label^ label1;
	private: ::JMetroTextBox::JMetroTextBox^ SummOfReplanishment;

	private: ::JMetroTextBox::JMetroTextBox^ MaxSummTxt;

	private: ::JMetroTextBox::JMetroTextBox^ UserNameTxt;
	private: ::JMetroTextBox::JMetroTextBox^ CardNumberTxt;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: ::JDragControl::JDragControl^ jDragControl1;
	private: System::Windows::Forms::Label^ label7;
	private: ::JMetroTextBox::JMetroTextBox^ CurrentBalanceTxt;
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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->Button50 = (gcnew ::JThinButton::JThinButton());
			this->Button100 = (gcnew ::JThinButton::JThinButton());
			this->Button200 = (gcnew ::JThinButton::JThinButton());
			this->Button500 = (gcnew ::JThinButton::JThinButton());
			this->Button1000 = (gcnew ::JThinButton::JThinButton());
			this->Button2000 = (gcnew ::JThinButton::JThinButton());
			this->ReplanishButton = (gcnew ::JThinButton::JThinButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SummOfReplanishment = (gcnew ::JMetroTextBox::JMetroTextBox());
			this->MaxSummTxt = (gcnew ::JMetroTextBox::JMetroTextBox());
			this->UserNameTxt = (gcnew ::JMetroTextBox::JMetroTextBox());
			this->CardNumberTxt = (gcnew ::JMetroTextBox::JMetroTextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->jDragControl1 = (gcnew ::JDragControl::JDragControl(this->components));
			this->CurrentBalanceTxt = (gcnew ::JMetroTextBox::JMetroTextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)), static_cast<System::Int32>(static_cast<System::Byte>(176)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->fileToolStripMenuItem,
					this->aboutToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(700, 27);
			this->menuStrip1->TabIndex = 6;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->mainMenuToolStripMenuItem,
					this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->fileToolStripMenuItem->ForeColor = System::Drawing::Color::DeepSkyBlue;
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
			this->aboutToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->aboutToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->aboutToolStripMenuItem->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(72, 23);
			this->aboutToolStripMenuItem->Text = L"About";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)), static_cast<System::Int32>(static_cast<System::Byte>(176)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->panel1->Controls->Add(this->label2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 27);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(700, 106);
			this->panel1->TabIndex = 10;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)), static_cast<System::Int32>(static_cast<System::Byte>(176)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label2->Location = System::Drawing::Point(187, 28);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(327, 47);
			this->label2->TabIndex = 1;
			this->label2->Text = L"REPLANISHMENT";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)), static_cast<System::Int32>(static_cast<System::Byte>(176)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->label3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label3->Location = System::Drawing::Point(670, -5);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(31, 32);
			this->label3->TabIndex = 11;
			this->label3->Text = L"X";
			this->label3->Click += gcnew System::EventHandler(this, &Card_InForm::label3_Click);
			this->label3->MouseLeave += gcnew System::EventHandler(this, &Card_InForm::label3_MouseLeave);
			this->label3->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Card_InForm::label3_MouseMove);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)), static_cast<System::Int32>(static_cast<System::Byte>(176)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->panel2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)), static_cast<System::Int32>(static_cast<System::Byte>(176)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->panel2->Location = System::Drawing::Point(349, 154);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(5, 414);
			this->panel2->TabIndex = 12;
			// 
			// Button50
			// 
			this->Button50->BackColor = System::Drawing::Color::Transparent;
			this->Button50->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)), static_cast<System::Int32>(static_cast<System::Byte>(176)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->Button50->BorderColor = System::Drawing::Color::White;
			this->Button50->BorderRadius = 15;
			this->Button50->ButtonText = L"50";
			this->Button50->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold));
			this->Button50->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold));
			this->Button50->ForeColors = System::Drawing::SystemColors::ControlLight;
			this->Button50->HoverBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->Button50->HoverBorder = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->Button50->HoverFontColor = System::Drawing::Color::White;
			this->Button50->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->Button50->LineThickness = 2;
			this->Button50->Location = System::Drawing::Point(375, 151);
			this->Button50->Margin = System::Windows::Forms::Padding(12, 12, 12, 12);
			this->Button50->Name = L"Button50";
			this->Button50->Size = System::Drawing::Size(150, 117);
			this->Button50->TabIndex = 23;
			// 
			// Button100
			// 
			this->Button100->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->Button100->BackColor = System::Drawing::Color::Transparent;
			this->Button100->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)), static_cast<System::Int32>(static_cast<System::Byte>(176)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->Button100->BorderColor = System::Drawing::Color::White;
			this->Button100->BorderRadius = 15;
			this->Button100->ButtonText = L"100";
			this->Button100->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold));
			this->Button100->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold));
			this->Button100->ForeColors = System::Drawing::SystemColors::ControlLight;
			this->Button100->HoverBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->Button100->HoverBorder = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->Button100->HoverFontColor = System::Drawing::Color::White;
			this->Button100->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->Button100->LineThickness = 2;
			this->Button100->Location = System::Drawing::Point(529, 151);
			this->Button100->Margin = System::Windows::Forms::Padding(12, 12, 12, 12);
			this->Button100->Name = L"Button100";
			this->Button100->Size = System::Drawing::Size(150, 117);
			this->Button100->TabIndex = 24;
			// 
			// Button200
			// 
			this->Button200->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->Button200->BackColor = System::Drawing::Color::Transparent;
			this->Button200->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)), static_cast<System::Int32>(static_cast<System::Byte>(176)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->Button200->BorderColor = System::Drawing::Color::White;
			this->Button200->BorderRadius = 15;
			this->Button200->ButtonText = L"200";
			this->Button200->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold));
			this->Button200->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold));
			this->Button200->ForeColors = System::Drawing::SystemColors::ControlLight;
			this->Button200->HoverBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->Button200->HoverBorder = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->Button200->HoverFontColor = System::Drawing::Color::White;
			this->Button200->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->Button200->LineThickness = 2;
			this->Button200->Location = System::Drawing::Point(375, 269);
			this->Button200->Margin = System::Windows::Forms::Padding(12, 12, 12, 12);
			this->Button200->Name = L"Button200";
			this->Button200->Size = System::Drawing::Size(150, 117);
			this->Button200->TabIndex = 25;
			// 
			// Button500
			// 
			this->Button500->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->Button500->BackColor = System::Drawing::Color::Transparent;
			this->Button500->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)), static_cast<System::Int32>(static_cast<System::Byte>(176)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->Button500->BorderColor = System::Drawing::Color::White;
			this->Button500->BorderRadius = 15;
			this->Button500->ButtonText = L"500";
			this->Button500->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold));
			this->Button500->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold));
			this->Button500->ForeColors = System::Drawing::SystemColors::ControlLight;
			this->Button500->HoverBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->Button500->HoverBorder = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->Button500->HoverFontColor = System::Drawing::Color::White;
			this->Button500->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->Button500->LineThickness = 2;
			this->Button500->Location = System::Drawing::Point(529, 269);
			this->Button500->Margin = System::Windows::Forms::Padding(12, 12, 12, 12);
			this->Button500->Name = L"Button500";
			this->Button500->Size = System::Drawing::Size(150, 117);
			this->Button500->TabIndex = 26;
			// 
			// Button1000
			// 
			this->Button1000->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->Button1000->BackColor = System::Drawing::Color::Transparent;
			this->Button1000->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)), static_cast<System::Int32>(static_cast<System::Byte>(176)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->Button1000->BorderColor = System::Drawing::Color::White;
			this->Button1000->BorderRadius = 15;
			this->Button1000->ButtonText = L"1000";
			this->Button1000->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold));
			this->Button1000->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold));
			this->Button1000->ForeColors = System::Drawing::SystemColors::ControlLight;
			this->Button1000->HoverBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->Button1000->HoverBorder = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->Button1000->HoverFontColor = System::Drawing::Color::White;
			this->Button1000->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->Button1000->LineThickness = 2;
			this->Button1000->Location = System::Drawing::Point(375, 386);
			this->Button1000->Margin = System::Windows::Forms::Padding(12, 12, 12, 12);
			this->Button1000->Name = L"Button1000";
			this->Button1000->Size = System::Drawing::Size(150, 117);
			this->Button1000->TabIndex = 27;
			// 
			// Button2000
			// 
			this->Button2000->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->Button2000->BackColor = System::Drawing::Color::Transparent;
			this->Button2000->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)), static_cast<System::Int32>(static_cast<System::Byte>(176)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->Button2000->BorderColor = System::Drawing::Color::White;
			this->Button2000->BorderRadius = 15;
			this->Button2000->ButtonText = L"2000";
			this->Button2000->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold));
			this->Button2000->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold));
			this->Button2000->ForeColors = System::Drawing::SystemColors::ControlLight;
			this->Button2000->HoverBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->Button2000->HoverBorder = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->Button2000->HoverFontColor = System::Drawing::Color::White;
			this->Button2000->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->Button2000->LineThickness = 2;
			this->Button2000->Location = System::Drawing::Point(529, 386);
			this->Button2000->Margin = System::Windows::Forms::Padding(12, 12, 12, 12);
			this->Button2000->Name = L"Button2000";
			this->Button2000->Size = System::Drawing::Size(150, 117);
			this->Button2000->TabIndex = 28;
			// 
			// ReplanishButton
			// 
			this->ReplanishButton->BackColor = System::Drawing::Color::Transparent;
			this->ReplanishButton->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->ReplanishButton->BorderColor = System::Drawing::Color::White;
			this->ReplanishButton->BorderRadius = 23;
			this->ReplanishButton->ButtonText = L"ПОПОВНИТИ";
			this->ReplanishButton->Font = (gcnew System::Drawing::Font(L"Verdana", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ReplanishButton->Font_Size = (gcnew System::Drawing::Font(L"Verdana", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ReplanishButton->ForeColors = System::Drawing::SystemColors::ControlLight;
			this->ReplanishButton->HoverBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->ReplanishButton->HoverBorder = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->ReplanishButton->HoverFontColor = System::Drawing::Color::White;
			this->ReplanishButton->LineThickness = 2;
			this->ReplanishButton->Location = System::Drawing::Point(375, 512);
			this->ReplanishButton->Margin = System::Windows::Forms::Padding(4);
			this->ReplanishButton->Name = L"ReplanishButton";
			this->ReplanishButton->Size = System::Drawing::Size(304, 52);
			this->ReplanishButton->TabIndex = 29;
			this->ReplanishButton->Click += gcnew System::EventHandler(this, &Card_InForm::ReplanishButton_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(37, 174);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(281, 20);
			this->label1->TabIndex = 30;
			this->label1->Text = L"Введіть суму поповнення (кратну 50)";
			// 
			// SummOfReplanishment
			// 
			this->SummOfReplanishment->BackColor = System::Drawing::Color::Transparent;
			this->SummOfReplanishment->BorderColor = System::Drawing::Color::Empty;
			this->SummOfReplanishment->BorderRadius = 20;
			this->SummOfReplanishment->FillColor = System::Drawing::SystemColors::Window;
			this->SummOfReplanishment->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->SummOfReplanishment->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->SummOfReplanishment->ForeColors = System::Drawing::Color::Gray;
			this->SummOfReplanishment->IsPassword = false;
			this->SummOfReplanishment->LineThickness = 2;
			this->SummOfReplanishment->Location = System::Drawing::Point(65, 197);
			this->SummOfReplanishment->Margin = System::Windows::Forms::Padding(4);
			this->SummOfReplanishment->MaxLength = 32767;
			this->SummOfReplanishment->MouseOnHover = System::Drawing::Color::DarkGray;
			this->SummOfReplanishment->Name = L"SummOfReplanishment";
			this->SummOfReplanishment->OnCursor = System::Windows::Forms::Cursors::IBeam;
			this->SummOfReplanishment->OnFocusColor = System::Drawing::Color::DarkGray;
			this->SummOfReplanishment->OnFocusFontColor = System::Drawing::Color::Gray;
			this->SummOfReplanishment->ReadOnly = false;
			this->SummOfReplanishment->Size = System::Drawing::Size(218, 51);
			this->SummOfReplanishment->TabIndex = 32;
			this->SummOfReplanishment->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->SummOfReplanishment->TextName = L"";
			// 
			// MaxSummTxt
			// 
			this->MaxSummTxt->BackColor = System::Drawing::Color::Transparent;
			this->MaxSummTxt->BorderColor = System::Drawing::Color::Empty;
			this->MaxSummTxt->BorderRadius = 10;
			this->MaxSummTxt->Enabled = false;
			this->MaxSummTxt->FillColor = System::Drawing::Color::White;
			this->MaxSummTxt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->MaxSummTxt->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->MaxSummTxt->ForeColors = System::Drawing::Color::Gray;
			this->MaxSummTxt->IsPassword = false;
			this->MaxSummTxt->LineThickness = 2;
			this->MaxSummTxt->Location = System::Drawing::Point(243, 340);
			this->MaxSummTxt->Margin = System::Windows::Forms::Padding(4);
			this->MaxSummTxt->MaxLength = 32767;
			this->MaxSummTxt->MouseOnHover = System::Drawing::Color::DarkGray;
			this->MaxSummTxt->Name = L"MaxSummTxt";
			this->MaxSummTxt->OnCursor = System::Windows::Forms::Cursors::IBeam;
			this->MaxSummTxt->OnFocusColor = System::Drawing::Color::DarkGray;
			this->MaxSummTxt->OnFocusFontColor = System::Drawing::Color::Gray;
			this->MaxSummTxt->ReadOnly = false;
			this->MaxSummTxt->Size = System::Drawing::Size(99, 51);
			this->MaxSummTxt->TabIndex = 33;
			this->MaxSummTxt->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->MaxSummTxt->TextName = L"50000";
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
			this->UserNameTxt->Location = System::Drawing::Point(124, 391);
			this->UserNameTxt->Margin = System::Windows::Forms::Padding(4);
			this->UserNameTxt->MaxLength = 32767;
			this->UserNameTxt->MouseOnHover = System::Drawing::Color::DarkGray;
			this->UserNameTxt->Name = L"UserNameTxt";
			this->UserNameTxt->OnCursor = System::Windows::Forms::Cursors::IBeam;
			this->UserNameTxt->OnFocusColor = System::Drawing::Color::DarkGray;
			this->UserNameTxt->OnFocusFontColor = System::Drawing::Color::Gray;
			this->UserNameTxt->ReadOnly = false;
			this->UserNameTxt->Size = System::Drawing::Size(218, 51);
			this->UserNameTxt->TabIndex = 34;
			this->UserNameTxt->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->UserNameTxt->TextName = L"Name";
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
			this->CardNumberTxt->Location = System::Drawing::Point(124, 493);
			this->CardNumberTxt->Margin = System::Windows::Forms::Padding(4);
			this->CardNumberTxt->MaxLength = 32767;
			this->CardNumberTxt->MouseOnHover = System::Drawing::Color::DarkGray;
			this->CardNumberTxt->Name = L"CardNumberTxt";
			this->CardNumberTxt->OnCursor = System::Windows::Forms::Cursors::IBeam;
			this->CardNumberTxt->OnFocusColor = System::Drawing::Color::DarkGray;
			this->CardNumberTxt->OnFocusFontColor = System::Drawing::Color::Gray;
			this->CardNumberTxt->ReadOnly = false;
			this->CardNumberTxt->Size = System::Drawing::Size(218, 51);
			this->CardNumberTxt->TabIndex = 35;
			this->CardNumberTxt->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->CardNumberTxt->TextName = L"****";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(1, 359);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(239, 19);
			this->label4->TabIndex = 36;
			this->label4->Text = L"Максимальна сума поповнення";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(1, 407);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(88, 19);
			this->label5->TabIndex = 37;
			this->label5->Text = L"Отримувач";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(1, 507);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(111, 19);
			this->label6->TabIndex = 38;
			this->label6->Text = L"Номер картки";
			// 
			// jDragControl1
			// 
			this->jDragControl1->GetForm = this;
			this->jDragControl1->TargetControl = this->menuStrip1;
			// 
			// CurrentBalanceTxt
			// 
			this->CurrentBalanceTxt->BackColor = System::Drawing::Color::Transparent;
			this->CurrentBalanceTxt->BorderColor = System::Drawing::Color::Empty;
			this->CurrentBalanceTxt->BorderRadius = 10;
			this->CurrentBalanceTxt->Enabled = false;
			this->CurrentBalanceTxt->FillColor = System::Drawing::Color::White;
			this->CurrentBalanceTxt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->CurrentBalanceTxt->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->CurrentBalanceTxt->ForeColors = System::Drawing::Color::Gray;
			this->CurrentBalanceTxt->IsPassword = false;
			this->CurrentBalanceTxt->LineThickness = 2;
			this->CurrentBalanceTxt->Location = System::Drawing::Point(124, 442);
			this->CurrentBalanceTxt->Margin = System::Windows::Forms::Padding(4);
			this->CurrentBalanceTxt->MaxLength = 32767;
			this->CurrentBalanceTxt->MouseOnHover = System::Drawing::Color::DarkGray;
			this->CurrentBalanceTxt->Name = L"CurrentBalanceTxt";
			this->CurrentBalanceTxt->OnCursor = System::Windows::Forms::Cursors::IBeam;
			this->CurrentBalanceTxt->OnFocusColor = System::Drawing::Color::DarkGray;
			this->CurrentBalanceTxt->OnFocusFontColor = System::Drawing::Color::Gray;
			this->CurrentBalanceTxt->ReadOnly = false;
			this->CurrentBalanceTxt->Size = System::Drawing::Size(218, 51);
			this->CurrentBalanceTxt->TabIndex = 39;
			this->CurrentBalanceTxt->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->CurrentBalanceTxt->TextName = L"****";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(1, 459);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(62, 19);
			this->label7->TabIndex = 40;
			this->label7->Text = L"Баланс";
			// 
			// Card_InForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(700, 584);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->CurrentBalanceTxt);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->CardNumberTxt);
			this->Controls->Add(this->UserNameTxt);
			this->Controls->Add(this->MaxSummTxt);
			this->Controls->Add(this->SummOfReplanishment);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->ReplanishButton);
			this->Controls->Add(this->Button2000);
			this->Controls->Add(this->Button1000);
			this->Controls->Add(this->Button500);
			this->Controls->Add(this->Button200);
			this->Controls->Add(this->Button100);
			this->Controls->Add(this->Button50);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Card_InForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Card_InForm";
			this->Load += gcnew System::EventHandler(this, &Card_InForm::Card_InForm_Load);
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
	private: System::Void Card_InForm_Load(System::Object^ sender, System::EventArgs^ e) {
		CardNumberTxt->TextName = Convert::ToString(n->CardNumber);
		UserNameTxt->TextName = Convert::ToString(n->UserName);
		CurrentBalanceTxt->TextName = Convert::ToString(n->Balance);
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
	private: System::Void ReplanishButton_Click(System::Object^ sender, System::EventArgs^ e) {
		//Using the card in/out function

		int SummTxt;
		if (SummOfReplanishment->TextName == "") {
			MessageBox::Show("Summ can`t be empty");
		}
		else if (SummTxt < 50 || SummTxt > 50000) {
			MessageBox::Show("Input summ between 50 and 50000");
		}
		else {
			SummTxt = Convert::ToInt32(SummOfReplanishment->TextName);
			f2.UpdateBalance(n, SummTxt);
			this->Hide();
			EndForm^ _EndForm1 = gcnew EndForm();
			_EndForm1->ShowDialog();
		}
	}
	};
}
