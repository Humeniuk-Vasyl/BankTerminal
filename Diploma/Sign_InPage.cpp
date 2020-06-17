#include "Sign_InPage.h"

inline Diploma::Sign_InPage::Sign_InPage(void)
{
	InitializeComponent();
}

/// delete all

inline Diploma::Sign_InPage::~Sign_InPage()
{
	if (components)
	{
		delete components;
	}
}

inline void Diploma::Sign_InPage::InitializeComponent(void)
{
	this->components = (gcnew System::ComponentModel::Container());
	this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
	this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
	this->mainMenuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
	this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
	this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
	this->label3 = (gcnew System::Windows::Forms::Label());
	this->label1 = (gcnew System::Windows::Forms::Label());
	this->CardNumberTxt = (gcnew ::JMetroTextBox::JMetroTextBox());
	this->panel1 = (gcnew System::Windows::Forms::Panel());
	this->label2 = (gcnew System::Windows::Forms::Label());
	this->label4 = (gcnew System::Windows::Forms::Label());
	this->PIN_CodeTxt = (gcnew ::JMetroTextBox::JMetroTextBox());
	this->label5 = (gcnew System::Windows::Forms::Label());
	this->UserNameTxt = (gcnew ::JMetroTextBox::JMetroTextBox());
	this->label6 = (gcnew System::Windows::Forms::Label());
	this->PhoneNumberTxt = (gcnew ::JMetroTextBox::JMetroTextBox());
	this->Sign_InSubmit = (gcnew ::JThinButton::JThinButton());
	this->jDragControl1 = (gcnew ::JDragControl::JDragControl(this->components));
	this->jDragControl2 = (gcnew ::JDragControl::JDragControl(this->components));
	this->menuStrip1->SuspendLayout();
	this->panel1->SuspendLayout();
	this->SuspendLayout();
	// 
	// menuStrip1
	// 
	this->menuStrip1->BackColor = System::Drawing::Color::Crimson;
	this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
	this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
		this->fileToolStripMenuItem,
			this->aboutToolStripMenuItem
	});
	this->menuStrip1->Location = System::Drawing::Point(0, 0);
	this->menuStrip1->Name = L"menuStrip1";
	this->menuStrip1->Size = System::Drawing::Size(514, 28);
	this->menuStrip1->TabIndex = 3;
	this->menuStrip1->Text = L"menuStrip1";
	// 
	// fileToolStripMenuItem
	// 
	this->fileToolStripMenuItem->BackColor = System::Drawing::Color::Crimson;
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
	this->mainMenuToolStripMenuItem->ForeColor = System::Drawing::Color::Crimson;
	this->mainMenuToolStripMenuItem->Name = L"mainMenuToolStripMenuItem";
	this->mainMenuToolStripMenuItem->Size = System::Drawing::Size(133, 28);
	this->mainMenuToolStripMenuItem->Text = L"Main";
	this->mainMenuToolStripMenuItem->Click += gcnew System::EventHandler(this, &Sign_InPage::mainMenuToolStripMenuItem_Click);
	// 
	// exitToolStripMenuItem
	// 
	this->exitToolStripMenuItem->BackColor = System::Drawing::Color::White;
	this->exitToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	this->exitToolStripMenuItem->ForeColor = System::Drawing::Color::Crimson;
	this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
	this->exitToolStripMenuItem->Size = System::Drawing::Size(133, 28);
	this->exitToolStripMenuItem->Text = L"Exit";
	this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Sign_InPage::exitToolStripMenuItem_Click);
	// 
	// aboutToolStripMenuItem
	// 
	this->aboutToolStripMenuItem->BackColor = System::Drawing::Color::Crimson;
	this->aboutToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	this->aboutToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ButtonFace;
	this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
	this->aboutToolStripMenuItem->Size = System::Drawing::Size(72, 24);
	this->aboutToolStripMenuItem->Text = L"About";
	this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &Sign_InPage::aboutToolStripMenuItem_Click);
	// 
	// label3
	// 
	this->label3->AutoSize = true;
	this->label3->BackColor = System::Drawing::Color::Crimson;
	this->label3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->label3->ForeColor = System::Drawing::SystemColors::ButtonFace;
	this->label3->Location = System::Drawing::Point(484, -5);
	this->label3->Name = L"label3";
	this->label3->Size = System::Drawing::Size(31, 32);
	this->label3->TabIndex = 6;
	this->label3->Text = L"X";
	this->label3->Click += gcnew System::EventHandler(this, &Sign_InPage::label3_Click);
	this->label3->MouseLeave += gcnew System::EventHandler(this, &Sign_InPage::label3_MouseLeave);
	this->label3->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Sign_InPage::label3_MouseMove);
	// 
	// label1
	// 
	this->label1->AutoSize = true;
	this->label1->BackColor = System::Drawing::Color::White;
	this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->label1->ForeColor = System::Drawing::Color::Gray;
	this->label1->Location = System::Drawing::Point(90, 156);
	this->label1->Name = L"label1";
	this->label1->Size = System::Drawing::Size(145, 23);
	this->label1->TabIndex = 10;
	this->label1->Text = L"Card Number";
	// 
	// CardNumberTxt
	// 
	this->CardNumberTxt->BackColor = System::Drawing::Color::Transparent;
	this->CardNumberTxt->BorderColor = System::Drawing::Color::Empty;
	this->CardNumberTxt->BorderRadius = 20;
	this->CardNumberTxt->FillColor = System::Drawing::Color::White;
	this->CardNumberTxt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
	this->CardNumberTxt->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
	this->CardNumberTxt->ForeColors = System::Drawing::Color::Gray;
	this->CardNumberTxt->IsPassword = false;
	this->CardNumberTxt->LineThickness = 2;
	this->CardNumberTxt->Location = System::Drawing::Point(74, 183);
	this->CardNumberTxt->Margin = System::Windows::Forms::Padding(4);
	this->CardNumberTxt->MaxLength = 32767;
	this->CardNumberTxt->MouseOnHover = System::Drawing::Color::DarkGray;
	this->CardNumberTxt->Name = L"CardNumberTxt";
	this->CardNumberTxt->OnCursor = System::Windows::Forms::Cursors::IBeam;
	this->CardNumberTxt->OnFocusColor = System::Drawing::Color::DarkGray;
	this->CardNumberTxt->OnFocusFontColor = System::Drawing::Color::Gray;
	this->CardNumberTxt->ReadOnly = false;
	this->CardNumberTxt->Size = System::Drawing::Size(364, 48);
	this->CardNumberTxt->TabIndex = 9;
	this->CardNumberTxt->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
	this->CardNumberTxt->TextName = L"";
	// 
	// panel1
	// 
	this->panel1->BackColor = System::Drawing::Color::Crimson;
	this->panel1->Controls->Add(this->label2);
	this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
	this->panel1->Location = System::Drawing::Point(0, 28);
	this->panel1->Name = L"panel1";
	this->panel1->Size = System::Drawing::Size(514, 100);
	this->panel1->TabIndex = 11;
	// 
	// label2
	// 
	this->label2->AutoSize = true;
	this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	this->label2->ForeColor = System::Drawing::Color::White;
	this->label2->Location = System::Drawing::Point(158, 29);
	this->label2->Name = L"label2";
	this->label2->Size = System::Drawing::Size(202, 40);
	this->label2->TabIndex = 0;
	this->label2->Text = L"Registration";
	// 
	// label4
	// 
	this->label4->AutoSize = true;
	this->label4->BackColor = System::Drawing::Color::White;
	this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->label4->ForeColor = System::Drawing::Color::Gray;
	this->label4->Location = System::Drawing::Point(91, 239);
	this->label4->Name = L"label4";
	this->label4->Size = System::Drawing::Size(102, 23);
	this->label4->TabIndex = 13;
	this->label4->Text = L"PIN-code";
	// 
	// PIN_CodeTxt
	// 
	this->PIN_CodeTxt->BackColor = System::Drawing::Color::Transparent;
	this->PIN_CodeTxt->BorderColor = System::Drawing::Color::Empty;
	this->PIN_CodeTxt->BorderRadius = 20;
	this->PIN_CodeTxt->FillColor = System::Drawing::Color::White;
	this->PIN_CodeTxt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
	this->PIN_CodeTxt->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
	this->PIN_CodeTxt->ForeColors = System::Drawing::Color::Gray;
	this->PIN_CodeTxt->IsPassword = false;
	this->PIN_CodeTxt->LineThickness = 2;
	this->PIN_CodeTxt->Location = System::Drawing::Point(75, 266);
	this->PIN_CodeTxt->Margin = System::Windows::Forms::Padding(4);
	this->PIN_CodeTxt->MaxLength = 32767;
	this->PIN_CodeTxt->MouseOnHover = System::Drawing::Color::DarkGray;
	this->PIN_CodeTxt->Name = L"PIN_CodeTxt";
	this->PIN_CodeTxt->OnCursor = System::Windows::Forms::Cursors::IBeam;
	this->PIN_CodeTxt->OnFocusColor = System::Drawing::Color::DarkGray;
	this->PIN_CodeTxt->OnFocusFontColor = System::Drawing::Color::Gray;
	this->PIN_CodeTxt->ReadOnly = false;
	this->PIN_CodeTxt->Size = System::Drawing::Size(364, 48);
	this->PIN_CodeTxt->TabIndex = 12;
	this->PIN_CodeTxt->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
	this->PIN_CodeTxt->TextName = L"";
	// 
	// label5
	// 
	this->label5->AutoSize = true;
	this->label5->BackColor = System::Drawing::Color::White;
	this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->label5->ForeColor = System::Drawing::Color::Gray;
	this->label5->Location = System::Drawing::Point(91, 318);
	this->label5->Name = L"label5";
	this->label5->Size = System::Drawing::Size(71, 23);
	this->label5->TabIndex = 15;
	this->label5->Text = L"Name";
	// 
	// UserNameTxt
	// 
	this->UserNameTxt->BackColor = System::Drawing::Color::Transparent;
	this->UserNameTxt->BorderColor = System::Drawing::Color::Empty;
	this->UserNameTxt->BorderRadius = 20;
	this->UserNameTxt->FillColor = System::Drawing::Color::White;
	this->UserNameTxt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
	this->UserNameTxt->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
	this->UserNameTxt->ForeColors = System::Drawing::Color::Gray;
	this->UserNameTxt->IsPassword = false;
	this->UserNameTxt->LineThickness = 2;
	this->UserNameTxt->Location = System::Drawing::Point(75, 345);
	this->UserNameTxt->Margin = System::Windows::Forms::Padding(4);
	this->UserNameTxt->MaxLength = 32767;
	this->UserNameTxt->MouseOnHover = System::Drawing::Color::DarkGray;
	this->UserNameTxt->Name = L"UserNameTxt";
	this->UserNameTxt->OnCursor = System::Windows::Forms::Cursors::IBeam;
	this->UserNameTxt->OnFocusColor = System::Drawing::Color::DarkGray;
	this->UserNameTxt->OnFocusFontColor = System::Drawing::Color::Gray;
	this->UserNameTxt->ReadOnly = false;
	this->UserNameTxt->Size = System::Drawing::Size(364, 48);
	this->UserNameTxt->TabIndex = 14;
	this->UserNameTxt->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
	this->UserNameTxt->TextName = L"";
	// 
	// label6
	// 
	this->label6->AutoSize = true;
	this->label6->BackColor = System::Drawing::Color::White;
	this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->label6->ForeColor = System::Drawing::Color::Gray;
	this->label6->Location = System::Drawing::Point(91, 397);
	this->label6->Name = L"label6";
	this->label6->Size = System::Drawing::Size(262, 23);
	this->label6->TabIndex = 17;
	this->label6->Text = L"Phone Number (Optional)";
	// 
	// PhoneNumberTxt
	// 
	this->PhoneNumberTxt->BackColor = System::Drawing::Color::Transparent;
	this->PhoneNumberTxt->BorderColor = System::Drawing::Color::Empty;
	this->PhoneNumberTxt->BorderRadius = 20;
	this->PhoneNumberTxt->FillColor = System::Drawing::Color::White;
	this->PhoneNumberTxt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
	this->PhoneNumberTxt->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
	this->PhoneNumberTxt->ForeColors = System::Drawing::Color::Gray;
	this->PhoneNumberTxt->IsPassword = false;
	this->PhoneNumberTxt->LineThickness = 2;
	this->PhoneNumberTxt->Location = System::Drawing::Point(75, 424);
	this->PhoneNumberTxt->Margin = System::Windows::Forms::Padding(4);
	this->PhoneNumberTxt->MaxLength = 32767;
	this->PhoneNumberTxt->MouseOnHover = System::Drawing::Color::DarkGray;
	this->PhoneNumberTxt->Name = L"PhoneNumberTxt";
	this->PhoneNumberTxt->OnCursor = System::Windows::Forms::Cursors::IBeam;
	this->PhoneNumberTxt->OnFocusColor = System::Drawing::Color::DarkGray;
	this->PhoneNumberTxt->OnFocusFontColor = System::Drawing::Color::Gray;
	this->PhoneNumberTxt->ReadOnly = false;
	this->PhoneNumberTxt->Size = System::Drawing::Size(364, 48);
	this->PhoneNumberTxt->TabIndex = 16;
	this->PhoneNumberTxt->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
	this->PhoneNumberTxt->TextName = L"";
	// 
	// Sign_InSubmit
	// 
	this->Sign_InSubmit->BackColor = System::Drawing::Color::Transparent;
	this->Sign_InSubmit->BackgroundColor = System::Drawing::Color::Crimson;
	this->Sign_InSubmit->BorderColor = System::Drawing::Color::White;
	this->Sign_InSubmit->BorderRadius = 40;
	this->Sign_InSubmit->ButtonText = L"Sign-In";
	this->Sign_InSubmit->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	this->Sign_InSubmit->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	this->Sign_InSubmit->ForeColors = System::Drawing::Color::Snow;
	this->Sign_InSubmit->HoverBackground = System::Drawing::Color::Crimson;
	this->Sign_InSubmit->HoverBorder = System::Drawing::Color::Crimson;
	this->Sign_InSubmit->HoverFontColor = System::Drawing::Color::White;
	this->Sign_InSubmit->ImeMode = System::Windows::Forms::ImeMode::NoControl;
	this->Sign_InSubmit->LineThickness = 2;
	this->Sign_InSubmit->Location = System::Drawing::Point(144, 480);
	this->Sign_InSubmit->Margin = System::Windows::Forms::Padding(4);
	this->Sign_InSubmit->Name = L"Sign_InSubmit";
	this->Sign_InSubmit->Size = System::Drawing::Size(224, 83);
	this->Sign_InSubmit->TabIndex = 18;
	this->Sign_InSubmit->Click += gcnew System::EventHandler(this, &Sign_InPage::Sign_InSubmit_Click);
	// 
	// jDragControl1
	// 
	this->jDragControl1->GetForm = this;
	this->jDragControl1->TargetControl = this->menuStrip1;
	// 
	// jDragControl2
	// 
	this->jDragControl2->GetForm = this;
	this->jDragControl2->TargetControl = this->panel1;
	// 
	// Sign_InPage
	// 
	this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
	this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
	this->BackColor = System::Drawing::Color::White;
	this->ClientSize = System::Drawing::Size(514, 582);
	this->Controls->Add(this->Sign_InSubmit);
	this->Controls->Add(this->label6);
	this->Controls->Add(this->PhoneNumberTxt);
	this->Controls->Add(this->label5);
	this->Controls->Add(this->UserNameTxt);
	this->Controls->Add(this->label4);
	this->Controls->Add(this->PIN_CodeTxt);
	this->Controls->Add(this->panel1);
	this->Controls->Add(this->label1);
	this->Controls->Add(this->CardNumberTxt);
	this->Controls->Add(this->label3);
	this->Controls->Add(this->menuStrip1);
	this->ForeColor = System::Drawing::Color::Gray;
	this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
	this->Name = L"Sign_InPage";
	this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
	this->Text = L"Sign_InPage";
	this->menuStrip1->ResumeLayout(false);
	this->menuStrip1->PerformLayout();
	this->panel1->ResumeLayout(false);
	this->panel1->PerformLayout();
	this->ResumeLayout(false);
	this->PerformLayout();

}

inline System::Void Diploma::Sign_InPage::label3_Click(System::Object^ sender, System::EventArgs^ e) {
	exit(0);
}
inline System::Void Diploma::Sign_InPage::label3_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	this->label3->ForeColor = System::Drawing::Color::Tomato;
}
inline System::Void Diploma::Sign_InPage::label3_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	this->label3->ForeColor = System::Drawing::Color::Gainsboro;
}
inline System::Void Diploma::Sign_InPage::mainMenuToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	Log_InPage^ _LogInPage1_1 = gcnew Log_InPage();
	_LogInPage1_1->Show();
}
inline System::Void Diploma::Sign_InPage::exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	exit(0);
}
inline System::Void Diploma::Sign_InPage::aboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("This is Registration page.\n Please fill all columns.\nGood luck.");
}
inline System::Void Diploma::Sign_InPage::Sign_InSubmit_Click(System::Object^ sender, System::EventArgs^ e) {
	//Creating class object of "DBFicsation"
	DBFicsation DBF1;
	ParametersClass^ n = gcnew ParametersClass();

	String^ CardNumber1 = CardNumberTxt->TextName;
	String^ PIN_Code1 = PIN_CodeTxt->TextName;

	n->CardNumber = CardNumber1;
	n->PIN_Code = PIN_Code1;
	if ((CardNumberTxt->TextName == "") || (PIN_CodeTxt->TextName == "") || (UserNameTxt->TextName == "")) {
		MessageBox::Show("Input all data!");
	}
	else if (DBF1.FindClone(n)==1)
	{
		MessageBox::Show("This user already exists!.\nPlease Input different data.");
	}
	else {
		//Creating class object of "DBFicsation"
		DBFicsation DBF1;
		if (PhoneNumberTxt->TextName == "") {
			DBF1.Insert(CardNumberTxt->TextName, PIN_CodeTxt->TextName, UserNameTxt->TextName);
		}
		else {
			DBF1.Insert(CardNumberTxt->TextName, PIN_CodeTxt->TextName, UserNameTxt->TextName, PhoneNumberTxt->TextName);
		}
		this->Hide();
		Log_InPage^ _LogInPage1 = gcnew Log_InPage();
		_LogInPage1->Show();
	}
}
