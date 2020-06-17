#include "HelloForm.h"

inline Diploma::HelloForm::HelloForm(void)
{
	///lInit all
	InitializeComponent();
}

/// delete all

inline Diploma::HelloForm::~HelloForm()
{
	if (components)
	{
		delete components;
	}
}

inline void Diploma::HelloForm::InitializeComponent(void)
{
    this->components = (gcnew System::ComponentModel::Container());
    System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(HelloForm::typeid));
    this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
    this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
    this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
    this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
    this->Log_InFormButton = (gcnew ::JThinButton::JThinButton());
    this->Sign_InFormButton = (gcnew ::JThinButton::JThinButton());
    this->label3 = (gcnew System::Windows::Forms::Label());
    this->label1 = (gcnew System::Windows::Forms::Label());
    this->label2 = (gcnew System::Windows::Forms::Label());
    this->panel1 = (gcnew System::Windows::Forms::Panel());
    this->jDragControl1 = (gcnew ::JDragControl::JDragControl(this->components));
    this->jDragControl2 = (gcnew ::JDragControl::JDragControl(this->components));
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
    this->menuStrip1->Size = System::Drawing::Size(532, 28);
    this->menuStrip1->TabIndex = 1;
    this->menuStrip1->Text = L"menuStrip1";
    // 
    // fileToolStripMenuItem
    // 
    this->fileToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
        static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
    this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->exitToolStripMenuItem });
    this->fileToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
    this->fileToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ButtonFace;
    this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
    this->fileToolStripMenuItem->Size = System::Drawing::Size(84, 24);
    this->fileToolStripMenuItem->Text = L"Actions";
    // 
    // exitToolStripMenuItem
    // 
    this->exitToolStripMenuItem->BackColor = System::Drawing::Color::White;
    this->exitToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
    this->exitToolStripMenuItem->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
        static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
    this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
    this->exitToolStripMenuItem->Size = System::Drawing::Size(123, 28);
    this->exitToolStripMenuItem->Text = L"Exit";
    this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &HelloForm::exitToolStripMenuItem_Click);
    // 
    // aboutToolStripMenuItem
    // 
    this->aboutToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
        static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
    this->aboutToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
    this->aboutToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ButtonFace;
    this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
    this->aboutToolStripMenuItem->Size = System::Drawing::Size(72, 24);
    this->aboutToolStripMenuItem->Text = L"About";
    this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &HelloForm::aboutToolStripMenuItem_Click);
    // 
    // Log_InFormButton
    // 
    this->Log_InFormButton->BackColor = System::Drawing::Color::Transparent;
    this->Log_InFormButton->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
        static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
    this->Log_InFormButton->BorderColor = System::Drawing::Color::White;
    this->Log_InFormButton->BorderRadius = 40;
    this->Log_InFormButton->ButtonText = L" Log In";
    this->Log_InFormButton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
    this->Log_InFormButton->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
    this->Log_InFormButton->ForeColors = System::Drawing::Color::Snow;
    this->Log_InFormButton->HoverBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
        static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
    this->Log_InFormButton->HoverBorder = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
        static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
    this->Log_InFormButton->HoverFontColor = System::Drawing::Color::White;
    this->Log_InFormButton->ImeMode = System::Windows::Forms::ImeMode::NoControl;
    this->Log_InFormButton->LineThickness = 2;
    this->Log_InFormButton->Location = System::Drawing::Point(156, 191);
    this->Log_InFormButton->Margin = System::Windows::Forms::Padding(4);
    this->Log_InFormButton->Name = L"Log_InFormButton";
    this->Log_InFormButton->Size = System::Drawing::Size(225, 85);
    this->Log_InFormButton->TabIndex = 5;
    this->Log_InFormButton->Click += gcnew System::EventHandler(this, &HelloForm::Log_InFormButton1_Click);
    // 
    // Sign_InFormButton
    // 
    this->Sign_InFormButton->BackColor = System::Drawing::Color::Transparent;
    this->Sign_InFormButton->BackgroundColor = System::Drawing::Color::Crimson;
    this->Sign_InFormButton->BorderColor = System::Drawing::Color::White;
    this->Sign_InFormButton->BorderRadius = 40;
    this->Sign_InFormButton->ButtonText = L"Sign In";
    this->Sign_InFormButton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
    this->Sign_InFormButton->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Regular,
        System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
    this->Sign_InFormButton->ForeColors = System::Drawing::Color::Snow;
    this->Sign_InFormButton->HoverBackground = System::Drawing::Color::Crimson;
    this->Sign_InFormButton->HoverBorder = System::Drawing::Color::Crimson;
    this->Sign_InFormButton->HoverFontColor = System::Drawing::Color::White;
    this->Sign_InFormButton->ImeMode = System::Windows::Forms::ImeMode::NoControl;
    this->Sign_InFormButton->LineThickness = 2;
    this->Sign_InFormButton->Location = System::Drawing::Point(157, 284);
    this->Sign_InFormButton->Margin = System::Windows::Forms::Padding(4);
    this->Sign_InFormButton->Name = L"Sign_InFormButton";
    this->Sign_InFormButton->Size = System::Drawing::Size(224, 83);
    this->Sign_InFormButton->TabIndex = 7;
    this->Sign_InFormButton->Click += gcnew System::EventHandler(this, &HelloForm::Sign_InFormButton_Click);
    // 
    // label3
    // 
    this->label3->AutoSize = true;
    this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
        static_cast<System::Int32>(static_cast<System::Byte>(242)));
    this->label3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->label3->ForeColor = System::Drawing::Color::Gainsboro;
    this->label3->Location = System::Drawing::Point(502, -5);
    this->label3->Name = L"label3";
    this->label3->Size = System::Drawing::Size(31, 32);
    this->label3->TabIndex = 4;
    this->label3->Text = L"X";
    this->label3->Click += gcnew System::EventHandler(this, &HelloForm::label3_Click);
    this->label3->MouseLeave += gcnew System::EventHandler(this, &HelloForm::label3_MouseLeave);
    this->label3->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &HelloForm::label3_MouseMove);
    // 
    // label1
    // 
    this->label1->AutoSize = true;
    this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(165)),
        static_cast<System::Int32>(static_cast<System::Byte>(138)));
    this->label1->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->label1->ForeColor = System::Drawing::Color::White;
    this->label1->Location = System::Drawing::Point(136, 1);
    this->label1->Name = L"label1";
    this->label1->Size = System::Drawing::Size(271, 50);
    this->label1->TabIndex = 2;
    this->label1->Text = L"HELLO CONSUMER";
    // 
    // label2
    // 
    this->label2->AutoSize = true;
    this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(104)),
        static_cast<System::Int32>(static_cast<System::Byte>(222)));
    this->label2->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->label2->ForeColor = System::Drawing::Color::White;
    this->label2->Location = System::Drawing::Point(161, 50);
    this->label2->Name = L"label2";
    this->label2->Size = System::Drawing::Size(227, 50);
    this->label2->TabIndex = 3;
    this->label2->Text = L"IN START PAGE";
    // 
    // panel1
    // 
    this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
        static_cast<System::Int32>(static_cast<System::Byte>(242)));
    this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
    this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
    this->panel1->Controls->Add(this->label1);
    this->panel1->Controls->Add(this->label2);
    this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
    this->panel1->Location = System::Drawing::Point(0, 28);
    this->panel1->Name = L"panel1";
    this->panel1->Size = System::Drawing::Size(532, 100);
    this->panel1->TabIndex = 8;
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
    // HelloForm
    // 
    this->AutoValidate = System::Windows::Forms::AutoValidate::EnableAllowFocusChange;
    this->BackColor = System::Drawing::Color::White;
    this->ClientSize = System::Drawing::Size(532, 424);
    this->Controls->Add(this->panel1);
    this->Controls->Add(this->label3);
    this->Controls->Add(this->Sign_InFormButton);
    this->Controls->Add(this->Log_InFormButton);
    this->Controls->Add(this->menuStrip1);
    this->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
    this->MainMenuStrip = this->menuStrip1;
    this->Name = L"HelloForm";
    this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
    this->Text = L"HelloForm";
    this->Load += gcnew System::EventHandler(this, &HelloForm::HelloForm_Load);
    this->menuStrip1->ResumeLayout(false);
    this->menuStrip1->PerformLayout();
    this->panel1->ResumeLayout(false);
    this->panel1->PerformLayout();
    this->ResumeLayout(false);
    this->PerformLayout();

}
inline System::Void Diploma::HelloForm::HelloForm_Load(System::Object^ sender, System::EventArgs^ e) {
	simpleSound->Play(); //start the background music
}
inline System::Void Diploma::HelloForm::label3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
inline System::Void Diploma::HelloForm::label3_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	this->label3->ForeColor = System::Drawing::Color::Tomato;
}
inline System::Void Diploma::HelloForm::label3_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	this->label3->ForeColor = System::Drawing::Color::Gainsboro;
}
inline System::Void Diploma::HelloForm::exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	exit(0);
}
inline System::Void Diploma::HelloForm::aboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("This is the first form - Hello Form \n U can confirm your account or create a new one");
}
inline System::Void Diploma::HelloForm::Sign_InFormButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	Sign_InPage^ _SignInPage1 = gcnew Sign_InPage();
	_SignInPage1->Show();
}
inline System::Void Diploma::HelloForm::Log_InFormButton1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	Log_InPage^ _LogInPage1 = gcnew Log_InPage();
	_LogInPage1->Show();
}
