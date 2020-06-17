#pragma once
#include "EndForm.h"
#include "ParametersClass.h"
#include "DBFicsation.h"
#include <stdlib.h>
namespace Diploma {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для ChangingForm
	/// </summary>
	public ref class ChangingForm : public System::Windows::Forms::Form
	{
	public:
		ChangingForm(void)
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
		~ChangingForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ToolStripMenuItem^ menuToolStripMenuItem;
	private: System::Windows::Forms::Label^ label3;
	private: ::JThinButton::JThinButton^ ChangePIN_codeButton;
	private: System::Windows::Forms::Panel^ panel2;
	private: ::JThinButton::JThinButton^ ChangePhoneNumberButton;
	private: ::JMetroTextBox::JMetroTextBox^ NewNumberTxt;

	private: ::JMetroTextBox::JMetroTextBox^ ReNewNumberTxt;

	private: ::JMetroTextBox::JMetroTextBox^ NewPINTxt;
	private: ::JMetroTextBox::JMetroTextBox^ OldPINTxt1;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label6;
	private: ::JMetroTextBox::JMetroTextBox^ ReNewPINTxt;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: ::JDragControl::JDragControl^ jDragControl1;
	private: System::ComponentModel::IContainer^ components;



	protected:


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ChangingForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->ChangePIN_codeButton = (gcnew ::JThinButton::JThinButton());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->ChangePhoneNumberButton = (gcnew ::JThinButton::JThinButton());
			this->NewNumberTxt = (gcnew ::JMetroTextBox::JMetroTextBox());
			this->ReNewNumberTxt = (gcnew ::JMetroTextBox::JMetroTextBox());
			this->NewPINTxt = (gcnew ::JMetroTextBox::JMetroTextBox());
			this->OldPINTxt1 = (gcnew ::JMetroTextBox::JMetroTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->ReNewPINTxt = (gcnew ::JMetroTextBox::JMetroTextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->jDragControl1 = (gcnew ::JDragControl::JDragControl(this->components));
			this->menuStrip1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
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
			this->menuStrip1->Size = System::Drawing::Size(700, 30);
			this->menuStrip1->TabIndex = 5;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->menuToolStripMenuItem,
					this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->fileToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(84, 26);
			this->fileToolStripMenuItem->Text = L"Actions";
			// 
			// menuToolStripMenuItem
			// 
			this->menuToolStripMenuItem->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->menuToolStripMenuItem->Name = L"menuToolStripMenuItem";
			this->menuToolStripMenuItem->Size = System::Drawing::Size(138, 26);
			this->menuToolStripMenuItem->Text = L"Menu";
			this->menuToolStripMenuItem->Click += gcnew System::EventHandler(this, &ChangingForm::menuToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->BackColor = System::Drawing::Color::White;
			this->exitToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold));
			this->exitToolStripMenuItem->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(138, 26);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &ChangingForm::exitToolStripMenuItem_Click);
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->aboutToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->aboutToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(72, 26);
			this->aboutToolStripMenuItem->Text = L"About";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
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
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(30, 23);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(646, 49);
			this->label2->TabIndex = 1;
			this->label2->Text = L"CHANGE PIN-CODE OR NUMBER";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->label3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->Location = System::Drawing::Point(671, -5);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(31, 32);
			this->label3->TabIndex = 8;
			this->label3->Text = L"X";
			this->label3->Click += gcnew System::EventHandler(this, &ChangingForm::label3_Click);
			this->label3->MouseLeave += gcnew System::EventHandler(this, &ChangingForm::label3_MouseLeave);
			this->label3->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &ChangingForm::label3_MouseMove);
			// 
			// ChangePIN_codeButton
			// 
			this->ChangePIN_codeButton->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->ChangePIN_codeButton->BackColor = System::Drawing::Color::Transparent;
			this->ChangePIN_codeButton->BackgroundColor = System::Drawing::Color::Transparent;
			this->ChangePIN_codeButton->BorderColor = System::Drawing::Color::White;
			this->ChangePIN_codeButton->BorderRadius = 34;
			this->ChangePIN_codeButton->ButtonText = L"Змінити ПІН-код";
			this->ChangePIN_codeButton->Font = (gcnew System::Drawing::Font(L"Impact", 19.2F));
			this->ChangePIN_codeButton->Font_Size = (gcnew System::Drawing::Font(L"Impact", 19.2F));
			this->ChangePIN_codeButton->ForeColors = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->ChangePIN_codeButton->HoverBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->ChangePIN_codeButton->HoverBorder = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->ChangePIN_codeButton->HoverFontColor = System::Drawing::Color::White;
			this->ChangePIN_codeButton->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->ChangePIN_codeButton->LineThickness = 2;
			this->ChangePIN_codeButton->Location = System::Drawing::Point(13, 457);
			this->ChangePIN_codeButton->Margin = System::Windows::Forms::Padding(4);
			this->ChangePIN_codeButton->Name = L"ChangePIN_codeButton";
			this->ChangePIN_codeButton->Size = System::Drawing::Size(322, 71);
			this->ChangePIN_codeButton->TabIndex = 20;
			this->ChangePIN_codeButton->Click += gcnew System::EventHandler(this, &ChangingForm::ChangePIN_codeButton_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->panel2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->panel2->Location = System::Drawing::Point(349, 238);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(5, 310);
			this->panel2->TabIndex = 21;
			// 
			// ChangePhoneNumberButton
			// 
			this->ChangePhoneNumberButton->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->ChangePhoneNumberButton->BackColor = System::Drawing::Color::Transparent;
			this->ChangePhoneNumberButton->BackgroundColor = System::Drawing::Color::Transparent;
			this->ChangePhoneNumberButton->BorderColor = System::Drawing::Color::White;
			this->ChangePhoneNumberButton->BorderRadius = 34;
			this->ChangePhoneNumberButton->ButtonText = L"Змінити номер";
			this->ChangePhoneNumberButton->Font = (gcnew System::Drawing::Font(L"Impact", 19.2F));
			this->ChangePhoneNumberButton->Font_Size = (gcnew System::Drawing::Font(L"Impact", 19.2F));
			this->ChangePhoneNumberButton->ForeColors = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->ChangePhoneNumberButton->HoverBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->ChangePhoneNumberButton->HoverBorder = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->ChangePhoneNumberButton->HoverFontColor = System::Drawing::Color::White;
			this->ChangePhoneNumberButton->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->ChangePhoneNumberButton->LineThickness = 2;
			this->ChangePhoneNumberButton->Location = System::Drawing::Point(361, 457);
			this->ChangePhoneNumberButton->Margin = System::Windows::Forms::Padding(4);
			this->ChangePhoneNumberButton->Name = L"ChangePhoneNumberButton";
			this->ChangePhoneNumberButton->Size = System::Drawing::Size(322, 71);
			this->ChangePhoneNumberButton->TabIndex = 22;
			this->ChangePhoneNumberButton->Click += gcnew System::EventHandler(this, &ChangingForm::ChangePhoneNumberButton_Click);
			// 
			// NewNumberTxt
			// 
			this->NewNumberTxt->BackColor = System::Drawing::Color::Transparent;
			this->NewNumberTxt->BorderColor = System::Drawing::Color::Empty;
			this->NewNumberTxt->BorderRadius = 20;
			this->NewNumberTxt->FillColor = System::Drawing::Color::White;
			this->NewNumberTxt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->NewNumberTxt->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->NewNumberTxt->ForeColors = System::Drawing::Color::Gray;
			this->NewNumberTxt->IsPassword = false;
			this->NewNumberTxt->LineThickness = 2;
			this->NewNumberTxt->Location = System::Drawing::Point(400, 272);
			this->NewNumberTxt->Margin = System::Windows::Forms::Padding(4);
			this->NewNumberTxt->MaxLength = 32767;
			this->NewNumberTxt->MouseOnHover = System::Drawing::Color::DarkGray;
			this->NewNumberTxt->Name = L"NewNumberTxt";
			this->NewNumberTxt->OnCursor = System::Windows::Forms::Cursors::IBeam;
			this->NewNumberTxt->OnFocusColor = System::Drawing::Color::DarkGray;
			this->NewNumberTxt->OnFocusFontColor = System::Drawing::Color::Gray;
			this->NewNumberTxt->ReadOnly = false;
			this->NewNumberTxt->Size = System::Drawing::Size(250, 51);
			this->NewNumberTxt->TabIndex = 33;
			this->NewNumberTxt->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->NewNumberTxt->TextName = L"";
			// 
			// ReNewNumberTxt
			// 
			this->ReNewNumberTxt->BackColor = System::Drawing::Color::Transparent;
			this->ReNewNumberTxt->BorderColor = System::Drawing::Color::Empty;
			this->ReNewNumberTxt->BorderRadius = 20;
			this->ReNewNumberTxt->FillColor = System::Drawing::Color::White;
			this->ReNewNumberTxt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->ReNewNumberTxt->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->ReNewNumberTxt->ForeColors = System::Drawing::Color::Gray;
			this->ReNewNumberTxt->IsPassword = false;
			this->ReNewNumberTxt->LineThickness = 2;
			this->ReNewNumberTxt->Location = System::Drawing::Point(400, 359);
			this->ReNewNumberTxt->Margin = System::Windows::Forms::Padding(4);
			this->ReNewNumberTxt->MaxLength = 32767;
			this->ReNewNumberTxt->MouseOnHover = System::Drawing::Color::DarkGray;
			this->ReNewNumberTxt->Name = L"ReNewNumberTxt";
			this->ReNewNumberTxt->OnCursor = System::Windows::Forms::Cursors::IBeam;
			this->ReNewNumberTxt->OnFocusColor = System::Drawing::Color::DarkGray;
			this->ReNewNumberTxt->OnFocusFontColor = System::Drawing::Color::Gray;
			this->ReNewNumberTxt->ReadOnly = false;
			this->ReNewNumberTxt->Size = System::Drawing::Size(250, 51);
			this->ReNewNumberTxt->TabIndex = 34;
			this->ReNewNumberTxt->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->ReNewNumberTxt->TextName = L"";
			// 
			// NewPINTxt
			// 
			this->NewPINTxt->BackColor = System::Drawing::Color::Transparent;
			this->NewPINTxt->BorderColor = System::Drawing::Color::Empty;
			this->NewPINTxt->BorderRadius = 20;
			this->NewPINTxt->FillColor = System::Drawing::Color::White;
			this->NewPINTxt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->NewPINTxt->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->NewPINTxt->ForeColors = System::Drawing::Color::Gray;
			this->NewPINTxt->IsPassword = false;
			this->NewPINTxt->LineThickness = 2;
			this->NewPINTxt->Location = System::Drawing::Point(51, 272);
			this->NewPINTxt->Margin = System::Windows::Forms::Padding(4);
			this->NewPINTxt->MaxLength = 32767;
			this->NewPINTxt->MouseOnHover = System::Drawing::Color::DarkGray;
			this->NewPINTxt->Name = L"NewPINTxt";
			this->NewPINTxt->OnCursor = System::Windows::Forms::Cursors::IBeam;
			this->NewPINTxt->OnFocusColor = System::Drawing::Color::DarkGray;
			this->NewPINTxt->OnFocusFontColor = System::Drawing::Color::Gray;
			this->NewPINTxt->ReadOnly = false;
			this->NewPINTxt->Size = System::Drawing::Size(250, 51);
			this->NewPINTxt->TabIndex = 36;
			this->NewPINTxt->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->NewPINTxt->TextName = L"";
			// 
			// OldPINTxt1
			// 
			this->OldPINTxt1->BackColor = System::Drawing::Color::Transparent;
			this->OldPINTxt1->BorderColor = System::Drawing::Color::Empty;
			this->OldPINTxt1->BorderRadius = 20;
			this->OldPINTxt1->FillColor = System::Drawing::Color::White;
			this->OldPINTxt1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->OldPINTxt1->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->OldPINTxt1->ForeColors = System::Drawing::Color::Gray;
			this->OldPINTxt1->IsPassword = false;
			this->OldPINTxt1->LineThickness = 2;
			this->OldPINTxt1->Location = System::Drawing::Point(226, 174);
			this->OldPINTxt1->Margin = System::Windows::Forms::Padding(4);
			this->OldPINTxt1->MaxLength = 32767;
			this->OldPINTxt1->MouseOnHover = System::Drawing::Color::DarkGray;
			this->OldPINTxt1->Name = L"OldPINTxt1";
			this->OldPINTxt1->OnCursor = System::Windows::Forms::Cursors::IBeam;
			this->OldPINTxt1->OnFocusColor = System::Drawing::Color::DarkGray;
			this->OldPINTxt1->OnFocusFontColor = System::Drawing::Color::Gray;
			this->OldPINTxt1->ReadOnly = false;
			this->OldPINTxt1->Size = System::Drawing::Size(250, 51);
			this->OldPINTxt1->TabIndex = 35;
			this->OldPINTxt1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->OldPINTxt1->TextName = L"";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(282, 148);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(137, 21);
			this->label1->TabIndex = 40;
			this->label1->Text = L"Введіть ПІН-код";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(84, 242);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(191, 21);
			this->label4->TabIndex = 41;
			this->label4->Text = L"Введіть новий ПІН-код";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(379, 242);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(297, 21);
			this->label6->TabIndex = 42;
			this->label6->Text = L"Введіть новий телефонний номер";
			// 
			// ReNewPINTxt
			// 
			this->ReNewPINTxt->BackColor = System::Drawing::Color::Transparent;
			this->ReNewPINTxt->BorderColor = System::Drawing::Color::Empty;
			this->ReNewPINTxt->BorderRadius = 20;
			this->ReNewPINTxt->FillColor = System::Drawing::Color::White;
			this->ReNewPINTxt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->ReNewPINTxt->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->ReNewPINTxt->ForeColors = System::Drawing::Color::Gray;
			this->ReNewPINTxt->IsPassword = false;
			this->ReNewPINTxt->LineThickness = 2;
			this->ReNewPINTxt->Location = System::Drawing::Point(51, 359);
			this->ReNewPINTxt->Margin = System::Windows::Forms::Padding(4);
			this->ReNewPINTxt->MaxLength = 32767;
			this->ReNewPINTxt->MouseOnHover = System::Drawing::Color::DarkGray;
			this->ReNewPINTxt->Name = L"ReNewPINTxt";
			this->ReNewPINTxt->OnCursor = System::Windows::Forms::Cursors::IBeam;
			this->ReNewPINTxt->OnFocusColor = System::Drawing::Color::DarkGray;
			this->ReNewPINTxt->OnFocusFontColor = System::Drawing::Color::Gray;
			this->ReNewPINTxt->ReadOnly = false;
			this->ReNewPINTxt->Size = System::Drawing::Size(250, 51);
			this->ReNewPINTxt->TabIndex = 43;
			this->ReNewPINTxt->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->ReNewPINTxt->TextName = L"";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(68, 332);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(213, 21);
			this->label7->TabIndex = 44;
			this->label7->Text = L"Повторіть новий ПІН-код";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(369, 332);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(319, 21);
			this->label8->TabIndex = 45;
			this->label8->Text = L"Повторіть новий телефонний номер";
			// 
			// jDragControl1
			// 
			this->jDragControl1->GetForm = this;
			this->jDragControl1->TargetControl = this->menuStrip1;
			// 
			// ChangingForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(700, 560);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->ReNewPINTxt);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->NewPINTxt);
			this->Controls->Add(this->OldPINTxt1);
			this->Controls->Add(this->ReNewNumberTxt);
			this->Controls->Add(this->NewNumberTxt);
			this->Controls->Add(this->ChangePhoneNumberButton);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->ChangePIN_codeButton);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ChangingForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ChangingForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		ParametersClass^ n = gcnew ParametersClass();
		DBFicsation f6;
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
		exit(0);
	}
	private: System::Void label3_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		this->label3->ForeColor = System::Drawing::Color::Tomato;
	}
	private: System::Void label3_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->label3->ForeColor = System::Drawing::Color::Gainsboro;
	}
	private: System::Void ChangePIN_codeButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (NewPINTxt->TextName == "" || ReNewPINTxt->TextName == "" || OldPINTxt1->TextName == "") {
			MessageBox::Show("Please fill all data");
		}
		if (OldPINTxt1->TextName != n->PIN_Code) {
			MessageBox::Show("Incorect old PIN-code");
		}
		else if (NewPINTxt->TextName != ReNewPINTxt->TextName) {
			MessageBox::Show("PIN-codes don't match");
		}
		else {
			int NewPIN_Code = Convert::ToInt32(NewPINTxt->TextName);
			f6.UpdatePIN_Code(n, NewPINTxt->TextName);// Updating user PIN_code
			this->Hide();							// hiding changing form
			EndForm^ _EndForm1 = gcnew EndForm();	// creating End Form
			_EndForm1->ShowDialog();				// showing End Form Like Dialog icon
		}
	}
	private: System::Void ChangePhoneNumberButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (NewNumberTxt->TextName == "" || ReNewNumberTxt->TextName == "" || OldPINTxt1->TextName == "")
		{
			MessageBox::Show("Please fill all data");
		}
		if (OldPINTxt1->TextName != n->PIN_Code)
		{
			MessageBox::Show("Incorect old PIN-code");
		}
		else if (NewNumberTxt->TextName == ReNewNumberTxt->TextName) {
			f6.UpdatePhoneNumber(n, NewNumberTxt->TextName);
			this->Hide();
			EndForm^ _EndForm1 = gcnew EndForm();
			_EndForm1->ShowDialog();
		}
		else
		{
			MessageBox::Show("Phone Number don't match");
		}
	}
	private: System::Void menuToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		exit(0);
	}

};
}
