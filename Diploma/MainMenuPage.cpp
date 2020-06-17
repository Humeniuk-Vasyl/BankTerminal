#include "MainMenuPage.h"

inline Diploma::MainMenuPage::MainMenuPage(void)
{
	InitializeComponent();
}

/// delete all

inline Diploma::MainMenuPage::~MainMenuPage()
{
	if (components)
	{
		delete components;
	}
}

inline void Diploma::MainMenuPage::InitializeComponent(void)
{
    this->components = (gcnew System::ComponentModel::Container());
    this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
    this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
    this->menuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
    this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
    this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
    this->label3 = (gcnew System::Windows::Forms::Label());
    this->panel1 = (gcnew System::Windows::Forms::Panel());
    this->label2 = (gcnew System::Windows::Forms::Label());
    this->jDragControl1 = (gcnew ::JDragControl::JDragControl(this->components));
    this->jDragControl2 = (gcnew ::JDragControl::JDragControl(this->components));
    this->ReplanishmentFormButton = (gcnew ::JThinButton::JThinButton());
    this->WithdrawalFormButton = (gcnew ::JThinButton::JThinButton());
    this->BalanceFormButton = (gcnew ::JThinButton::JThinButton());
    this->PhoneReplenishmentFormButton = (gcnew ::JThinButton::JThinButton());
    this->DepositFormButton = (gcnew ::JThinButton::JThinButton());
    this->ConversionFormButton = (gcnew ::JThinButton::JThinButton());
    this->ChangePIN_CodeOrPhone = (gcnew ::JThinButton::JThinButton());
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
    this->menuStrip1->Size = System::Drawing::Size(700, 27);
    this->menuStrip1->TabIndex = 4;
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
    this->fileToolStripMenuItem->Size = System::Drawing::Size(84, 24);
    this->fileToolStripMenuItem->Text = L"Actions";
    // 
    // menuToolStripMenuItem
    // 
    this->menuToolStripMenuItem->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
        static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
    this->menuToolStripMenuItem->Name = L"menuToolStripMenuItem";
    this->menuToolStripMenuItem->Size = System::Drawing::Size(224, 26);
    this->menuToolStripMenuItem->Text = L"Menu";
    this->menuToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainMenuPage::menuToolStripMenuItem_Click);
    // 
    // exitToolStripMenuItem
    // 
    this->exitToolStripMenuItem->BackColor = System::Drawing::Color::White;
    this->exitToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold));
    this->exitToolStripMenuItem->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
        static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
    this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
    this->exitToolStripMenuItem->Size = System::Drawing::Size(224, 26);
    this->exitToolStripMenuItem->Text = L"Exit";
    this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainMenuPage::exitToolStripMenuItem_Click);
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
    this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainMenuPage::aboutToolStripMenuItem_Click);
    // 
    // label3
    // 
    this->label3->AutoSize = true;
    this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
        static_cast<System::Int32>(static_cast<System::Byte>(242)));
    this->label3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->label3->ForeColor = System::Drawing::SystemColors::ButtonFace;
    this->label3->Location = System::Drawing::Point(669, -5);
    this->label3->Name = L"label3";
    this->label3->Size = System::Drawing::Size(31, 32);
    this->label3->TabIndex = 7;
    this->label3->Text = L"X";
    this->label3->Click += gcnew System::EventHandler(this, &MainMenuPage::label3_Click);
    this->label3->MouseLeave += gcnew System::EventHandler(this, &MainMenuPage::label3_MouseLeave);
    this->label3->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainMenuPage::label3_MouseMove);
    // 
    // panel1
    // 
    this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
        static_cast<System::Int32>(static_cast<System::Byte>(242)));
    this->panel1->Controls->Add(this->label2);
    this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
    this->panel1->Location = System::Drawing::Point(0, 27);
    this->panel1->Name = L"panel1";
    this->panel1->Size = System::Drawing::Size(700, 100);
    this->panel1->TabIndex = 8;
    // 
    // label2
    // 
    this->label2->AutoSize = true;
    this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
    this->label2->ForeColor = System::Drawing::Color::LightSteelBlue;
    this->label2->Location = System::Drawing::Point(228, 23);
    this->label2->Name = L"label2";
    this->label2->Size = System::Drawing::Size(253, 49);
    this->label2->TabIndex = 1;
    this->label2->Text = L"MAIN MENU";
    this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
    // ReplanishmentFormButton
    // 
    this->ReplanishmentFormButton->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
    this->ReplanishmentFormButton->BackColor = System::Drawing::Color::Transparent;
    this->ReplanishmentFormButton->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
        static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
    this->ReplanishmentFormButton->BorderColor = System::Drawing::Color::White;
    this->ReplanishmentFormButton->BorderRadius = 15;
    this->ReplanishmentFormButton->ButtonText = L"Поповнення";
    this->ReplanishmentFormButton->Font = (gcnew System::Drawing::Font(L"Impact", 19.2F));
    this->ReplanishmentFormButton->Font_Size = (gcnew System::Drawing::Font(L"Impact", 19.2F));
    this->ReplanishmentFormButton->ForeColors = System::Drawing::SystemColors::ControlLight;
    this->ReplanishmentFormButton->HoverBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
        static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
    this->ReplanishmentFormButton->HoverBorder = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
        static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
    this->ReplanishmentFormButton->HoverFontColor = System::Drawing::Color::White;
    this->ReplanishmentFormButton->ImeMode = System::Windows::Forms::ImeMode::NoControl;
    this->ReplanishmentFormButton->LineThickness = 2;
    this->ReplanishmentFormButton->Location = System::Drawing::Point(60, 203);
    this->ReplanishmentFormButton->Margin = System::Windows::Forms::Padding(4);
    this->ReplanishmentFormButton->Name = L"ReplanishmentFormButton";
    this->ReplanishmentFormButton->Size = System::Drawing::Size(242, 135);
    this->ReplanishmentFormButton->TabIndex = 19;
    this->ReplanishmentFormButton->Click += gcnew System::EventHandler(this, &MainMenuPage::ReplanishmentFormButton_Click);
    // 
    // WithdrawalFormButton
    // 
    this->WithdrawalFormButton->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
    this->WithdrawalFormButton->BackColor = System::Drawing::Color::Transparent;
    this->WithdrawalFormButton->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
        static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
    this->WithdrawalFormButton->BorderColor = System::Drawing::Color::White;
    this->WithdrawalFormButton->BorderRadius = 15;
    this->WithdrawalFormButton->ButtonText = L"Знімання";
    this->WithdrawalFormButton->Font = (gcnew System::Drawing::Font(L"Impact", 19.2F));
    this->WithdrawalFormButton->Font_Size = (gcnew System::Drawing::Font(L"Impact", 19.2F));
    this->WithdrawalFormButton->ForeColors = System::Drawing::SystemColors::ControlLight;
    this->WithdrawalFormButton->HoverBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
        static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
    this->WithdrawalFormButton->HoverBorder = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
        static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
    this->WithdrawalFormButton->HoverFontColor = System::Drawing::Color::White;
    this->WithdrawalFormButton->ImeMode = System::Windows::Forms::ImeMode::NoControl;
    this->WithdrawalFormButton->LineThickness = 2;
    this->WithdrawalFormButton->Location = System::Drawing::Point(60, 336);
    this->WithdrawalFormButton->Margin = System::Windows::Forms::Padding(4);
    this->WithdrawalFormButton->Name = L"WithdrawalFormButton";
    this->WithdrawalFormButton->Size = System::Drawing::Size(242, 135);
    this->WithdrawalFormButton->TabIndex = 20;
    this->WithdrawalFormButton->Click += gcnew System::EventHandler(this, &MainMenuPage::WithdrawalForm_Click);
    // 
    // BalanceFormButton
    // 
    this->BalanceFormButton->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
    this->BalanceFormButton->BackColor = System::Drawing::Color::Transparent;
    this->BalanceFormButton->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
        static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
    this->BalanceFormButton->BorderColor = System::Drawing::Color::White;
    this->BalanceFormButton->BorderRadius = 15;
    this->BalanceFormButton->ButtonText = L"Баланс та\n  виписка";
    this->BalanceFormButton->Font = (gcnew System::Drawing::Font(L"Impact", 12));
    this->BalanceFormButton->Font_Size = (gcnew System::Drawing::Font(L"Impact", 12));
    this->BalanceFormButton->ForeColors = System::Drawing::SystemColors::ControlLight;
    this->BalanceFormButton->HoverBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
        static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
    this->BalanceFormButton->HoverBorder = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
        static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
    this->BalanceFormButton->HoverFontColor = System::Drawing::Color::White;
    this->BalanceFormButton->ImeMode = System::Windows::Forms::ImeMode::NoControl;
    this->BalanceFormButton->LineThickness = 2;
    this->BalanceFormButton->Location = System::Drawing::Point(302, 203);
    this->BalanceFormButton->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
    this->BalanceFormButton->Name = L"BalanceFormButton";
    this->BalanceFormButton->Size = System::Drawing::Size(169, 135);
    this->BalanceFormButton->TabIndex = 21;
    this->BalanceFormButton->Click += gcnew System::EventHandler(this, &MainMenuPage::BalanceFormButton_Click);
    // 
    // PhoneReplenishmentFormButton
    // 
    this->PhoneReplenishmentFormButton->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
    this->PhoneReplenishmentFormButton->BackColor = System::Drawing::Color::Transparent;
    this->PhoneReplenishmentFormButton->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
        static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
    this->PhoneReplenishmentFormButton->BorderColor = System::Drawing::Color::White;
    this->PhoneReplenishmentFormButton->BorderRadius = 15;
    this->PhoneReplenishmentFormButton->ButtonText = L"Поповнення \n мобільного";
    this->PhoneReplenishmentFormButton->Font = (gcnew System::Drawing::Font(L"Impact", 12));
    this->PhoneReplenishmentFormButton->Font_Size = (gcnew System::Drawing::Font(L"Impact", 12));
    this->PhoneReplenishmentFormButton->ForeColors = System::Drawing::SystemColors::ControlLight;
    this->PhoneReplenishmentFormButton->HoverBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
        static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
    this->PhoneReplenishmentFormButton->HoverBorder = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
        static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
    this->PhoneReplenishmentFormButton->HoverFontColor = System::Drawing::Color::White;
    this->PhoneReplenishmentFormButton->ImeMode = System::Windows::Forms::ImeMode::NoControl;
    this->PhoneReplenishmentFormButton->LineThickness = 2;
    this->PhoneReplenishmentFormButton->Location = System::Drawing::Point(302, 336);
    this->PhoneReplenishmentFormButton->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
    this->PhoneReplenishmentFormButton->Name = L"PhoneReplenishmentFormButton";
    this->PhoneReplenishmentFormButton->Size = System::Drawing::Size(169, 135);
    this->PhoneReplenishmentFormButton->TabIndex = 22;
    this->PhoneReplenishmentFormButton->Click += gcnew System::EventHandler(this, &MainMenuPage::PhoneReplenishmentFormButton_Click);
    // 
    // DepositFormButton
    // 
    this->DepositFormButton->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
    this->DepositFormButton->BackColor = System::Drawing::Color::Transparent;
    this->DepositFormButton->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
        static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
    this->DepositFormButton->BorderColor = System::Drawing::Color::White;
    this->DepositFormButton->BorderRadius = 15;
    this->DepositFormButton->ButtonText = L"Депозит";
    this->DepositFormButton->Font = (gcnew System::Drawing::Font(L"Impact", 12));
    this->DepositFormButton->Font_Size = (gcnew System::Drawing::Font(L"Impact", 12));
    this->DepositFormButton->ForeColors = System::Drawing::SystemColors::ControlLight;
    this->DepositFormButton->HoverBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
        static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
    this->DepositFormButton->HoverBorder = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
        static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
    this->DepositFormButton->HoverFontColor = System::Drawing::Color::White;
    this->DepositFormButton->ImeMode = System::Windows::Forms::ImeMode::NoControl;
    this->DepositFormButton->LineThickness = 2;
    this->DepositFormButton->Location = System::Drawing::Point(472, 203);
    this->DepositFormButton->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
    this->DepositFormButton->Name = L"DepositFormButton";
    this->DepositFormButton->Size = System::Drawing::Size(169, 68);
    this->DepositFormButton->TabIndex = 23;
    this->DepositFormButton->Click += gcnew System::EventHandler(this, &MainMenuPage::DepositForm_Click);
    // 
    // ConversionFormButton
    // 
    this->ConversionFormButton->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
    this->ConversionFormButton->BackColor = System::Drawing::Color::Transparent;
    this->ConversionFormButton->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
        static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
    this->ConversionFormButton->BorderColor = System::Drawing::Color::White;
    this->ConversionFormButton->BorderRadius = 15;
    this->ConversionFormButton->ButtonText = L"    Конвертація і\n купівля/продаж";
    this->ConversionFormButton->Font = (gcnew System::Drawing::Font(L"Impact", 12));
    this->ConversionFormButton->Font_Size = (gcnew System::Drawing::Font(L"Impact", 12));
    this->ConversionFormButton->ForeColors = System::Drawing::SystemColors::ControlLight;
    this->ConversionFormButton->HoverBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
        static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
    this->ConversionFormButton->HoverBorder = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
        static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
    this->ConversionFormButton->HoverFontColor = System::Drawing::Color::White;
    this->ConversionFormButton->ImeMode = System::Windows::Forms::ImeMode::NoControl;
    this->ConversionFormButton->LineThickness = 2;
    this->ConversionFormButton->Location = System::Drawing::Point(472, 336);
    this->ConversionFormButton->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
    this->ConversionFormButton->Name = L"ConversionFormButton";
    this->ConversionFormButton->Size = System::Drawing::Size(169, 135);
    this->ConversionFormButton->TabIndex = 24;
    this->ConversionFormButton->Click += gcnew System::EventHandler(this, &MainMenuPage::ConversionFormButton_Click);
    // 
    // ChangePIN_CodeOrPhone
    // 
    this->ChangePIN_CodeOrPhone->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
    this->ChangePIN_CodeOrPhone->BackColor = System::Drawing::Color::Transparent;
    this->ChangePIN_CodeOrPhone->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
        static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
    this->ChangePIN_CodeOrPhone->BorderColor = System::Drawing::Color::White;
    this->ChangePIN_CodeOrPhone->BorderRadius = 15;
    this->ChangePIN_CodeOrPhone->ButtonText = L"Змінити ПІН-код\n         або номер";
    this->ChangePIN_CodeOrPhone->Font = (gcnew System::Drawing::Font(L"Impact", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
    this->ChangePIN_CodeOrPhone->Font_Size = (gcnew System::Drawing::Font(L"Impact", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
    this->ChangePIN_CodeOrPhone->ForeColors = System::Drawing::SystemColors::ControlLight;
    this->ChangePIN_CodeOrPhone->HoverBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
        static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
    this->ChangePIN_CodeOrPhone->HoverBorder = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
        static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
    this->ChangePIN_CodeOrPhone->HoverFontColor = System::Drawing::Color::White;
    this->ChangePIN_CodeOrPhone->ImeMode = System::Windows::Forms::ImeMode::NoControl;
    this->ChangePIN_CodeOrPhone->LineThickness = 2;
    this->ChangePIN_CodeOrPhone->Location = System::Drawing::Point(472, 269);
    this->ChangePIN_CodeOrPhone->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
    this->ChangePIN_CodeOrPhone->Name = L"ChangePIN_CodeOrPhone";
    this->ChangePIN_CodeOrPhone->Size = System::Drawing::Size(169, 68);
    this->ChangePIN_CodeOrPhone->TabIndex = 25;
    this->ChangePIN_CodeOrPhone->Click += gcnew System::EventHandler(this, &MainMenuPage::ChangePIN_CodeOrPhone_Click);
    // 
    // MainMenuPage
    // 
    this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
    this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
    this->BackColor = System::Drawing::Color::White;
    this->ClientSize = System::Drawing::Size(700, 550);
    this->Controls->Add(this->ChangePIN_CodeOrPhone);
    this->Controls->Add(this->ConversionFormButton);
    this->Controls->Add(this->DepositFormButton);
    this->Controls->Add(this->PhoneReplenishmentFormButton);
    this->Controls->Add(this->BalanceFormButton);
    this->Controls->Add(this->WithdrawalFormButton);
    this->Controls->Add(this->ReplanishmentFormButton);
    this->Controls->Add(this->panel1);
    this->Controls->Add(this->label3);
    this->Controls->Add(this->menuStrip1);
    this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
    this->Name = L"MainMenuPage";
    this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
    this->Text = L"MainMenuPage";
    this->menuStrip1->ResumeLayout(false);
    this->menuStrip1->PerformLayout();
    this->panel1->ResumeLayout(false);
    this->panel1->PerformLayout();
    this->ResumeLayout(false);
    this->PerformLayout();

}

inline System::Void Diploma::MainMenuPage::label3_Click(System::Object^ sender, System::EventArgs^ e) {
	exit(0);
}
inline System::Void Diploma::MainMenuPage::label3_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	this->label3->ForeColor = System::Drawing::Color::Tomato;
}
inline System::Void Diploma::MainMenuPage::label3_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	this->label3->ForeColor = System::Drawing::Color::Gainsboro;
}
inline System::Void Diploma::MainMenuPage::menuToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
inline System::Void Diploma::MainMenuPage::exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	exit(0);
}
inline System::Void Diploma::MainMenuPage::aboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("This is main menu page.\nU can select any operation what u need.\nGood luck.");
}
inline System::Void Diploma::MainMenuPage::ReplanishmentFormButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	Card_InForm^ _Card_InForm1 = gcnew Card_InForm();		// creating the Replenishment Form
	_Card_InForm1->ShowDialog();							// going to Card Replenishment
}
inline System::Void Diploma::MainMenuPage::WithdrawalForm_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	Card_OutForm^ _Card_OutForm1 = gcnew Card_OutForm();	// creating the Withdrawal Form
	_Card_OutForm1->ShowDialog();							// going to Card Withdrawal
}
inline System::Void Diploma::MainMenuPage::BalanceFormButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	BalanceForm^ _BalanceForm1 = gcnew BalanceForm();		// creating the Balance n Extract Form
	_BalanceForm1->ShowDialog();							// going to Balance n Extract
}
inline System::Void Diploma::MainMenuPage::PhoneReplenishmentFormButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	Phone_InForm^ _Phone_InForm1 = gcnew Phone_InForm();	// creating the Phone Replenishment Form
	_Phone_InForm1->ShowDialog();							// going to Phone Replenishment
}
inline System::Void Diploma::MainMenuPage::DepositForm_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	DepositForm^ _DepositForm1 = gcnew DepositForm();		// creating the Change PIN-Code Or Phone Form
	_DepositForm1->ShowDialog();							// going to Changing Form
}
inline System::Void Diploma::MainMenuPage::ChangePIN_CodeOrPhone_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	ChangingForm^ _ChangingForm1 = gcnew ChangingForm();	// creating the Deposit Form
	_ChangingForm1->ShowDialog();							// going to Deposit
}
inline System::Void Diploma::MainMenuPage::ConversionFormButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	ConversionForm^ _ConversionForm1 = gcnew ConversionForm();// creating the Conversion n Buy/Sale Form
	_ConversionForm1->ShowDialog();							  // going to Conversion n Buy/Sale
}
