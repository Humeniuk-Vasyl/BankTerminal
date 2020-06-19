#include "ConversionForm.h"

inline Diploma::ConversionForm::ConversionForm(void)
{
	InitializeComponent();
}

/// delete all

inline Diploma::ConversionForm::~ConversionForm()
{
	if (components)
	{
		delete components;
	}
}

/// func for designer. don`t change

inline void Diploma::ConversionForm::InitializeComponent(void)
{
	this->components = (gcnew System::ComponentModel::Container());
	this->panel1 = (gcnew System::Windows::Forms::Panel());
	this->label3 = (gcnew System::Windows::Forms::Label());
	this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
	this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
	this->mainMenuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
	this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
	this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
	this->label2 = (gcnew System::Windows::Forms::Label());
	this->panel2 = (gcnew System::Windows::Forms::Panel());
	this->—urrencyNumber2 = (gcnew ::JMetroTextBox::JMetroTextBox());
	this->—urrencyNumber1 = (gcnew ::JMetroTextBox::JMetroTextBox());
	this->label1 = (gcnew System::Windows::Forms::Label());
	this->CurrencyBox1 = (gcnew System::Windows::Forms::ListBox());
	this->CurrencyBox2 = (gcnew System::Windows::Forms::ListBox());
	this->label4 = (gcnew System::Windows::Forms::Label());
	this->label5 = (gcnew System::Windows::Forms::Label());
	this->jMetroTextBox3 = (gcnew ::JMetroTextBox::JMetroTextBox());
	this->jMetroTextBox4 = (gcnew ::JMetroTextBox::JMetroTextBox());
	this->label6 = (gcnew System::Windows::Forms::Label());
	this->label7 = (gcnew System::Windows::Forms::Label());
	this->label8 = (gcnew System::Windows::Forms::Label());
	this->label9 = (gcnew System::Windows::Forms::Label());
	this->jMetroTextBox5 = (gcnew ::JMetroTextBox::JMetroTextBox());
	this->jMetroTextBox6 = (gcnew ::JMetroTextBox::JMetroTextBox());
	this->label10 = (gcnew System::Windows::Forms::Label());
	this->label11 = (gcnew System::Windows::Forms::Label());
	this->jMetroTextBox7 = (gcnew ::JMetroTextBox::JMetroTextBox());
	this->jMetroTextBox8 = (gcnew ::JMetroTextBox::JMetroTextBox());
	this->label12 = (gcnew System::Windows::Forms::Label());
	this->label13 = (gcnew System::Windows::Forms::Label());
	this->jMetroTextBox9 = (gcnew ::JMetroTextBox::JMetroTextBox());
	this->jMetroTextBox10 = (gcnew ::JMetroTextBox::JMetroTextBox());
	this->CalculateButton = (gcnew ::JThinButton::JThinButton());
	this->AdditionallyButton = (gcnew ::JThinButton::JThinButton());
	this->jDragControl1 = (gcnew ::JDragControl::JDragControl(this->components));
	this->panel1->SuspendLayout();
	this->menuStrip1->SuspendLayout();
	this->SuspendLayout();
	// 
	// panel1
	// 
	this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
		static_cast<System::Int32>(static_cast<System::Byte>(37)));
	this->panel1->Controls->Add(this->label3);
	this->panel1->Controls->Add(this->menuStrip1);
	this->panel1->Controls->Add(this->label2);
	this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
	this->panel1->Location = System::Drawing::Point(0, 0);
	this->panel1->Name = L"panel1";
	this->panel1->Size = System::Drawing::Size(700, 106);
	this->panel1->TabIndex = 39;
	// 
	// label3
	// 
	this->label3->AutoSize = true;
	this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
		static_cast<System::Int32>(static_cast<System::Byte>(37)));
	this->label3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->label3->ForeColor = System::Drawing::SystemColors::ButtonFace;
	this->label3->Location = System::Drawing::Point(672, -5);
	this->label3->Name = L"label3";
	this->label3->Size = System::Drawing::Size(31, 32);
	this->label3->TabIndex = 12;
	this->label3->Text = L"X";
	this->label3->Click += gcnew System::EventHandler(this, &ConversionForm::label3_Click);
	this->label3->MouseLeave += gcnew System::EventHandler(this, &ConversionForm::label3_MouseLeave);
	this->label3->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &ConversionForm::label3_MouseMove);
	// 
	// menuStrip1
	// 
	this->menuStrip1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
		static_cast<System::Int32>(static_cast<System::Byte>(37)));
	this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
	this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
		this->fileToolStripMenuItem,
			this->aboutToolStripMenuItem
	});
	this->menuStrip1->Location = System::Drawing::Point(0, 0);
	this->menuStrip1->Name = L"menuStrip1";
	this->menuStrip1->Size = System::Drawing::Size(700, 28);
	this->menuStrip1->TabIndex = 11;
	this->menuStrip1->Text = L"menuStrip1";
	// 
	// fileToolStripMenuItem
	// 
	this->fileToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
		static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
	this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
		this->mainMenuToolStripMenuItem,
			this->exitToolStripMenuItem
	});
	this->fileToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	this->fileToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ButtonFace;
	this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
	this->fileToolStripMenuItem->Size = System::Drawing::Size(84, 24);
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
	this->mainMenuToolStripMenuItem->Click += gcnew System::EventHandler(this, &ConversionForm::mainMenuToolStripMenuItem_Click);
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
	this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &ConversionForm::exitToolStripMenuItem_Click);
	// 
	// aboutToolStripMenuItem
	// 
	this->aboutToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
		static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
	this->aboutToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	this->aboutToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ButtonFace;
	this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
	this->aboutToolStripMenuItem->Size = System::Drawing::Size(72, 24);
	this->aboutToolStripMenuItem->Text = L"About";
	this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &ConversionForm::aboutToolStripMenuItem_Click);
	// 
	// label2
	// 
	this->label2->AutoSize = true;
	this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
		static_cast<System::Int32>(static_cast<System::Byte>(37)));
	this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	this->label2->ForeColor = System::Drawing::Color::White;
	this->label2->Location = System::Drawing::Point(48, 34);
	this->label2->Name = L"label2";
	this->label2->Size = System::Drawing::Size(616, 49);
	this->label2->TabIndex = 1;
	this->label2->Text = L"CONVERSION AND BUY/SALE";
	this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
	// 
	// panel2
	// 
	this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
		static_cast<System::Int32>(static_cast<System::Byte>(37)));
	this->panel2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
		static_cast<System::Int32>(static_cast<System::Byte>(37)));
	this->panel2->Location = System::Drawing::Point(349, 140);
	this->panel2->Name = L"panel2";
	this->panel2->Size = System::Drawing::Size(5, 414);
	this->panel2->TabIndex = 50;
	// 
	// —urrencyNumber2
	// 
	this->—urrencyNumber2->BackColor = System::Drawing::Color::Transparent;
	this->—urrencyNumber2->BorderColor = System::Drawing::Color::Empty;
	this->—urrencyNumber2->BorderRadius = 20;
	this->—urrencyNumber2->Enabled = false;
	this->—urrencyNumber2->FillColor = System::Drawing::Color::White;
	this->—urrencyNumber2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
	this->—urrencyNumber2->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
	this->—urrencyNumber2->ForeColors = System::Drawing::Color::Gray;
	this->—urrencyNumber2->IsPassword = false;
	this->—urrencyNumber2->LineThickness = 2;
	this->—urrencyNumber2->Location = System::Drawing::Point(71, 336);
	this->—urrencyNumber2->Margin = System::Windows::Forms::Padding(4);
	this->—urrencyNumber2->MaxLength = 32767;
	this->—urrencyNumber2->MouseOnHover = System::Drawing::Color::DarkGray;
	this->—urrencyNumber2->Name = L"—urrencyNumber2";
	this->—urrencyNumber2->OnCursor = System::Windows::Forms::Cursors::IBeam;
	this->—urrencyNumber2->OnFocusColor = System::Drawing::Color::DarkGray;
	this->—urrencyNumber2->OnFocusFontColor = System::Drawing::Color::Gray;
	this->—urrencyNumber2->ReadOnly = false;
	this->—urrencyNumber2->Size = System::Drawing::Size(218, 51);
	this->—urrencyNumber2->TabIndex = 58;
	this->—urrencyNumber2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
	this->—urrencyNumber2->TextName = L"1";
	// 
	// —urrencyNumber1
	// 
	this->—urrencyNumber1->BackColor = System::Drawing::Color::Transparent;
	this->—urrencyNumber1->BorderColor = System::Drawing::Color::Empty;
	this->—urrencyNumber1->BorderRadius = 20;
	this->—urrencyNumber1->FillColor = System::Drawing::Color::White;
	this->—urrencyNumber1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
	this->—urrencyNumber1->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
	this->—urrencyNumber1->ForeColors = System::Drawing::Color::Gray;
	this->—urrencyNumber1->IsPassword = false;
	this->—urrencyNumber1->LineThickness = 2;
	this->—urrencyNumber1->Location = System::Drawing::Point(71, 242);
	this->—urrencyNumber1->Margin = System::Windows::Forms::Padding(4);
	this->—urrencyNumber1->MaxLength = 32767;
	this->—urrencyNumber1->MouseOnHover = System::Drawing::Color::DarkGray;
	this->—urrencyNumber1->Name = L"—urrencyNumber1";
	this->—urrencyNumber1->OnCursor = System::Windows::Forms::Cursors::IBeam;
	this->—urrencyNumber1->OnFocusColor = System::Drawing::Color::DarkGray;
	this->—urrencyNumber1->OnFocusFontColor = System::Drawing::Color::Gray;
	this->—urrencyNumber1->ReadOnly = false;
	this->—urrencyNumber1->Size = System::Drawing::Size(218, 51);
	this->—urrencyNumber1->TabIndex = 57;
	this->—urrencyNumber1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
	this->—urrencyNumber1->TextName = L"1";
	// 
	// label1
	// 
	this->label1->AutoSize = true;
	this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	this->label1->Location = System::Drawing::Point(71, 217);
	this->label1->Name = L"label1";
	this->label1->Size = System::Drawing::Size(216, 21);
	this->label1->TabIndex = 56;
	this->label1->Text = L"¬‚Â‰≥Ú¸ ÒÛÏÛ ÍÓÌ‚ÂÚ‡ˆ≥ø";
	// 
	// CurrencyBox1
	// 
	this->CurrencyBox1->FormattingEnabled = true;
	this->CurrencyBox1->ItemHeight = 16;
	this->CurrencyBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"UAH", L"USD", L"EUR", L"GBP", L"RUB" });
	this->CurrencyBox1->Location = System::Drawing::Point(120, 301);
	this->CurrencyBox1->Name = L"CurrencyBox1";
	this->CurrencyBox1->Size = System::Drawing::Size(120, 20);
	this->CurrencyBox1->TabIndex = 59;
	// 
	// CurrencyBox2
	// 
	this->CurrencyBox2->FormattingEnabled = true;
	this->CurrencyBox2->ItemHeight = 16;
	this->CurrencyBox2->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"UAH", L"USD", L"EUR", L"GBP", L"RUB" });
	this->CurrencyBox2->Location = System::Drawing::Point(120, 397);
	this->CurrencyBox2->Name = L"CurrencyBox2";
	this->CurrencyBox2->Size = System::Drawing::Size(120, 20);
	this->CurrencyBox2->TabIndex = 60;
	// 
	// label4
	// 
	this->label4->AutoSize = true;
	this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	this->label4->Location = System::Drawing::Point(382, 162);
	this->label4->Name = L"label4";
	this->label4->Size = System::Drawing::Size(291, 23);
	this->label4->TabIndex = 61;
	this->label4->Text = L"¬≥‰ÌÓ¯ÂÌÌˇ ÍÛÔ≥‚Î≥/ÔÓ‰‡ÊÛ";
	// 
	// label5
	// 
	this->label5->AutoSize = true;
	this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	this->label5->Location = System::Drawing::Point(442, 185);
	this->label5->Name = L"label5";
	this->label5->Size = System::Drawing::Size(174, 23);
	this->label5->TabIndex = 62;
	this->label5->Text = L"(‚≥‰ÌÓÒÌÓ „Ë‚Ì≥)";
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
	this->jMetroTextBox3->Location = System::Drawing::Point(451, 227);
	this->jMetroTextBox3->Margin = System::Windows::Forms::Padding(4);
	this->jMetroTextBox3->MaxLength = 32767;
	this->jMetroTextBox3->MouseOnHover = System::Drawing::Color::DarkGray;
	this->jMetroTextBox3->Name = L"jMetroTextBox3";
	this->jMetroTextBox3->OnCursor = System::Windows::Forms::Cursors::IBeam;
	this->jMetroTextBox3->OnFocusColor = System::Drawing::Color::DarkGray;
	this->jMetroTextBox3->OnFocusFontColor = System::Drawing::Color::Gray;
	this->jMetroTextBox3->ReadOnly = false;
	this->jMetroTextBox3->Size = System::Drawing::Size(85, 51);
	this->jMetroTextBox3->TabIndex = 63;
	this->jMetroTextBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
	this->jMetroTextBox3->TextName = L"26,50";
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
	this->jMetroTextBox4->Location = System::Drawing::Point(553, 227);
	this->jMetroTextBox4->Margin = System::Windows::Forms::Padding(4);
	this->jMetroTextBox4->MaxLength = 32767;
	this->jMetroTextBox4->MouseOnHover = System::Drawing::Color::DarkGray;
	this->jMetroTextBox4->Name = L"jMetroTextBox4";
	this->jMetroTextBox4->OnCursor = System::Windows::Forms::Cursors::IBeam;
	this->jMetroTextBox4->OnFocusColor = System::Drawing::Color::DarkGray;
	this->jMetroTextBox4->OnFocusFontColor = System::Drawing::Color::Gray;
	this->jMetroTextBox4->ReadOnly = false;
	this->jMetroTextBox4->Size = System::Drawing::Size(85, 51);
	this->jMetroTextBox4->TabIndex = 64;
	this->jMetroTextBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
	this->jMetroTextBox4->TextName = L"26,81";
	// 
	// label6
	// 
	this->label6->AutoSize = true;
	this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	this->label6->Location = System::Drawing::Point(394, 238);
	this->label6->Name = L"label6";
	this->label6->Size = System::Drawing::Size(59, 30);
	this->label6->TabIndex = 65;
	this->label6->Text = L"USD";
	// 
	// label7
	// 
	this->label7->AutoSize = true;
	this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	this->label7->Location = System::Drawing::Point(538, 240);
	this->label7->Name = L"label7";
	this->label7->Size = System::Drawing::Size(17, 21);
	this->label7->TabIndex = 66;
	this->label7->Text = L"/";
	// 
	// label8
	// 
	this->label8->AutoSize = true;
	this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	this->label8->Location = System::Drawing::Point(538, 292);
	this->label8->Name = L"label8";
	this->label8->Size = System::Drawing::Size(17, 21);
	this->label8->TabIndex = 70;
	this->label8->Text = L"/";
	// 
	// label9
	// 
	this->label9->AutoSize = true;
	this->label9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	this->label9->Location = System::Drawing::Point(394, 290);
	this->label9->Name = L"label9";
	this->label9->Size = System::Drawing::Size(57, 30);
	this->label9->TabIndex = 69;
	this->label9->Text = L"EUR";
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
	this->jMetroTextBox5->Location = System::Drawing::Point(553, 279);
	this->jMetroTextBox5->Margin = System::Windows::Forms::Padding(4);
	this->jMetroTextBox5->MaxLength = 32767;
	this->jMetroTextBox5->MouseOnHover = System::Drawing::Color::DarkGray;
	this->jMetroTextBox5->Name = L"jMetroTextBox5";
	this->jMetroTextBox5->OnCursor = System::Windows::Forms::Cursors::IBeam;
	this->jMetroTextBox5->OnFocusColor = System::Drawing::Color::DarkGray;
	this->jMetroTextBox5->OnFocusFontColor = System::Drawing::Color::Gray;
	this->jMetroTextBox5->ReadOnly = false;
	this->jMetroTextBox5->Size = System::Drawing::Size(85, 51);
	this->jMetroTextBox5->TabIndex = 68;
	this->jMetroTextBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
	this->jMetroTextBox5->TextName = L"30,38";
	// 
	// jMetroTextBox6
	// 
	this->jMetroTextBox6->BackColor = System::Drawing::Color::Transparent;
	this->jMetroTextBox6->BorderColor = System::Drawing::Color::Empty;
	this->jMetroTextBox6->BorderRadius = 10;
	this->jMetroTextBox6->Enabled = false;
	this->jMetroTextBox6->FillColor = System::Drawing::Color::White;
	this->jMetroTextBox6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
	this->jMetroTextBox6->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
	this->jMetroTextBox6->ForeColors = System::Drawing::Color::Gray;
	this->jMetroTextBox6->IsPassword = false;
	this->jMetroTextBox6->LineThickness = 2;
	this->jMetroTextBox6->Location = System::Drawing::Point(451, 279);
	this->jMetroTextBox6->Margin = System::Windows::Forms::Padding(4);
	this->jMetroTextBox6->MaxLength = 32767;
	this->jMetroTextBox6->MouseOnHover = System::Drawing::Color::DarkGray;
	this->jMetroTextBox6->Name = L"jMetroTextBox6";
	this->jMetroTextBox6->OnCursor = System::Windows::Forms::Cursors::IBeam;
	this->jMetroTextBox6->OnFocusColor = System::Drawing::Color::DarkGray;
	this->jMetroTextBox6->OnFocusFontColor = System::Drawing::Color::Gray;
	this->jMetroTextBox6->ReadOnly = false;
	this->jMetroTextBox6->Size = System::Drawing::Size(85, 51);
	this->jMetroTextBox6->TabIndex = 67;
	this->jMetroTextBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
	this->jMetroTextBox6->TextName = L"29,79";
	// 
	// label10
	// 
	this->label10->AutoSize = true;
	this->label10->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	this->label10->Location = System::Drawing::Point(538, 345);
	this->label10->Name = L"label10";
	this->label10->Size = System::Drawing::Size(17, 21);
	this->label10->TabIndex = 74;
	this->label10->Text = L"/";
	// 
	// label11
	// 
	this->label11->AutoSize = true;
	this->label11->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	this->label11->Location = System::Drawing::Point(394, 343);
	this->label11->Name = L"label11";
	this->label11->Size = System::Drawing::Size(58, 30);
	this->label11->TabIndex = 73;
	this->label11->Text = L"RUB";
	// 
	// jMetroTextBox7
	// 
	this->jMetroTextBox7->BackColor = System::Drawing::Color::Transparent;
	this->jMetroTextBox7->BorderColor = System::Drawing::Color::Empty;
	this->jMetroTextBox7->BorderRadius = 10;
	this->jMetroTextBox7->Enabled = false;
	this->jMetroTextBox7->FillColor = System::Drawing::Color::White;
	this->jMetroTextBox7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
	this->jMetroTextBox7->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
	this->jMetroTextBox7->ForeColors = System::Drawing::Color::Gray;
	this->jMetroTextBox7->IsPassword = false;
	this->jMetroTextBox7->LineThickness = 2;
	this->jMetroTextBox7->Location = System::Drawing::Point(553, 332);
	this->jMetroTextBox7->Margin = System::Windows::Forms::Padding(4);
	this->jMetroTextBox7->MaxLength = 32767;
	this->jMetroTextBox7->MouseOnHover = System::Drawing::Color::DarkGray;
	this->jMetroTextBox7->Name = L"jMetroTextBox7";
	this->jMetroTextBox7->OnCursor = System::Windows::Forms::Cursors::IBeam;
	this->jMetroTextBox7->OnFocusColor = System::Drawing::Color::DarkGray;
	this->jMetroTextBox7->OnFocusFontColor = System::Drawing::Color::Gray;
	this->jMetroTextBox7->ReadOnly = false;
	this->jMetroTextBox7->Size = System::Drawing::Size(85, 51);
	this->jMetroTextBox7->TabIndex = 72;
	this->jMetroTextBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
	this->jMetroTextBox7->TextName = L"0,37";
	// 
	// jMetroTextBox8
	// 
	this->jMetroTextBox8->BackColor = System::Drawing::Color::Transparent;
	this->jMetroTextBox8->BorderColor = System::Drawing::Color::Empty;
	this->jMetroTextBox8->BorderRadius = 10;
	this->jMetroTextBox8->Enabled = false;
	this->jMetroTextBox8->FillColor = System::Drawing::Color::White;
	this->jMetroTextBox8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
	this->jMetroTextBox8->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
	this->jMetroTextBox8->ForeColors = System::Drawing::Color::Gray;
	this->jMetroTextBox8->IsPassword = false;
	this->jMetroTextBox8->LineThickness = 2;
	this->jMetroTextBox8->Location = System::Drawing::Point(451, 332);
	this->jMetroTextBox8->Margin = System::Windows::Forms::Padding(4);
	this->jMetroTextBox8->MaxLength = 32767;
	this->jMetroTextBox8->MouseOnHover = System::Drawing::Color::DarkGray;
	this->jMetroTextBox8->Name = L"jMetroTextBox8";
	this->jMetroTextBox8->OnCursor = System::Windows::Forms::Cursors::IBeam;
	this->jMetroTextBox8->OnFocusColor = System::Drawing::Color::DarkGray;
	this->jMetroTextBox8->OnFocusFontColor = System::Drawing::Color::Gray;
	this->jMetroTextBox8->ReadOnly = false;
	this->jMetroTextBox8->Size = System::Drawing::Size(85, 51);
	this->jMetroTextBox8->TabIndex = 71;
	this->jMetroTextBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
	this->jMetroTextBox8->TextName = L"0,32";
	// 
	// label12
	// 
	this->label12->AutoSize = true;
	this->label12->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	this->label12->Location = System::Drawing::Point(538, 397);
	this->label12->Name = L"label12";
	this->label12->Size = System::Drawing::Size(17, 21);
	this->label12->TabIndex = 78;
	this->label12->Text = L"/";
	// 
	// label13
	// 
	this->label13->AutoSize = true;
	this->label13->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	this->label13->Location = System::Drawing::Point(394, 395);
	this->label13->Name = L"label13";
	this->label13->Size = System::Drawing::Size(56, 30);
	this->label13->TabIndex = 77;
	this->label13->Text = L"PLN";
	// 
	// jMetroTextBox9
	// 
	this->jMetroTextBox9->BackColor = System::Drawing::Color::Transparent;
	this->jMetroTextBox9->BorderColor = System::Drawing::Color::Empty;
	this->jMetroTextBox9->BorderRadius = 10;
	this->jMetroTextBox9->Enabled = false;
	this->jMetroTextBox9->FillColor = System::Drawing::Color::White;
	this->jMetroTextBox9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
	this->jMetroTextBox9->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
	this->jMetroTextBox9->ForeColors = System::Drawing::Color::Gray;
	this->jMetroTextBox9->IsPassword = false;
	this->jMetroTextBox9->LineThickness = 2;
	this->jMetroTextBox9->Location = System::Drawing::Point(553, 384);
	this->jMetroTextBox9->Margin = System::Windows::Forms::Padding(4);
	this->jMetroTextBox9->MaxLength = 32767;
	this->jMetroTextBox9->MouseOnHover = System::Drawing::Color::DarkGray;
	this->jMetroTextBox9->Name = L"jMetroTextBox9";
	this->jMetroTextBox9->OnCursor = System::Windows::Forms::Cursors::IBeam;
	this->jMetroTextBox9->OnFocusColor = System::Drawing::Color::DarkGray;
	this->jMetroTextBox9->OnFocusFontColor = System::Drawing::Color::Gray;
	this->jMetroTextBox9->ReadOnly = false;
	this->jMetroTextBox9->Size = System::Drawing::Size(85, 51);
	this->jMetroTextBox9->TabIndex = 76;
	this->jMetroTextBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
	this->jMetroTextBox9->TextName = L"6,95";
	// 
	// jMetroTextBox10
	// 
	this->jMetroTextBox10->BackColor = System::Drawing::Color::Transparent;
	this->jMetroTextBox10->BorderColor = System::Drawing::Color::Empty;
	this->jMetroTextBox10->BorderRadius = 10;
	this->jMetroTextBox10->Enabled = false;
	this->jMetroTextBox10->FillColor = System::Drawing::Color::White;
	this->jMetroTextBox10->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
	this->jMetroTextBox10->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
	this->jMetroTextBox10->ForeColors = System::Drawing::Color::Gray;
	this->jMetroTextBox10->IsPassword = false;
	this->jMetroTextBox10->LineThickness = 2;
	this->jMetroTextBox10->Location = System::Drawing::Point(451, 384);
	this->jMetroTextBox10->Margin = System::Windows::Forms::Padding(4);
	this->jMetroTextBox10->MaxLength = 32767;
	this->jMetroTextBox10->MouseOnHover = System::Drawing::Color::DarkGray;
	this->jMetroTextBox10->Name = L"jMetroTextBox10";
	this->jMetroTextBox10->OnCursor = System::Windows::Forms::Cursors::IBeam;
	this->jMetroTextBox10->OnFocusColor = System::Drawing::Color::DarkGray;
	this->jMetroTextBox10->OnFocusFontColor = System::Drawing::Color::Gray;
	this->jMetroTextBox10->ReadOnly = false;
	this->jMetroTextBox10->Size = System::Drawing::Size(85, 51);
	this->jMetroTextBox10->TabIndex = 75;
	this->jMetroTextBox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
	this->jMetroTextBox10->TextName = L"6,75";
	// 
	// CalculateButton
	// 
	this->CalculateButton->BackColor = System::Drawing::Color::Transparent;
	this->CalculateButton->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
		static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
	this->CalculateButton->BorderColor = System::Drawing::Color::White;
	this->CalculateButton->BorderRadius = 23;
	this->CalculateButton->ButtonText = L"–ÓÁ‡ıÛ‚‡ÚË";
	this->CalculateButton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	this->CalculateButton->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	this->CalculateButton->ForeColors = System::Drawing::SystemColors::ControlLight;
	this->CalculateButton->HoverBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
		static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
	this->CalculateButton->HoverBorder = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
		static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
	this->CalculateButton->HoverFontColor = System::Drawing::Color::White;
	this->CalculateButton->LineThickness = 2;
	this->CalculateButton->Location = System::Drawing::Point(71, 468);
	this->CalculateButton->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
	this->CalculateButton->Name = L"CalculateButton";
	this->CalculateButton->Size = System::Drawing::Size(218, 51);
	this->CalculateButton->TabIndex = 79;
	this->CalculateButton->Click += gcnew System::EventHandler(this, &ConversionForm::CalculateButton_Click);
	// 
	// AdditionallyButton
	// 
	this->AdditionallyButton->BackColor = System::Drawing::Color::Transparent;
	this->AdditionallyButton->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
		static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
	this->AdditionallyButton->BorderColor = System::Drawing::Color::White;
	this->AdditionallyButton->BorderRadius = 23;
	this->AdditionallyButton->ButtonText = L"ƒÓ‰‡ÚÍÓ‚Ó";
	this->AdditionallyButton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	this->AdditionallyButton->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	this->AdditionallyButton->ForeColors = System::Drawing::SystemColors::ControlLight;
	this->AdditionallyButton->HoverBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
		static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
	this->AdditionallyButton->HoverBorder = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
		static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
	this->AdditionallyButton->HoverFontColor = System::Drawing::Color::White;
	this->AdditionallyButton->LineThickness = 2;
	this->AdditionallyButton->Location = System::Drawing::Point(420, 468);
	this->AdditionallyButton->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
	this->AdditionallyButton->Name = L"AdditionallyButton";
	this->AdditionallyButton->Size = System::Drawing::Size(218, 51);
	this->AdditionallyButton->TabIndex = 80;
	this->AdditionallyButton->Click += gcnew System::EventHandler(this, &ConversionForm::AdditionallyButton_Click);
	// 
	// jDragControl1
	// 
	this->jDragControl1->GetForm = this;
	this->jDragControl1->TargetControl = this->menuStrip1;
	// 
	// ConversionForm
	// 
	this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
	this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
	this->BackColor = System::Drawing::Color::White;
	this->ClientSize = System::Drawing::Size(700, 584);
	this->Controls->Add(this->AdditionallyButton);
	this->Controls->Add(this->CalculateButton);
	this->Controls->Add(this->label12);
	this->Controls->Add(this->label13);
	this->Controls->Add(this->jMetroTextBox9);
	this->Controls->Add(this->jMetroTextBox10);
	this->Controls->Add(this->label10);
	this->Controls->Add(this->label11);
	this->Controls->Add(this->jMetroTextBox7);
	this->Controls->Add(this->jMetroTextBox8);
	this->Controls->Add(this->label8);
	this->Controls->Add(this->label9);
	this->Controls->Add(this->jMetroTextBox5);
	this->Controls->Add(this->jMetroTextBox6);
	this->Controls->Add(this->label7);
	this->Controls->Add(this->label6);
	this->Controls->Add(this->jMetroTextBox4);
	this->Controls->Add(this->jMetroTextBox3);
	this->Controls->Add(this->label5);
	this->Controls->Add(this->label4);
	this->Controls->Add(this->CurrencyBox2);
	this->Controls->Add(this->CurrencyBox1);
	this->Controls->Add(this->—urrencyNumber2);
	this->Controls->Add(this->—urrencyNumber1);
	this->Controls->Add(this->label1);
	this->Controls->Add(this->panel2);
	this->Controls->Add(this->panel1);
	this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
	this->Name = L"ConversionForm";
	this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
	this->Text = L"ConversionForm";
	this->panel1->ResumeLayout(false);
	this->panel1->PerformLayout();
	this->menuStrip1->ResumeLayout(false);
	this->menuStrip1->PerformLayout();
	this->ResumeLayout(false);
	this->PerformLayout();

}
inline System::Void Diploma::ConversionForm::label3_Click(System::Object^ sender, System::EventArgs^ e) {
	exit(0);
}
inline System::Void Diploma::ConversionForm::label3_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	this->label3->ForeColor = System::Drawing::Color::Tomato;
}
inline System::Void Diploma::ConversionForm::label3_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	this->label3->ForeColor = System::Drawing::Color::Gainsboro;
}
inline System::Void Diploma::ConversionForm::mainMenuToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
inline System::Void Diploma::ConversionForm::exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	exit(0);
}
inline System::Void Diploma::ConversionForm::aboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("This is Conversion Form.\nU can convert some currancy and see the last currancy cost.\nGood luck.");
}
inline System::Void Diploma::ConversionForm::CalculateButton_Click(System::Object^ sender, System::EventArgs^ e) {
	double CNC;
	double array[20] = { 0.0374,0.0332,0.0297,2.6062,   26.755,0.8884,0.7971,69.87,   30.1021,1.1256,0.8977,78.4449,   33.6604,1.2545,1.1145,87.4076,   0.3837,0.0143,0.0127,0.0114 };
	try {
		CNC = Convert::ToDouble(—urrencyNumber1->TextName);
	}
	catch (const System::OverflowException^ ex1) {
		MessageBox::Show("Number to small or to large for int type!");
		ex1;
	}
	catch (const System::FormatException^ ex2) {
		MessageBox::Show("Incorect format!");
		ex2;
	}
	if (CurrencyBox1->SelectedItem == CurrencyBox2->SelectedItem) {
		MessageBox::Show("Please Input different currancy");
	}
	if (CNC <= 0 || CNC > 1000000) {
		MessageBox::Show("Please Input number between 1 and 1000000");
	}
	else {
		if (CurrencyBox1->SelectedItem == "UAH" && CurrencyBox2->SelectedItem == "USD")
			—urrencyNumber2->TextName = Convert::ToString(CNC * array[0]);
		if (CurrencyBox1->SelectedItem == "UAH" && CurrencyBox2->SelectedItem == "EUR")
			—urrencyNumber2->TextName = Convert::ToString(CNC * array[1]);
		if (CurrencyBox1->SelectedItem == "UAH" && CurrencyBox2->SelectedItem == "GBP")
			—urrencyNumber2->TextName = Convert::ToString(CNC * array[2]);
		if (CurrencyBox1->SelectedItem == "UAH" && CurrencyBox2->SelectedItem == "RUB")
			—urrencyNumber2->TextName = Convert::ToString(CNC * array[3]);
		if (CurrencyBox1->SelectedItem == "USD" && CurrencyBox2->SelectedItem == "UAH")
			—urrencyNumber2->TextName = Convert::ToString(CNC * array[4]);
		if (CurrencyBox1->SelectedItem == "USD" && CurrencyBox2->SelectedItem == "EUR")
			—urrencyNumber2->TextName = Convert::ToString(CNC * array[5]);
		if (CurrencyBox1->SelectedItem == "USD" && CurrencyBox2->SelectedItem == "GBP")
			—urrencyNumber2->TextName = Convert::ToString(CNC * array[6]);
		if (CurrencyBox1->SelectedItem == "USD" && CurrencyBox2->SelectedItem == "RUB")
			—urrencyNumber2->TextName = Convert::ToString(CNC * array[7]);
		if (CurrencyBox1->SelectedItem == "EUR" && CurrencyBox2->SelectedItem == "UAH")
			—urrencyNumber2->TextName = Convert::ToString(CNC * array[8]);
		if (CurrencyBox1->SelectedItem == "EUR" && CurrencyBox2->SelectedItem == "USD")
			—urrencyNumber2->TextName = Convert::ToString(CNC * array[9]);
		if (CurrencyBox1->SelectedItem == "EUR" && CurrencyBox2->SelectedItem == "GBP")
			—urrencyNumber2->TextName = Convert::ToString(CNC * array[10]);
		if (CurrencyBox1->SelectedItem == "EUR" && CurrencyBox2->SelectedItem == "RUB")
			—urrencyNumber2->TextName = Convert::ToString(CNC * array[11]);
		if (CurrencyBox1->SelectedItem == "GBP" && CurrencyBox2->SelectedItem == "UAH")
			—urrencyNumber2->TextName = Convert::ToString(CNC * array[12]);
		if (CurrencyBox1->SelectedItem == "GBP" && CurrencyBox2->SelectedItem == "USD")
			—urrencyNumber2->TextName = Convert::ToString(CNC * array[13]);
		if (CurrencyBox1->SelectedItem == "GBP" && CurrencyBox2->SelectedItem == "EUR")
			—urrencyNumber2->TextName = Convert::ToString(CNC * array[14]);
		if (CurrencyBox1->SelectedItem == "GBP" && CurrencyBox2->SelectedItem == "RUB")
			—urrencyNumber2->TextName = Convert::ToString(CNC * array[15]);
		if (CurrencyBox1->SelectedItem == "RUB" && CurrencyBox2->SelectedItem == "UAH")
			—urrencyNumber2->TextName = Convert::ToString(CNC * array[16]);
		if (CurrencyBox1->SelectedItem == "RUB" && CurrencyBox2->SelectedItem == "USD")
			—urrencyNumber2->TextName = Convert::ToString(CNC * array[17]);
		if (CurrencyBox1->SelectedItem == "RUB" && CurrencyBox2->SelectedItem == "EUR")
			—urrencyNumber2->TextName = Convert::ToString(CNC * array[18]);
		if (CurrencyBox1->SelectedItem == "RUB" && CurrencyBox2->SelectedItem == "GBP")
			—urrencyNumber2->TextName = Convert::ToString(CNC * array[19]);
	}
}
inline System::Void Diploma::ConversionForm::AdditionallyButton_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show(" ‘ÛÌÚ ÒÚÂÎ≥Ì„≥‚ - GBP - 32,40 / 34,00\n ÿ‚ÂÈˆ‡Ò¸ÍËÈ Ù‡ÌÍ - CHF - 27,00/ 28,40\n «ÓÎÓÚÓ - 1 385,42 /1 629,71\n œ‡Î‡‰≥È - 1 360,00 / 1 860,00\n œÎ‡ÚËÌ‡ - 670,00 / 972,71 \n —≥·ÎÓ - 14,45 / 21,77");
}
