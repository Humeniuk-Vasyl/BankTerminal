#include "BalanceForm.h"

/// delete all

inline Diploma::BalanceForm::~BalanceForm()
{
	if (components)
	{
		delete components;
	}
}

inline void Diploma::BalanceForm::InitializeComponent(void)
{
    this->components = (gcnew System::ComponentModel::Container());
    this->label3 = (gcnew System::Windows::Forms::Label());
    this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
    this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
    this->mainMenuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
    this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
    this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
    this->label4 = (gcnew System::Windows::Forms::Label());
    this->label1 = (gcnew System::Windows::Forms::Label());
    this->DepositTxt = (gcnew ::JMetroTextBox::JMetroTextBox());
    this->BalanceTxt = (gcnew ::JMetroTextBox::JMetroTextBox());
    this->panel1 = (gcnew System::Windows::Forms::Panel());
    this->label2 = (gcnew System::Windows::Forms::Label());
    this->GetCheckButton = (gcnew ::JThinButton::JThinButton());
    this->jDragControl1 = (gcnew ::JDragControl::JDragControl(this->components));
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
    this->label3->Location = System::Drawing::Point(654, -5);
    this->label3->Name = L"label3";
    this->label3->Size = System::Drawing::Size(31, 32);
    this->label3->TabIndex = 11;
    this->label3->Text = L"X";
    this->label3->Click += gcnew System::EventHandler(this, &BalanceForm::label3_Click);
    this->label3->MouseLeave += gcnew System::EventHandler(this, &BalanceForm::label3_MouseLeave);
    this->label3->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &BalanceForm::label3_MouseMove);
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
    this->menuStrip1->Size = System::Drawing::Size(682, 27);
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
    this->mainMenuToolStripMenuItem->Click += gcnew System::EventHandler(this, &BalanceForm::mainMenuToolStripMenuItem_Click);
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
    this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &BalanceForm::exitToolStripMenuItem_Click);
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
    this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &BalanceForm::aboutToolStripMenuItem_Click);
    // 
    // label4
    // 
    this->label4->AutoSize = true;
    this->label4->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->label4->Location = System::Drawing::Point(227, 292);
    this->label4->Name = L"label4";
    this->label4->Size = System::Drawing::Size(233, 38);
    this->label4->TabIndex = 41;
    this->label4->Text = L"ÂÀØ ÄÅÏÎÇÈÒ";
    // 
    // label1
    // 
    this->label1->AutoSize = true;
    this->label1->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->label1->Location = System::Drawing::Point(233, 168);
    this->label1->Name = L"label1";
    this->label1->Size = System::Drawing::Size(214, 38);
    this->label1->TabIndex = 40;
    this->label1->Text = L"ÂÀØ ÁÀËÀÍÑ";
    // 
    // DepositTxt
    // 
    this->DepositTxt->BackColor = System::Drawing::Color::Transparent;
    this->DepositTxt->BorderColor = System::Drawing::Color::Empty;
    this->DepositTxt->BorderRadius = 20;
    this->DepositTxt->Enabled = false;
    this->DepositTxt->FillColor = System::Drawing::Color::White;
    this->DepositTxt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
    this->DepositTxt->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
    this->DepositTxt->ForeColors = System::Drawing::Color::Gray;
    this->DepositTxt->IsPassword = false;
    this->DepositTxt->LineThickness = 2;
    this->DepositTxt->Location = System::Drawing::Point(177, 334);
    this->DepositTxt->Margin = System::Windows::Forms::Padding(4);
    this->DepositTxt->MaxLength = 32767;
    this->DepositTxt->MouseOnHover = System::Drawing::Color::DarkGray;
    this->DepositTxt->Name = L"DepositTxt";
    this->DepositTxt->OnCursor = System::Windows::Forms::Cursors::IBeam;
    this->DepositTxt->OnFocusColor = System::Drawing::Color::DarkGray;
    this->DepositTxt->OnFocusFontColor = System::Drawing::Color::Gray;
    this->DepositTxt->ReadOnly = false;
    this->DepositTxt->Size = System::Drawing::Size(323, 78);
    this->DepositTxt->TabIndex = 39;
    this->DepositTxt->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
    this->DepositTxt->TextName = L"";
    // 
    // BalanceTxt
    // 
    this->BalanceTxt->BackColor = System::Drawing::Color::Transparent;
    this->BalanceTxt->BorderColor = System::Drawing::Color::Empty;
    this->BalanceTxt->BorderRadius = 20;
    this->BalanceTxt->Enabled = false;
    this->BalanceTxt->FillColor = System::Drawing::Color::White;
    this->BalanceTxt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
    this->BalanceTxt->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
    this->BalanceTxt->ForeColors = System::Drawing::Color::Gray;
    this->BalanceTxt->IsPassword = false;
    this->BalanceTxt->LineThickness = 2;
    this->BalanceTxt->Location = System::Drawing::Point(177, 210);
    this->BalanceTxt->Margin = System::Windows::Forms::Padding(4);
    this->BalanceTxt->MaxLength = 32767;
    this->BalanceTxt->MouseOnHover = System::Drawing::Color::DarkGray;
    this->BalanceTxt->Name = L"BalanceTxt";
    this->BalanceTxt->OnCursor = System::Windows::Forms::Cursors::IBeam;
    this->BalanceTxt->OnFocusColor = System::Drawing::Color::DarkGray;
    this->BalanceTxt->OnFocusFontColor = System::Drawing::Color::Gray;
    this->BalanceTxt->ReadOnly = false;
    this->BalanceTxt->Size = System::Drawing::Size(323, 78);
    this->BalanceTxt->TabIndex = 38;
    this->BalanceTxt->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
    this->BalanceTxt->TextName = L"";
    // 
    // panel1
    // 
    this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
        static_cast<System::Int32>(static_cast<System::Byte>(242)));
    this->panel1->Controls->Add(this->label2);
    this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
    this->panel1->Location = System::Drawing::Point(0, 27);
    this->panel1->Name = L"panel1";
    this->panel1->Size = System::Drawing::Size(682, 106);
    this->panel1->TabIndex = 37;
    // 
    // label2
    // 
    this->label2->AutoSize = true;
    this->label2->BackColor = System::Drawing::Color::Transparent;
    this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
    this->label2->ForeColor = System::Drawing::Color::White;
    this->label2->Location = System::Drawing::Point(107, 29);
    this->label2->Name = L"label2";
    this->label2->Size = System::Drawing::Size(479, 47);
    this->label2->TabIndex = 1;
    this->label2->Text = L"BALANCE AND EXTRACT";
    this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
    // 
    // GetCheckButton
    // 
    this->GetCheckButton->BackColor = System::Drawing::Color::Transparent;
    this->GetCheckButton->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
        static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
    this->GetCheckButton->BorderColor = System::Drawing::Color::White;
    this->GetCheckButton->BorderRadius = 23;
    this->GetCheckButton->ButtonText = L"Îòðèìàòè âèïèñêó";
    this->GetCheckButton->Font = (gcnew System::Drawing::Font(L"Verdana", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
    this->GetCheckButton->Font_Size = (gcnew System::Drawing::Font(L"Verdana", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
    this->GetCheckButton->ForeColors = System::Drawing::SystemColors::ControlLight;
    this->GetCheckButton->HoverBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
        static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
    this->GetCheckButton->HoverBorder = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
        static_cast<System::Int32>(static_cast<System::Byte>(242)));
    this->GetCheckButton->HoverFontColor = System::Drawing::Color::White;
    this->GetCheckButton->LineThickness = 2;
    this->GetCheckButton->Location = System::Drawing::Point(187, 431);
    this->GetCheckButton->Margin = System::Windows::Forms::Padding(4);
    this->GetCheckButton->Name = L"GetCheckButton";
    this->GetCheckButton->Size = System::Drawing::Size(304, 79);
    this->GetCheckButton->TabIndex = 42;
    this->GetCheckButton->Click += gcnew System::EventHandler(this, &BalanceForm::GetCheckButton_Click);
    // 
    // jDragControl1
    // 
    this->jDragControl1->GetForm = this;
    this->jDragControl1->TargetControl = this->menuStrip1;
    // 
    // BalanceForm
    // 
    this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
    this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
    this->BackColor = System::Drawing::Color::White;
    this->ClientSize = System::Drawing::Size(682, 537);
    this->Controls->Add(this->GetCheckButton);
    this->Controls->Add(this->label4);
    this->Controls->Add(this->label1);
    this->Controls->Add(this->DepositTxt);
    this->Controls->Add(this->BalanceTxt);
    this->Controls->Add(this->panel1);
    this->Controls->Add(this->label3);
    this->Controls->Add(this->menuStrip1);
    this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
    this->Name = L"BalanceForm";
    this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
    this->Text = L"BalanceForm";
    this->Load += gcnew System::EventHandler(this, &BalanceForm::BalanceForm_Load);
    this->menuStrip1->ResumeLayout(false);
    this->menuStrip1->PerformLayout();
    this->panel1->ResumeLayout(false);
    this->panel1->PerformLayout();
    this->ResumeLayout(false);
    this->PerformLayout();

}
inline System::Void Diploma::BalanceForm::BalanceForm_Load(System::Object^ sender, System::EventArgs^ e) {
    BalanceTxt->TextName = n->Balance;
    DepositTxt->TextName = n->Deposit;
}
inline System::Void Diploma::BalanceForm::mainMenuToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
    this->Close();
}
inline System::Void Diploma::BalanceForm::exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
    exit(0);
}
inline System::Void Diploma::BalanceForm::aboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
    MessageBox::Show("This is Balance Form.\nU can see your own balances and get the check.");
}
inline System::Void Diploma::BalanceForm::label3_Click(System::Object^ sender, System::EventArgs^ e) {
    exit(0);
}
inline System::Void Diploma::BalanceForm::label3_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
    this->label3->ForeColor = System::Drawing::Color::Tomato;
}

inline System::Void Diploma::BalanceForm::label3_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
    this->label3->ForeColor = System::Drawing::Color::Gainsboro;
}
inline System::Void Diploma::BalanceForm::GetCheckButton_Click(System::Object^ sender, System::EventArgs^ e) {
    //select user data from DB n show it in massage like check
    String^ DATA = "HELLO " + n->UserName + "!\nCard number: " + n->CardNumber + "\nPIN-code: " + n->PIN_Code + "\nYour current Balance is: " + n->Balance + "\nYour current Deposit is: " + n->Deposit + "\nGood using!";
    MessageBox::Show(DATA);
    this->Hide();
    EndForm^ _EndForm3 = gcnew EndForm();
    _EndForm3->ShowDialog();
}
