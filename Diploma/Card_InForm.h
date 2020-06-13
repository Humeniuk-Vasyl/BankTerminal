#pragma once
#include <stdlib.h>
#include "ParametersClass.h"
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
	private: ::JThinButton::JThinButton^ jThinButton1;
	private: ::JThinButton::JThinButton^ jThinButton2;
	private: ::JThinButton::JThinButton^ jThinButton3;
	private: ::JThinButton::JThinButton^ jThinButton4;
	private: ::JThinButton::JThinButton^ jThinButton5;
	private: ::JThinButton::JThinButton^ jThinButton6;
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
			this->jThinButton1 = (gcnew ::JThinButton::JThinButton());
			this->jThinButton2 = (gcnew ::JThinButton::JThinButton());
			this->jThinButton3 = (gcnew ::JThinButton::JThinButton());
			this->jThinButton4 = (gcnew ::JThinButton::JThinButton());
			this->jThinButton5 = (gcnew ::JThinButton::JThinButton());
			this->jThinButton6 = (gcnew ::JThinButton::JThinButton());
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
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Chartreuse;
			this->panel2->ForeColor = System::Drawing::Color::Chartreuse;
			this->panel2->Location = System::Drawing::Point(349, 154);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(5, 414);
			this->panel2->TabIndex = 12;
			// 
			// jThinButton1
			// 
			this->jThinButton1->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->jThinButton1->BackColor = System::Drawing::Color::Transparent;
			this->jThinButton1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->jThinButton1->BorderColor = System::Drawing::Color::White;
			this->jThinButton1->BorderRadius = 15;
			this->jThinButton1->ButtonText = L"50";
			this->jThinButton1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold));
			this->jThinButton1->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold));
			this->jThinButton1->ForeColors = System::Drawing::SystemColors::ControlLight;
			this->jThinButton1->HoverBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->jThinButton1->HoverBorder = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->jThinButton1->HoverFontColor = System::Drawing::Color::White;
			this->jThinButton1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->jThinButton1->LineThickness = 2;
			this->jThinButton1->Location = System::Drawing::Point(375, 151);
			this->jThinButton1->Margin = System::Windows::Forms::Padding(12, 12, 12, 12);
			this->jThinButton1->Name = L"jThinButton1";
			this->jThinButton1->Size = System::Drawing::Size(150, 117);
			this->jThinButton1->TabIndex = 23;
			// 
			// jThinButton2
			// 
			this->jThinButton2->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->jThinButton2->BackColor = System::Drawing::Color::Transparent;
			this->jThinButton2->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->jThinButton2->BorderColor = System::Drawing::Color::White;
			this->jThinButton2->BorderRadius = 15;
			this->jThinButton2->ButtonText = L"100";
			this->jThinButton2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold));
			this->jThinButton2->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold));
			this->jThinButton2->ForeColors = System::Drawing::SystemColors::ControlLight;
			this->jThinButton2->HoverBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->jThinButton2->HoverBorder = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->jThinButton2->HoverFontColor = System::Drawing::Color::White;
			this->jThinButton2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->jThinButton2->LineThickness = 2;
			this->jThinButton2->Location = System::Drawing::Point(529, 151);
			this->jThinButton2->Margin = System::Windows::Forms::Padding(12, 12, 12, 12);
			this->jThinButton2->Name = L"jThinButton2";
			this->jThinButton2->Size = System::Drawing::Size(150, 117);
			this->jThinButton2->TabIndex = 24;
			// 
			// jThinButton3
			// 
			this->jThinButton3->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->jThinButton3->BackColor = System::Drawing::Color::Transparent;
			this->jThinButton3->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->jThinButton3->BorderColor = System::Drawing::Color::White;
			this->jThinButton3->BorderRadius = 15;
			this->jThinButton3->ButtonText = L"200";
			this->jThinButton3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold));
			this->jThinButton3->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold));
			this->jThinButton3->ForeColors = System::Drawing::SystemColors::ControlLight;
			this->jThinButton3->HoverBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->jThinButton3->HoverBorder = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->jThinButton3->HoverFontColor = System::Drawing::Color::White;
			this->jThinButton3->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->jThinButton3->LineThickness = 2;
			this->jThinButton3->Location = System::Drawing::Point(375, 269);
			this->jThinButton3->Margin = System::Windows::Forms::Padding(12, 12, 12, 12);
			this->jThinButton3->Name = L"jThinButton3";
			this->jThinButton3->Size = System::Drawing::Size(150, 117);
			this->jThinButton3->TabIndex = 25;
			// 
			// jThinButton4
			// 
			this->jThinButton4->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->jThinButton4->BackColor = System::Drawing::Color::Transparent;
			this->jThinButton4->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->jThinButton4->BorderColor = System::Drawing::Color::White;
			this->jThinButton4->BorderRadius = 15;
			this->jThinButton4->ButtonText = L"500";
			this->jThinButton4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold));
			this->jThinButton4->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold));
			this->jThinButton4->ForeColors = System::Drawing::SystemColors::ControlLight;
			this->jThinButton4->HoverBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->jThinButton4->HoverBorder = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->jThinButton4->HoverFontColor = System::Drawing::Color::White;
			this->jThinButton4->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->jThinButton4->LineThickness = 2;
			this->jThinButton4->Location = System::Drawing::Point(529, 269);
			this->jThinButton4->Margin = System::Windows::Forms::Padding(12, 12, 12, 12);
			this->jThinButton4->Name = L"jThinButton4";
			this->jThinButton4->Size = System::Drawing::Size(150, 117);
			this->jThinButton4->TabIndex = 26;
			// 
			// jThinButton5
			// 
			this->jThinButton5->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->jThinButton5->BackColor = System::Drawing::Color::Transparent;
			this->jThinButton5->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->jThinButton5->BorderColor = System::Drawing::Color::White;
			this->jThinButton5->BorderRadius = 15;
			this->jThinButton5->ButtonText = L"1000";
			this->jThinButton5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold));
			this->jThinButton5->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold));
			this->jThinButton5->ForeColors = System::Drawing::SystemColors::ControlLight;
			this->jThinButton5->HoverBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->jThinButton5->HoverBorder = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->jThinButton5->HoverFontColor = System::Drawing::Color::White;
			this->jThinButton5->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->jThinButton5->LineThickness = 2;
			this->jThinButton5->Location = System::Drawing::Point(375, 386);
			this->jThinButton5->Margin = System::Windows::Forms::Padding(12, 12, 12, 12);
			this->jThinButton5->Name = L"jThinButton5";
			this->jThinButton5->Size = System::Drawing::Size(150, 117);
			this->jThinButton5->TabIndex = 27;
			// 
			// jThinButton6
			// 
			this->jThinButton6->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->jThinButton6->BackColor = System::Drawing::Color::Transparent;
			this->jThinButton6->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->jThinButton6->BorderColor = System::Drawing::Color::White;
			this->jThinButton6->BorderRadius = 15;
			this->jThinButton6->ButtonText = L"2000";
			this->jThinButton6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold));
			this->jThinButton6->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold));
			this->jThinButton6->ForeColors = System::Drawing::SystemColors::ControlLight;
			this->jThinButton6->HoverBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->jThinButton6->HoverBorder = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->jThinButton6->HoverFontColor = System::Drawing::Color::White;
			this->jThinButton6->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->jThinButton6->LineThickness = 2;
			this->jThinButton6->Location = System::Drawing::Point(529, 386);
			this->jThinButton6->Margin = System::Windows::Forms::Padding(12, 12, 12, 12);
			this->jThinButton6->Name = L"jThinButton6";
			this->jThinButton6->Size = System::Drawing::Size(150, 117);
			this->jThinButton6->TabIndex = 28;
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
			this->MaxSummTxt->Location = System::Drawing::Point(243, 367);
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
			this->UserNameTxt->Location = System::Drawing::Point(124, 416);
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
			this->CardNumberTxt->Location = System::Drawing::Point(124, 466);
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
			this->label4->Location = System::Drawing::Point(1, 386);
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
			this->label5->Location = System::Drawing::Point(1, 432);
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
			this->label6->Location = System::Drawing::Point(1, 484);
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
			// Card_InForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(700, 584);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->CardNumberTxt);
			this->Controls->Add(this->UserNameTxt);
			this->Controls->Add(this->MaxSummTxt);
			this->Controls->Add(this->SummOfReplanishment);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->ReplanishButton);
			this->Controls->Add(this->jThinButton6);
			this->Controls->Add(this->jThinButton5);
			this->Controls->Add(this->jThinButton4);
			this->Controls->Add(this->jThinButton3);
			this->Controls->Add(this->jThinButton2);
			this->Controls->Add(this->jThinButton1);
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
	private: System::Void Card_InForm_Load(System::Object^ sender, System::EventArgs^ e) {
		ParametersClass^ n = gcnew ParametersClass();
		CardNumberTxt->TextName = Convert::ToString(n->CardNumber);
		UserNameTxt->TextName = Convert::ToString(n->UserName);
		
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
		exit(0);
	}

	private: System::Void ReplanishButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		EndForm^ _EndForm1 = gcnew EndForm();
		_EndForm1->ShowDialog();
	}
	};
}
