#pragma once
#include "Log_InPage.h"
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
	/// —водка дл€ Sign_InPage
	/// </summary>
	public ref class Sign_InPage : public System::Windows::Forms::Form
	{
	public:
		Sign_InPage(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Sign_InPage()
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
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;
	private: ::JMetroTextBox::JMetroTextBox^ jMetroTextBox1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: ::JMetroTextBox::JMetroTextBox^ jMetroTextBox2;
	private: System::Windows::Forms::Label^ label5;
	private: ::JMetroTextBox::JMetroTextBox^ jMetroTextBox3;
	private: System::Windows::Forms::Label^ label6;
	private: ::JMetroTextBox::JMetroTextBox^ jMetroTextBox4;
	private: ::JThinButton::JThinButton^ jThinButton2;
	private: ::JDragControl::JDragControl^ jDragControl1;
	private: ::JDragControl::JDragControl^ jDragControl2;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->jMetroTextBox1 = (gcnew ::JMetroTextBox::JMetroTextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->jMetroTextBox2 = (gcnew ::JMetroTextBox::JMetroTextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->jMetroTextBox3 = (gcnew ::JMetroTextBox::JMetroTextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->jMetroTextBox4 = (gcnew ::JMetroTextBox::JMetroTextBox());
			this->jThinButton2 = (gcnew ::JThinButton::JThinButton());
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
			this->menuStrip1->Size = System::Drawing::Size(514, 27);
			this->menuStrip1->TabIndex = 3;
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
			// jMetroTextBox1
			// 
			this->jMetroTextBox1->BackColor = System::Drawing::Color::Transparent;
			this->jMetroTextBox1->BorderColor = System::Drawing::Color::Empty;
			this->jMetroTextBox1->BorderRadius = 20;
			this->jMetroTextBox1->FillColor = System::Drawing::SystemColors::Window;
			this->jMetroTextBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->jMetroTextBox1->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->jMetroTextBox1->ForeColors = System::Drawing::Color::Gray;
			this->jMetroTextBox1->IsPassword = false;
			this->jMetroTextBox1->LineThickness = 2;
			this->jMetroTextBox1->Location = System::Drawing::Point(74, 183);
			this->jMetroTextBox1->Margin = System::Windows::Forms::Padding(4);
			this->jMetroTextBox1->MaxLength = 32767;
			this->jMetroTextBox1->MouseOnHover = System::Drawing::Color::DarkGray;
			this->jMetroTextBox1->Name = L"jMetroTextBox1";
			this->jMetroTextBox1->OnCursor = System::Windows::Forms::Cursors::IBeam;
			this->jMetroTextBox1->OnFocusColor = System::Drawing::Color::DarkGray;
			this->jMetroTextBox1->OnFocusFontColor = System::Drawing::Color::Gray;
			this->jMetroTextBox1->ReadOnly = false;
			this->jMetroTextBox1->Size = System::Drawing::Size(364, 48);
			this->jMetroTextBox1->TabIndex = 9;
			this->jMetroTextBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->jMetroTextBox1->TextName = L"";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->panel1->Controls->Add(this->label2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 27);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(514, 100);
			this->panel1->TabIndex = 11;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaption;
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
			// jMetroTextBox2
			// 
			this->jMetroTextBox2->BackColor = System::Drawing::Color::Transparent;
			this->jMetroTextBox2->BorderColor = System::Drawing::Color::Empty;
			this->jMetroTextBox2->BorderRadius = 20;
			this->jMetroTextBox2->FillColor = System::Drawing::SystemColors::Window;
			this->jMetroTextBox2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->jMetroTextBox2->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->jMetroTextBox2->ForeColors = System::Drawing::Color::Gray;
			this->jMetroTextBox2->IsPassword = false;
			this->jMetroTextBox2->LineThickness = 2;
			this->jMetroTextBox2->Location = System::Drawing::Point(75, 266);
			this->jMetroTextBox2->Margin = System::Windows::Forms::Padding(4);
			this->jMetroTextBox2->MaxLength = 32767;
			this->jMetroTextBox2->MouseOnHover = System::Drawing::Color::DarkGray;
			this->jMetroTextBox2->Name = L"jMetroTextBox2";
			this->jMetroTextBox2->OnCursor = System::Windows::Forms::Cursors::IBeam;
			this->jMetroTextBox2->OnFocusColor = System::Drawing::Color::DarkGray;
			this->jMetroTextBox2->OnFocusFontColor = System::Drawing::Color::Gray;
			this->jMetroTextBox2->ReadOnly = false;
			this->jMetroTextBox2->Size = System::Drawing::Size(364, 48);
			this->jMetroTextBox2->TabIndex = 12;
			this->jMetroTextBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->jMetroTextBox2->TextName = L"";
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
			// jMetroTextBox3
			// 
			this->jMetroTextBox3->BackColor = System::Drawing::Color::Transparent;
			this->jMetroTextBox3->BorderColor = System::Drawing::Color::Empty;
			this->jMetroTextBox3->BorderRadius = 20;
			this->jMetroTextBox3->FillColor = System::Drawing::SystemColors::Window;
			this->jMetroTextBox3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->jMetroTextBox3->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->jMetroTextBox3->ForeColors = System::Drawing::Color::Gray;
			this->jMetroTextBox3->IsPassword = false;
			this->jMetroTextBox3->LineThickness = 2;
			this->jMetroTextBox3->Location = System::Drawing::Point(75, 345);
			this->jMetroTextBox3->Margin = System::Windows::Forms::Padding(4);
			this->jMetroTextBox3->MaxLength = 32767;
			this->jMetroTextBox3->MouseOnHover = System::Drawing::Color::DarkGray;
			this->jMetroTextBox3->Name = L"jMetroTextBox3";
			this->jMetroTextBox3->OnCursor = System::Windows::Forms::Cursors::IBeam;
			this->jMetroTextBox3->OnFocusColor = System::Drawing::Color::DarkGray;
			this->jMetroTextBox3->OnFocusFontColor = System::Drawing::Color::Gray;
			this->jMetroTextBox3->ReadOnly = false;
			this->jMetroTextBox3->Size = System::Drawing::Size(364, 48);
			this->jMetroTextBox3->TabIndex = 14;
			this->jMetroTextBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->jMetroTextBox3->TextName = L"";
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
			// jMetroTextBox4
			// 
			this->jMetroTextBox4->BackColor = System::Drawing::Color::Transparent;
			this->jMetroTextBox4->BorderColor = System::Drawing::Color::Empty;
			this->jMetroTextBox4->BorderRadius = 20;
			this->jMetroTextBox4->FillColor = System::Drawing::SystemColors::Window;
			this->jMetroTextBox4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->jMetroTextBox4->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->jMetroTextBox4->ForeColors = System::Drawing::Color::Gray;
			this->jMetroTextBox4->IsPassword = false;
			this->jMetroTextBox4->LineThickness = 2;
			this->jMetroTextBox4->Location = System::Drawing::Point(75, 424);
			this->jMetroTextBox4->Margin = System::Windows::Forms::Padding(4);
			this->jMetroTextBox4->MaxLength = 32767;
			this->jMetroTextBox4->MouseOnHover = System::Drawing::Color::DarkGray;
			this->jMetroTextBox4->Name = L"jMetroTextBox4";
			this->jMetroTextBox4->OnCursor = System::Windows::Forms::Cursors::IBeam;
			this->jMetroTextBox4->OnFocusColor = System::Drawing::Color::DarkGray;
			this->jMetroTextBox4->OnFocusFontColor = System::Drawing::Color::Gray;
			this->jMetroTextBox4->ReadOnly = false;
			this->jMetroTextBox4->Size = System::Drawing::Size(364, 48);
			this->jMetroTextBox4->TabIndex = 16;
			this->jMetroTextBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->jMetroTextBox4->TextName = L"";
			// 
			// jThinButton2
			// 
			this->jThinButton2->BackColor = System::Drawing::Color::Transparent;
			this->jThinButton2->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->jThinButton2->BorderColor = System::Drawing::Color::White;
			this->jThinButton2->BorderRadius = 40;
			this->jThinButton2->ButtonText = L"Sign-In";
			this->jThinButton2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->jThinButton2->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->jThinButton2->ForeColors = System::Drawing::Color::Snow;
			this->jThinButton2->HoverBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->jThinButton2->HoverBorder = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->jThinButton2->HoverFontColor = System::Drawing::Color::White;
			this->jThinButton2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->jThinButton2->LineThickness = 2;
			this->jThinButton2->Location = System::Drawing::Point(144, 480);
			this->jThinButton2->Margin = System::Windows::Forms::Padding(4);
			this->jThinButton2->Name = L"jThinButton2";
			this->jThinButton2->Size = System::Drawing::Size(224, 83);
			this->jThinButton2->TabIndex = 18;
			this->jThinButton2->Click += gcnew System::EventHandler(this, &Sign_InPage::jThinButton2_Click);
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
			this->Controls->Add(this->jThinButton2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->jMetroTextBox4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->jMetroTextBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->jMetroTextBox2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->jMetroTextBox1);
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
#pragma endregion
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
		exit(0);
	}
	private: System::Void jThinButton2_Click(System::Object^ sender, System::EventArgs^ e) {
		
		if ((jMetroTextBox1->TextName == "") || (jMetroTextBox2->TextName == "") || (jMetroTextBox3->TextName == ""))
		{
			MessageBox::Show("Input data!");
		}
		else
		{
			//Creating class object of "DBFicsation"
			DBFicsation DBF1;
			if (jMetroTextBox4->TextName == "")
			{
				DBF1.Insert(jMetroTextBox1->TextName, jMetroTextBox2->TextName, jMetroTextBox3->TextName);
			}
			else
			{
				DBF1.Insert(jMetroTextBox1->TextName, jMetroTextBox2->TextName, jMetroTextBox3->TextName, jMetroTextBox4->TextName);
			}
			this->Hide();
			Log_InPage^ _LogInPage1 = gcnew Log_InPage();
			_LogInPage1->Show();
		}
		
	}
	private: System::Void label3_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		this->label3->ForeColor = System::Drawing::Color::Tomato;
	}
	private: System::Void label3_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->label3->ForeColor = System::Drawing::Color::Gainsboro;
	}
	};
}
