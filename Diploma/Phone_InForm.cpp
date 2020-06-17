#include "Phone_InForm.h"

inline Diploma::Phone_InForm::Phone_InForm(void)
{
	InitializeComponent();
}

/// delete all

inline Diploma::Phone_InForm::~Phone_InForm()
{
	if (components)
	{
		delete components;
	}
}

/// func for designer. don`t change

inline void Diploma::Phone_InForm::InitializeComponent(void)
{
	this->components = (gcnew System::ComponentModel::Container());
	System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Phone_InForm::typeid));
	this->label3 = (gcnew System::Windows::Forms::Label());
	this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
	this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
	this->mainMenuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
	this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
	this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
	this->panel1 = (gcnew System::Windows::Forms::Panel());
	this->label2 = (gcnew System::Windows::Forms::Label());
	this->panel2 = (gcnew System::Windows::Forms::Panel());
	this->label4 = (gcnew System::Windows::Forms::Label());
	this->MaxSummOfPhoneRepl = (gcnew ::JMetroTextBox::JMetroTextBox());
	this->SummOfPhoneRepl = (gcnew ::JMetroTextBox::JMetroTextBox());
	this->label1 = (gcnew System::Windows::Forms::Label());
	this->label6 = (gcnew System::Windows::Forms::Label());
	this->PhoneNumberTxt = (gcnew ::JMetroTextBox::JMetroTextBox());
	this->PhoneReplButton = (gcnew ::JThinButton::JThinButton());
	this->Button200 = (gcnew ::JThinButton::JThinButton());
	this->Button100 = (gcnew ::JThinButton::JThinButton());
	this->Button50 = (gcnew ::JThinButton::JThinButton());
	this->Button20 = (gcnew ::JThinButton::JThinButton());
	this->Button10 = (gcnew ::JThinButton::JThinButton());
	this->Button5 = (gcnew ::JThinButton::JThinButton());
	this->jDragControl1 = (gcnew ::JDragControl::JDragControl(this->components));
	this->menuStrip1->SuspendLayout();
	this->panel1->SuspendLayout();
	this->SuspendLayout();
	// 
	// label3
	// 
	this->label3->AutoSize = true;
	this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)), static_cast<System::Int32>(static_cast<System::Byte>(176)),
		static_cast<System::Int32>(static_cast<System::Byte>(37)));
	this->label3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->label3->ForeColor = System::Drawing::SystemColors::ButtonFace;
	this->label3->Location = System::Drawing::Point(670, -5);
	this->label3->Name = L"label3";
	this->label3->Size = System::Drawing::Size(31, 32);
	this->label3->TabIndex = 9;
	this->label3->Text = L"X";
	this->label3->Click += gcnew System::EventHandler(this, &Phone_InForm::label3_Click);
	this->label3->MouseLeave += gcnew System::EventHandler(this, &Phone_InForm::label3_MouseLeave);
	this->label3->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Phone_InForm::label3_MouseMove);
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
	this->menuStrip1->TabIndex = 8;
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
	this->mainMenuToolStripMenuItem->Click += gcnew System::EventHandler(this, &Phone_InForm::mainMenuToolStripMenuItem_Click);
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
	this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Phone_InForm::exitToolStripMenuItem_Click);
	// 
	// aboutToolStripMenuItem
	// 
	this->aboutToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
		static_cast<System::Int32>(static_cast<System::Byte>(176)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
	this->aboutToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	this->aboutToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ButtonFace;
	this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
	this->aboutToolStripMenuItem->Size = System::Drawing::Size(72, 23);
	this->aboutToolStripMenuItem->Text = L"About";
	this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &Phone_InForm::aboutToolStripMenuItem_Click);
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
	this->panel1->TabIndex = 11;
	// 
	// label2
	// 
	this->label2->AutoSize = true;
	this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)), static_cast<System::Int32>(static_cast<System::Byte>(176)),
		static_cast<System::Int32>(static_cast<System::Byte>(37)));
	this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	this->label2->ForeColor = System::Drawing::Color::White;
	this->label2->Location = System::Drawing::Point(121, 27);
	this->label2->Name = L"label2";
	this->label2->Size = System::Drawing::Size(472, 47);
	this->label2->TabIndex = 1;
	this->label2->Text = L"PHONE REPLANISHMENT";
	this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
	// 
	// panel2
	// 
	this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)), static_cast<System::Int32>(static_cast<System::Byte>(176)),
		static_cast<System::Int32>(static_cast<System::Byte>(37)));
	this->panel2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)), static_cast<System::Int32>(static_cast<System::Byte>(176)),
		static_cast<System::Int32>(static_cast<System::Byte>(37)));
	this->panel2->Location = System::Drawing::Point(348, 156);
	this->panel2->Name = L"panel2";
	this->panel2->Size = System::Drawing::Size(5, 414);
	this->panel2->TabIndex = 13;
	// 
	// label4
	// 
	this->label4->AutoSize = true;
	this->label4->BackColor = System::Drawing::Color::Transparent;
	this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	this->label4->ForeColor = System::Drawing::Color::White;
	this->label4->Location = System::Drawing::Point(6, 364);
	this->label4->Name = L"label4";
	this->label4->Size = System::Drawing::Size(239, 19);
	this->label4->TabIndex = 40;
	this->label4->Text = L"Максимальна сума поповнення";
	// 
	// MaxSummOfPhoneRepl
	// 
	this->MaxSummOfPhoneRepl->BackColor = System::Drawing::Color::Transparent;
	this->MaxSummOfPhoneRepl->BorderColor = System::Drawing::Color::Empty;
	this->MaxSummOfPhoneRepl->BorderRadius = 10;
	this->MaxSummOfPhoneRepl->Enabled = false;
	this->MaxSummOfPhoneRepl->FillColor = System::Drawing::Color::White;
	this->MaxSummOfPhoneRepl->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
	this->MaxSummOfPhoneRepl->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
	this->MaxSummOfPhoneRepl->ForeColors = System::Drawing::Color::Gray;
	this->MaxSummOfPhoneRepl->IsPassword = false;
	this->MaxSummOfPhoneRepl->LineThickness = 2;
	this->MaxSummOfPhoneRepl->Location = System::Drawing::Point(247, 349);
	this->MaxSummOfPhoneRepl->Margin = System::Windows::Forms::Padding(4);
	this->MaxSummOfPhoneRepl->MaxLength = 32767;
	this->MaxSummOfPhoneRepl->MouseOnHover = System::Drawing::Color::DarkGray;
	this->MaxSummOfPhoneRepl->Name = L"MaxSummOfPhoneRepl";
	this->MaxSummOfPhoneRepl->OnCursor = System::Windows::Forms::Cursors::IBeam;
	this->MaxSummOfPhoneRepl->OnFocusColor = System::Drawing::Color::DarkGray;
	this->MaxSummOfPhoneRepl->OnFocusFontColor = System::Drawing::Color::Gray;
	this->MaxSummOfPhoneRepl->ReadOnly = false;
	this->MaxSummOfPhoneRepl->Size = System::Drawing::Size(99, 51);
	this->MaxSummOfPhoneRepl->TabIndex = 39;
	this->MaxSummOfPhoneRepl->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
	this->MaxSummOfPhoneRepl->TextName = L"1000";
	// 
	// SummOfPhoneRepl
	// 
	this->SummOfPhoneRepl->BackColor = System::Drawing::Color::Transparent;
	this->SummOfPhoneRepl->BorderColor = System::Drawing::Color::Empty;
	this->SummOfPhoneRepl->BorderRadius = 20;
	this->SummOfPhoneRepl->FillColor = System::Drawing::Color::White;
	this->SummOfPhoneRepl->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
	this->SummOfPhoneRepl->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
	this->SummOfPhoneRepl->ForeColors = System::Drawing::Color::Gray;
	this->SummOfPhoneRepl->IsPassword = false;
	this->SummOfPhoneRepl->LineThickness = 2;
	this->SummOfPhoneRepl->Location = System::Drawing::Point(69, 179);
	this->SummOfPhoneRepl->Margin = System::Windows::Forms::Padding(4);
	this->SummOfPhoneRepl->MaxLength = 32767;
	this->SummOfPhoneRepl->MouseOnHover = System::Drawing::Color::DarkGray;
	this->SummOfPhoneRepl->Name = L"SummOfPhoneRepl";
	this->SummOfPhoneRepl->OnCursor = System::Windows::Forms::Cursors::IBeam;
	this->SummOfPhoneRepl->OnFocusColor = System::Drawing::Color::DarkGray;
	this->SummOfPhoneRepl->OnFocusFontColor = System::Drawing::Color::Gray;
	this->SummOfPhoneRepl->ReadOnly = false;
	this->SummOfPhoneRepl->Size = System::Drawing::Size(218, 51);
	this->SummOfPhoneRepl->TabIndex = 38;
	this->SummOfPhoneRepl->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
	this->SummOfPhoneRepl->TextName = L"";
	// 
	// label1
	// 
	this->label1->AutoSize = true;
	this->label1->BackColor = System::Drawing::Color::Transparent;
	this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	this->label1->ForeColor = System::Drawing::Color::White;
	this->label1->Location = System::Drawing::Point(41, 156);
	this->label1->Name = L"label1";
	this->label1->Size = System::Drawing::Size(273, 20);
	this->label1->TabIndex = 37;
	this->label1->Text = L"Введіть суму поповнення (кратну 5)";
	// 
	// label6
	// 
	this->label6->AutoSize = true;
	this->label6->BackColor = System::Drawing::Color::Transparent;
	this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	this->label6->ForeColor = System::Drawing::Color::White;
	this->label6->Location = System::Drawing::Point(6, 428);
	this->label6->Name = L"label6";
	this->label6->Size = System::Drawing::Size(134, 19);
	this->label6->TabIndex = 42;
	this->label6->Text = L"Номер телефону";
	// 
	// PhoneNumberTxt
	// 
	this->PhoneNumberTxt->BackColor = System::Drawing::Color::Transparent;
	this->PhoneNumberTxt->BorderColor = System::Drawing::Color::Empty;
	this->PhoneNumberTxt->BorderRadius = 10;
	this->PhoneNumberTxt->FillColor = System::Drawing::Color::White;
	this->PhoneNumberTxt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
	this->PhoneNumberTxt->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
	this->PhoneNumberTxt->ForeColors = System::Drawing::Color::Gray;
	this->PhoneNumberTxt->IsPassword = false;
	this->PhoneNumberTxt->LineThickness = 2;
	this->PhoneNumberTxt->Location = System::Drawing::Point(146, 410);
	this->PhoneNumberTxt->Margin = System::Windows::Forms::Padding(4);
	this->PhoneNumberTxt->MaxLength = 32767;
	this->PhoneNumberTxt->MouseOnHover = System::Drawing::Color::DarkGray;
	this->PhoneNumberTxt->Name = L"PhoneNumberTxt";
	this->PhoneNumberTxt->OnCursor = System::Windows::Forms::Cursors::IBeam;
	this->PhoneNumberTxt->OnFocusColor = System::Drawing::Color::DarkGray;
	this->PhoneNumberTxt->OnFocusFontColor = System::Drawing::Color::Gray;
	this->PhoneNumberTxt->ReadOnly = false;
	this->PhoneNumberTxt->Size = System::Drawing::Size(200, 51);
	this->PhoneNumberTxt->TabIndex = 41;
	this->PhoneNumberTxt->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
	this->PhoneNumberTxt->TextName = L"380";
	// 
	// PhoneReplButton
	// 
	this->PhoneReplButton->BackColor = System::Drawing::Color::Transparent;
	this->PhoneReplButton->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
		static_cast<System::Int32>(static_cast<System::Byte>(176)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
	this->PhoneReplButton->BorderColor = System::Drawing::Color::White;
	this->PhoneReplButton->BorderRadius = 23;
	this->PhoneReplButton->ButtonText = L"ПОПОВНИТИ";
	this->PhoneReplButton->Font = (gcnew System::Drawing::Font(L"Verdana", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->PhoneReplButton->Font_Size = (gcnew System::Drawing::Font(L"Verdana", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->PhoneReplButton->ForeColors = System::Drawing::Color::WhiteSmoke;
	this->PhoneReplButton->HoverBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
		static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
	this->PhoneReplButton->HoverBorder = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
		static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
	this->PhoneReplButton->HoverFontColor = System::Drawing::Color::White;
	this->PhoneReplButton->LineThickness = 2;
	this->PhoneReplButton->Location = System::Drawing::Point(374, 517);
	this->PhoneReplButton->Margin = System::Windows::Forms::Padding(4);
	this->PhoneReplButton->Name = L"PhoneReplButton";
	this->PhoneReplButton->Size = System::Drawing::Size(304, 52);
	this->PhoneReplButton->TabIndex = 49;
	this->PhoneReplButton->Click += gcnew System::EventHandler(this, &Phone_InForm::PhoneReplButton_click);
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
	this->Button200->Location = System::Drawing::Point(528, 393);
	this->Button200->Margin = System::Windows::Forms::Padding(12, 12, 12, 12);
	this->Button200->Name = L"Button200";
	this->Button200->Size = System::Drawing::Size(150, 117);
	this->Button200->TabIndex = 48;
	this->Button200->Click += gcnew System::EventHandler(this, &Phone_InForm::Button200_Click);
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
	this->Button100->Location = System::Drawing::Point(374, 393);
	this->Button100->Margin = System::Windows::Forms::Padding(12, 12, 12, 12);
	this->Button100->Name = L"Button100";
	this->Button100->Size = System::Drawing::Size(150, 117);
	this->Button100->TabIndex = 47;
	this->Button100->Click += gcnew System::EventHandler(this, &Phone_InForm::Button100_Click);
	// 
	// Button50
	// 
	this->Button50->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
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
	this->Button50->Location = System::Drawing::Point(528, 273);
	this->Button50->Margin = System::Windows::Forms::Padding(12, 12, 12, 12);
	this->Button50->Name = L"Button50";
	this->Button50->Size = System::Drawing::Size(150, 117);
	this->Button50->TabIndex = 46;
	this->Button50->Click += gcnew System::EventHandler(this, &Phone_InForm::Button50_Click);
	// 
	// Button20
	// 
	this->Button20->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
	this->Button20->BackColor = System::Drawing::Color::Transparent;
	this->Button20->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)), static_cast<System::Int32>(static_cast<System::Byte>(176)),
		static_cast<System::Int32>(static_cast<System::Byte>(37)));
	this->Button20->BorderColor = System::Drawing::Color::White;
	this->Button20->BorderRadius = 15;
	this->Button20->ButtonText = L"20";
	this->Button20->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold));
	this->Button20->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold));
	this->Button20->ForeColors = System::Drawing::SystemColors::ControlLight;
	this->Button20->HoverBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
		static_cast<System::Int32>(static_cast<System::Byte>(242)));
	this->Button20->HoverBorder = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
		static_cast<System::Int32>(static_cast<System::Byte>(242)));
	this->Button20->HoverFontColor = System::Drawing::Color::White;
	this->Button20->ImeMode = System::Windows::Forms::ImeMode::NoControl;
	this->Button20->LineThickness = 2;
	this->Button20->Location = System::Drawing::Point(374, 273);
	this->Button20->Margin = System::Windows::Forms::Padding(12, 12, 12, 12);
	this->Button20->Name = L"Button20";
	this->Button20->Size = System::Drawing::Size(150, 117);
	this->Button20->TabIndex = 45;
	this->Button20->Click += gcnew System::EventHandler(this, &Phone_InForm::Button20_Click);
	// 
	// Button10
	// 
	this->Button10->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
	this->Button10->BackColor = System::Drawing::Color::Transparent;
	this->Button10->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)), static_cast<System::Int32>(static_cast<System::Byte>(176)),
		static_cast<System::Int32>(static_cast<System::Byte>(37)));
	this->Button10->BorderColor = System::Drawing::Color::White;
	this->Button10->BorderRadius = 15;
	this->Button10->ButtonText = L"10";
	this->Button10->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold));
	this->Button10->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold));
	this->Button10->ForeColors = System::Drawing::SystemColors::ControlLight;
	this->Button10->HoverBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
		static_cast<System::Int32>(static_cast<System::Byte>(242)));
	this->Button10->HoverBorder = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
		static_cast<System::Int32>(static_cast<System::Byte>(242)));
	this->Button10->HoverFontColor = System::Drawing::Color::White;
	this->Button10->ImeMode = System::Windows::Forms::ImeMode::NoControl;
	this->Button10->LineThickness = 2;
	this->Button10->Location = System::Drawing::Point(528, 153);
	this->Button10->Margin = System::Windows::Forms::Padding(12, 12, 12, 12);
	this->Button10->Name = L"Button10";
	this->Button10->Size = System::Drawing::Size(150, 117);
	this->Button10->TabIndex = 44;
	this->Button10->Click += gcnew System::EventHandler(this, &Phone_InForm::Button10_Click);
	// 
	// Button5
	// 
	this->Button5->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
	this->Button5->BackColor = System::Drawing::Color::Transparent;
	this->Button5->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)), static_cast<System::Int32>(static_cast<System::Byte>(176)),
		static_cast<System::Int32>(static_cast<System::Byte>(37)));
	this->Button5->BorderColor = System::Drawing::Color::White;
	this->Button5->BorderRadius = 15;
	this->Button5->ButtonText = L"5";
	this->Button5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold));
	this->Button5->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold));
	this->Button5->ForeColors = System::Drawing::SystemColors::ControlLight;
	this->Button5->HoverBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
		static_cast<System::Int32>(static_cast<System::Byte>(242)));
	this->Button5->HoverBorder = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
		static_cast<System::Int32>(static_cast<System::Byte>(242)));
	this->Button5->HoverFontColor = System::Drawing::Color::White;
	this->Button5->ImeMode = System::Windows::Forms::ImeMode::NoControl;
	this->Button5->LineThickness = 2;
	this->Button5->Location = System::Drawing::Point(374, 153);
	this->Button5->Margin = System::Windows::Forms::Padding(12, 12, 12, 12);
	this->Button5->Name = L"Button5";
	this->Button5->Size = System::Drawing::Size(150, 117);
	this->Button5->TabIndex = 43;
	this->Button5->Click += gcnew System::EventHandler(this, &Phone_InForm::Button5_Click);
	// 
	// jDragControl1
	// 
	this->jDragControl1->GetForm = this;
	this->jDragControl1->TargetControl = this->menuStrip1;
	// 
	// Phone_InForm
	// 
	this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
	this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
	this->BackColor = System::Drawing::Color::White;
	this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
	this->ClientSize = System::Drawing::Size(700, 584);
	this->Controls->Add(this->PhoneReplButton);
	this->Controls->Add(this->Button200);
	this->Controls->Add(this->Button100);
	this->Controls->Add(this->Button50);
	this->Controls->Add(this->Button20);
	this->Controls->Add(this->Button10);
	this->Controls->Add(this->Button5);
	this->Controls->Add(this->label6);
	this->Controls->Add(this->PhoneNumberTxt);
	this->Controls->Add(this->label4);
	this->Controls->Add(this->MaxSummOfPhoneRepl);
	this->Controls->Add(this->SummOfPhoneRepl);
	this->Controls->Add(this->label1);
	this->Controls->Add(this->panel2);
	this->Controls->Add(this->panel1);
	this->Controls->Add(this->label3);
	this->Controls->Add(this->menuStrip1);
	this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
	this->Name = L"Phone_InForm";
	this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
	this->Text = L"Phone_InForm";
	this->menuStrip1->ResumeLayout(false);
	this->menuStrip1->PerformLayout();
	this->panel1->ResumeLayout(false);
	this->panel1->PerformLayout();
	this->ResumeLayout(false);
	this->PerformLayout();

}

inline System::Void Diploma::Phone_InForm::label3_Click(System::Object^ sender, System::EventArgs^ e) {
	exit(0);
}
inline System::Void Diploma::Phone_InForm::label3_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	this->label3->ForeColor = System::Drawing::Color::Tomato;
}
inline System::Void Diploma::Phone_InForm::label3_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	this->label3->ForeColor = System::Drawing::Color::Gainsboro;
}
inline System::Void Diploma::Phone_InForm::mainMenuToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
inline System::Void Diploma::Phone_InForm::exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	exit(0);
}
inline System::Void Diploma::Phone_InForm::aboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("This is Phone replanishment form.\nU can choose your own summ or select fixed buttons.\nGood luck.");
}
inline System::Void Diploma::Phone_InForm::PhoneReplButton_click(System::Object^ sender, System::EventArgs^ e) {
	int SummTxt;
	try {
		SummTxt = Convert::ToInt32(SummOfPhoneRepl->TextName);
	}
	catch (const System::OverflowException^ ex1) {
		MessageBox::Show("Number to small or to large for int type!");
		ex1;
	}
	catch (const System::FormatException^ ex2) {
		MessageBox::Show("Incorect format!");
		ex2;
	}
	if (SummOfPhoneRepl->TextName == "") {
		MessageBox::Show("Summ can`t be empty");
	}
	if (SummOfPhoneRepl->TextName != "") {

		SummTxt = Convert::ToInt32(SummOfPhoneRepl->TextName);
	}
	if (SummTxt > Convert::ToInt32(n->Balance))
	{
		MessageBox::Show("Not enought money on balance");
	}
	if (SummTxt < 5 || SummTxt > 1000 || SummTxt % 5 != 0) {
		MessageBox::Show("Input summ between 5 and 1000 and multiple of five");
	}
	else {
		SummTxt = Convert::ToInt32(SummOfPhoneRepl->TextName);
		f4.UpdateBalance(n, -SummTxt);
		this->Hide();
		EndForm^ _EndForm4 = gcnew EndForm();
		_EndForm4->ShowDialog();
	}
}
inline System::Void Diploma::Phone_InForm::Button5_Click(System::Object^ sender, System::EventArgs^ e) {
	int SummTxt1 = 5;
	if (SummTxt1 > Convert::ToInt32(n->Balance))
	{
		MessageBox::Show("Not enought money on balance");
	}
	f4.UpdateBalance(n, -5);
	this->Hide();
	EndForm^ _EndForm2 = gcnew EndForm();
	_EndForm2->ShowDialog();
}
inline System::Void Diploma::Phone_InForm::Button10_Click(System::Object^ sender, System::EventArgs^ e) {
	int SummTxt1 = 10;
	if (SummTxt1 > Convert::ToInt32(n->Balance))
	{
		MessageBox::Show("Not enought money on balance");
	}
	f4.UpdateBalance(n, -10);
	this->Hide();
	EndForm^ _EndForm2 = gcnew EndForm();
	_EndForm2->ShowDialog();
}
inline System::Void Diploma::Phone_InForm::Button20_Click(System::Object^ sender, System::EventArgs^ e) {
	int SummTxt1 = 20;
	if (SummTxt1 > Convert::ToInt32(n->Balance))
	{
		MessageBox::Show("Not enought money on balance");
	}
	f4.UpdateBalance(n, -20);
	this->Hide();
	EndForm^ _EndForm2 = gcnew EndForm();
	_EndForm2->ShowDialog();
}
inline System::Void Diploma::Phone_InForm::Button50_Click(System::Object^ sender, System::EventArgs^ e) {
	int SummTxt1 = 50;
	if (SummTxt1 > Convert::ToInt32(n->Balance))
	{
		MessageBox::Show("Not enought money on balance");
	}
	f4.UpdateBalance(n, -50);
	this->Hide();
	EndForm^ _EndForm2 = gcnew EndForm();
	_EndForm2->ShowDialog();
}
inline System::Void Diploma::Phone_InForm::Button100_Click(System::Object^ sender, System::EventArgs^ e) {
	int SummTxt1 = 100;
	if (SummTxt1 > Convert::ToInt32(n->Balance))
	{
		MessageBox::Show("Not enought money on balance");
	}
	f4.UpdateBalance(n, -100);
	this->Hide();
	EndForm^ _EndForm2 = gcnew EndForm();
	_EndForm2->ShowDialog();
}
inline System::Void Diploma::Phone_InForm::Button200_Click(System::Object^ sender, System::EventArgs^ e) {
	int SummTxt1 = 200;
	if (SummTxt1 > Convert::ToInt32(n->Balance))
	{
		MessageBox::Show("Not enought money on balance");
	}
	f4.UpdateBalance(n, -200);
	this->Hide();
	EndForm^ _EndForm2 = gcnew EndForm();
	_EndForm2->ShowDialog();
}
