#include "Log_InPage.h"

inline Diploma::Log_InPage::Log_InPage(void)
{
	InitializeComponent();
}

/// delete all

inline Diploma::Log_InPage::~Log_InPage()
{
	if (components)
	{
		delete components;
	}
}

//config the EDN label

inline void Diploma::Log_InPage::InitializeComponent(void)
{
	this->components = (gcnew System::ComponentModel::Container());
	System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Log_InPage::typeid));
	this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
	this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
	this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
	this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
	this->label3 = (gcnew System::Windows::Forms::Label());
	this->CardNumberTxt = (gcnew ::JMetroTextBox::JMetroTextBox());
	this->PIN_CodeTxt = (gcnew ::JMetroTextBox::JMetroTextBox());
	this->label1 = (gcnew System::Windows::Forms::Label());
	this->label2 = (gcnew System::Windows::Forms::Label());
	this->SubmitButton = (gcnew ::JThinButton::JThinButton());
	this->jDragControl1 = (gcnew ::JDragControl::JDragControl(this->components));
	this->panel1 = (gcnew System::Windows::Forms::Panel());
	this->label4 = (gcnew System::Windows::Forms::Label());
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
	this->menuStrip1->Size = System::Drawing::Size(532, 27);
	this->menuStrip1->TabIndex = 2;
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
	this->fileToolStripMenuItem->Size = System::Drawing::Size(84, 23);
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
	this->exitToolStripMenuItem->Size = System::Drawing::Size(224, 28);
	this->exitToolStripMenuItem->Text = L"Exit";
	this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Log_InPage::exitToolStripMenuItem_Click);
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
	// label3
	// 
	this->label3->AutoSize = true;
	this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
		static_cast<System::Int32>(static_cast<System::Byte>(242)));
	this->label3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->label3->ForeColor = System::Drawing::SystemColors::ButtonFace;
	this->label3->Location = System::Drawing::Point(501, -5);
	this->label3->Name = L"label3";
	this->label3->Size = System::Drawing::Size(31, 32);
	this->label3->TabIndex = 5;
	this->label3->Text = L"X";
	this->label3->Click += gcnew System::EventHandler(this, &Log_InPage::label3_Click);
	this->label3->MouseLeave += gcnew System::EventHandler(this, &Log_InPage::label3_MouseLeave);
	this->label3->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Log_InPage::label3_MouseMove);
	// 
	// CardNumberTxt
	// 
	this->CardNumberTxt->BackColor = System::Drawing::Color::Transparent;
	this->CardNumberTxt->BorderColor = System::Drawing::Color::Empty;
	this->CardNumberTxt->BorderRadius = 20;
	this->CardNumberTxt->FillColor = System::Drawing::SystemColors::Window;
	this->CardNumberTxt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
	this->CardNumberTxt->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
	this->CardNumberTxt->ForeColors = System::Drawing::Color::Gray;
	this->CardNumberTxt->IsPassword = false;
	this->CardNumberTxt->LineThickness = 2;
	this->CardNumberTxt->Location = System::Drawing::Point(91, 184);
	this->CardNumberTxt->Margin = System::Windows::Forms::Padding(4);
	this->CardNumberTxt->MaxLength = 32767;
	this->CardNumberTxt->MouseOnHover = System::Drawing::Color::DarkGray;
	this->CardNumberTxt->Name = L"CardNumberTxt";
	this->CardNumberTxt->OnCursor = System::Windows::Forms::Cursors::IBeam;
	this->CardNumberTxt->OnFocusColor = System::Drawing::Color::DarkGray;
	this->CardNumberTxt->OnFocusFontColor = System::Drawing::Color::Gray;
	this->CardNumberTxt->ReadOnly = false;
	this->CardNumberTxt->Size = System::Drawing::Size(364, 48);
	this->CardNumberTxt->TabIndex = 6;
	this->CardNumberTxt->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
	this->CardNumberTxt->TextName = L"";
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
	this->PIN_CodeTxt->IsPassword = true;
	this->PIN_CodeTxt->LineThickness = 2;
	this->PIN_CodeTxt->Location = System::Drawing::Point(91, 267);
	this->PIN_CodeTxt->Margin = System::Windows::Forms::Padding(4);
	this->PIN_CodeTxt->MaxLength = 32767;
	this->PIN_CodeTxt->MouseOnHover = System::Drawing::Color::DarkGray;
	this->PIN_CodeTxt->Name = L"PIN_CodeTxt";
	this->PIN_CodeTxt->OnCursor = System::Windows::Forms::Cursors::IBeam;
	this->PIN_CodeTxt->OnFocusColor = System::Drawing::Color::DarkGray;
	this->PIN_CodeTxt->OnFocusFontColor = System::Drawing::Color::Gray;
	this->PIN_CodeTxt->ReadOnly = false;
	this->PIN_CodeTxt->Size = System::Drawing::Size(364, 48);
	this->PIN_CodeTxt->TabIndex = 7;
	this->PIN_CodeTxt->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
	this->PIN_CodeTxt->TextName = L"";
	// 
	// label1
	// 
	this->label1->AutoSize = true;
	this->label1->BackColor = System::Drawing::Color::White;
	this->label1->Font = (gcnew System::Drawing::Font(L"Cooper Black", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
		static_cast<System::Int32>(static_cast<System::Byte>(242)));
	this->label1->Location = System::Drawing::Point(182, 153);
	this->label1->Name = L"label1";
	this->label1->Size = System::Drawing::Size(178, 27);
	this->label1->TabIndex = 8;
	this->label1->Text = L"Card Number";
	// 
	// label2
	// 
	this->label2->AutoSize = true;
	this->label2->BackColor = System::Drawing::Color::White;
	this->label2->Font = (gcnew System::Drawing::Font(L"Cooper Black", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
		static_cast<System::Int32>(static_cast<System::Byte>(242)));
	this->label2->Location = System::Drawing::Point(210, 237);
	this->label2->Name = L"label2";
	this->label2->Size = System::Drawing::Size(124, 27);
	this->label2->TabIndex = 9;
	this->label2->Text = L"PIN-Code";
	// 
	// SubmitButton
	// 
	this->SubmitButton->BackColor = System::Drawing::Color::Transparent;
	this->SubmitButton->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
		static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
	this->SubmitButton->BorderColor = System::Drawing::Color::White;
	this->SubmitButton->BorderRadius = 40;
	this->SubmitButton->ButtonText = L"Submit";
	this->SubmitButton->Font = (gcnew System::Drawing::Font(L"Cooper Black", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->SubmitButton->Font_Size = (gcnew System::Drawing::Font(L"Cooper Black", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->SubmitButton->ForeColors = System::Drawing::Color::Snow;
	this->SubmitButton->HoverBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
		static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
	this->SubmitButton->HoverBorder = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
		static_cast<System::Int32>(static_cast<System::Byte>(242)));
	this->SubmitButton->HoverFontColor = System::Drawing::Color::WhiteSmoke;
	this->SubmitButton->LineThickness = 2;
	this->SubmitButton->Location = System::Drawing::Point(161, 323);
	this->SubmitButton->Margin = System::Windows::Forms::Padding(4);
	this->SubmitButton->Name = L"SubmitButton";
	this->SubmitButton->Size = System::Drawing::Size(224, 83);
	this->SubmitButton->TabIndex = 10;
	this->SubmitButton->Click += gcnew System::EventHandler(this, &Log_InPage::SubmitButtton_Click);
	// 
	// jDragControl1
	// 
	this->jDragControl1->GetForm = this;
	this->jDragControl1->TargetControl = this->menuStrip1;
	// 
	// panel1
	// 
	this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
		static_cast<System::Int32>(static_cast<System::Byte>(242)));
	this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
	this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
	this->panel1->Controls->Add(this->label4);
	this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
	this->panel1->Location = System::Drawing::Point(0, 27);
	this->panel1->Name = L"panel1";
	this->panel1->Size = System::Drawing::Size(532, 100);
	this->panel1->TabIndex = 11;
	// 
	// label4
	// 
	this->label4->AutoSize = true;
	this->label4->BackColor = System::Drawing::Color::Transparent;
	this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	this->label4->ForeColor = System::Drawing::Color::White;
	this->label4->Location = System::Drawing::Point(192, 26);
	this->label4->Name = L"label4";
	this->label4->Size = System::Drawing::Size(158, 47);
	this->label4->TabIndex = 3;
	this->label4->Text = L"LOG IN";
	this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
	// 
	// Log_InPage
	// 
	this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Inherit;
	this->AutoValidate = System::Windows::Forms::AutoValidate::EnableAllowFocusChange;
	this->BackColor = System::Drawing::Color::White;
	this->ClientSize = System::Drawing::Size(532, 424);
	this->Controls->Add(this->panel1);
	this->Controls->Add(this->SubmitButton);
	this->Controls->Add(this->label2);
	this->Controls->Add(this->label1);
	this->Controls->Add(this->PIN_CodeTxt);
	this->Controls->Add(this->CardNumberTxt);
	this->Controls->Add(this->label3);
	this->Controls->Add(this->menuStrip1);
	this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
	this->Name = L"Log_InPage";
	this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
	this->Text = L"Log_InPage";
	this->menuStrip1->ResumeLayout(false);
	this->menuStrip1->PerformLayout();
	this->panel1->ResumeLayout(false);
	this->panel1->PerformLayout();
	this->ResumeLayout(false);
	this->PerformLayout();

}

inline System::Void Diploma::Log_InPage::label3_Click(System::Object^ sender, System::EventArgs^ e) {
	exit(0);
}
inline System::Void Diploma::Log_InPage::label3_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	this->label3->ForeColor = System::Drawing::Color::Tomato;
}
inline System::Void Diploma::Log_InPage::label3_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	this->label3->ForeColor = System::Drawing::Color::Gainsboro;
}
inline System::Void Diploma::Log_InPage::exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	exit(0);
}
inline System::Void Diploma::Log_InPage::SubmitButtton_Click(System::Object^ sender, System::EventArgs^ e) {
	if ((CardNumberTxt->TextName == "") || (PIN_CodeTxt->TextName == "")) {
		MessageBox::Show("Please fill in all columns");
	}
	else {
		//Creating class object of "DBFicsation"
		DBFicsation DBF1;
		ParametersClass^ n = gcnew ParametersClass();

		String^ CardNumber1 = CardNumberTxt->TextName;
		String^ PIN_Code1 = PIN_CodeTxt->TextName;

		n->CardNumber = CardNumber1;
		n->PIN_Code = PIN_Code1;

		// Using Log_In_Submit function
		//DBF1.Log_In_Submit(n);

		SqlConnection^ conn;
		SqlConnectionStringBuilder^ connStringBuilder;
		try {
			// Connection to DB
			// Creation the connect to DB
			// Data Source=ðîìàí-ïê\sqlexpress;Initial Catalog=ClientsDB;Integrated Security=True

			connStringBuilder = gcnew SqlConnectionStringBuilder();
			connStringBuilder->DataSource = "ðîìàí-ïê\\sqlexpress";
			connStringBuilder->InitialCatalog = "ClientsDB";
			connStringBuilder->IntegratedSecurity = true;

			conn = gcnew SqlConnection(Convert::ToString(connStringBuilder));

			String^ cmdText = "SELECT * FROM dbo.Clients Where CardNumber = '" + n->CardNumber + "' AND PIN_Code  = '" + n->PIN_Code + "'";
			SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);

			cmd->Parameters->AddWithValue("@CardNumber", n->CardNumber);
			cmd->Parameters->AddWithValue("@PIN_Code", n->PIN_Code);
			conn->Open();
			SqlDataAdapter^ sda = gcnew SqlDataAdapter(cmdText, conn);
			DataTable^ dtbl = gcnew DataTable();
			sda->Fill(dtbl);
			cmd->ExecuteNonQuery();

			if (dtbl->Rows->Count == 1) {
				ParametersClass^ n1 = gcnew ParametersClass();
				DBF1.DataSelect(n1);
				//MessageBox::Show("login successful!");
				//goiòg to next page
				this->Hide();
				MainMenuPage^ _MainMenuPage1 = gcnew MainMenuPage();
				_MainMenuPage1->ShowDialog();
				this->Show();
			}
			else {
				MessageBox::Show("Check your card number and PIN-code");
			}
		}
		finally {
			if (conn != nullptr) {
				conn->Close();
			}
			// Completed
		}
	}
}
