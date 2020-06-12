#pragma once
#include "Card_InForm.h"
#include "Card_OutForm.h"
#include "BalanceForm.h"
#include "Phone_InForm.h"
#include "DepositForm.h"
#include "ConversionForm.h"
#include <stdlib.h>

namespace Diploma {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainMenuPage
	/// </summary>
	public ref class MainMenuPage : public System::Windows::Forms::Form
	{
	public:
		MainMenuPage(void)
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
		~MainMenuPage()
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
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label2;







	private: ::JDragControl::JDragControl^ jDragControl1;
	private: ::JDragControl::JDragControl^ jDragControl2;
	private: ::JThinButton::JThinButton^ jThinButton1;
	private: ::JThinButton::JThinButton^ jThinButton3;
	private: ::JThinButton::JThinButton^ jThinButton2;
	private: ::JThinButton::JThinButton^ jThinButton6;
	private: ::JThinButton::JThinButton^ jThinButton5;
	private: ::JThinButton::JThinButton^ jThinButton4;




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
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->jDragControl1 = (gcnew ::JDragControl::JDragControl(this->components));
			this->jDragControl2 = (gcnew ::JDragControl::JDragControl(this->components));
			this->jThinButton1 = (gcnew ::JThinButton::JThinButton());
			this->jThinButton2 = (gcnew ::JThinButton::JThinButton());
			this->jThinButton3 = (gcnew ::JThinButton::JThinButton());
			this->jThinButton4 = (gcnew ::JThinButton::JThinButton());
			this->jThinButton5 = (gcnew ::JThinButton::JThinButton());
			this->jThinButton6 = (gcnew ::JThinButton::JThinButton());
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
			this->label3->Location = System::Drawing::Point(669, -5);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(31, 32);
			this->label3->TabIndex = 7;
			this->label3->Text = L"X";
			this->label3->Click += gcnew System::EventHandler(this, &MainMenuPage::label3_Click);
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
			// jThinButton1
			// 
			this->jThinButton1->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->jThinButton1->BackColor = System::Drawing::Color::Transparent;
			this->jThinButton1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->jThinButton1->BorderColor = System::Drawing::Color::White;
			this->jThinButton1->BorderRadius = 15;
			this->jThinButton1->ButtonText = L"Поповнення";
			this->jThinButton1->Font = (gcnew System::Drawing::Font(L"Impact", 19.2F));
			this->jThinButton1->Font_Size = (gcnew System::Drawing::Font(L"Impact", 19.2F));
			this->jThinButton1->ForeColors = System::Drawing::SystemColors::ControlLight;
			this->jThinButton1->HoverBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->jThinButton1->HoverBorder = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->jThinButton1->HoverFontColor = System::Drawing::Color::White;
			this->jThinButton1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->jThinButton1->LineThickness = 2;
			this->jThinButton1->Location = System::Drawing::Point(60, 203);
			this->jThinButton1->Margin = System::Windows::Forms::Padding(4);
			this->jThinButton1->Name = L"jThinButton1";
			this->jThinButton1->Size = System::Drawing::Size(242, 135);
			this->jThinButton1->TabIndex = 19;
			this->jThinButton1->Click += gcnew System::EventHandler(this, &MainMenuPage::jThinButton1_Click);
			// 
			// jThinButton2
			// 
			this->jThinButton2->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->jThinButton2->BackColor = System::Drawing::Color::Transparent;
			this->jThinButton2->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->jThinButton2->BorderColor = System::Drawing::Color::White;
			this->jThinButton2->BorderRadius = 15;
			this->jThinButton2->ButtonText = L"Знімання";
			this->jThinButton2->Font = (gcnew System::Drawing::Font(L"Impact", 19.2F));
			this->jThinButton2->Font_Size = (gcnew System::Drawing::Font(L"Impact", 19.2F));
			this->jThinButton2->ForeColors = System::Drawing::SystemColors::ControlLight;
			this->jThinButton2->HoverBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->jThinButton2->HoverBorder = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->jThinButton2->HoverFontColor = System::Drawing::Color::White;
			this->jThinButton2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->jThinButton2->LineThickness = 2;
			this->jThinButton2->Location = System::Drawing::Point(60, 336);
			this->jThinButton2->Margin = System::Windows::Forms::Padding(4);
			this->jThinButton2->Name = L"jThinButton2";
			this->jThinButton2->Size = System::Drawing::Size(242, 135);
			this->jThinButton2->TabIndex = 20;
			this->jThinButton2->Click += gcnew System::EventHandler(this, &MainMenuPage::jThinButton2_Click);
			// 
			// jThinButton3
			// 
			this->jThinButton3->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->jThinButton3->BackColor = System::Drawing::Color::Transparent;
			this->jThinButton3->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->jThinButton3->BorderColor = System::Drawing::Color::White;
			this->jThinButton3->BorderRadius = 15;
			this->jThinButton3->ButtonText = L"баланс та\n  виписка";
			this->jThinButton3->Font = (gcnew System::Drawing::Font(L"Impact", 12));
			this->jThinButton3->Font_Size = (gcnew System::Drawing::Font(L"Impact", 12));
			this->jThinButton3->ForeColors = System::Drawing::SystemColors::ControlLight;
			this->jThinButton3->HoverBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->jThinButton3->HoverBorder = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->jThinButton3->HoverFontColor = System::Drawing::Color::White;
			this->jThinButton3->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->jThinButton3->LineThickness = 2;
			this->jThinButton3->Location = System::Drawing::Point(302, 203);
			this->jThinButton3->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->jThinButton3->Name = L"jThinButton3";
			this->jThinButton3->Size = System::Drawing::Size(169, 135);
			this->jThinButton3->TabIndex = 21;
			this->jThinButton3->Click += gcnew System::EventHandler(this, &MainMenuPage::jThinButton3_Click);
			// 
			// jThinButton4
			// 
			this->jThinButton4->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->jThinButton4->BackColor = System::Drawing::Color::Transparent;
			this->jThinButton4->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->jThinButton4->BorderColor = System::Drawing::Color::White;
			this->jThinButton4->BorderRadius = 15;
			this->jThinButton4->ButtonText = L"Поповнення \n мобільного";
			this->jThinButton4->Font = (gcnew System::Drawing::Font(L"Impact", 12));
			this->jThinButton4->Font_Size = (gcnew System::Drawing::Font(L"Impact", 12));
			this->jThinButton4->ForeColors = System::Drawing::SystemColors::ControlLight;
			this->jThinButton4->HoverBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->jThinButton4->HoverBorder = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->jThinButton4->HoverFontColor = System::Drawing::Color::White;
			this->jThinButton4->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->jThinButton4->LineThickness = 2;
			this->jThinButton4->Location = System::Drawing::Point(302, 336);
			this->jThinButton4->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->jThinButton4->Name = L"jThinButton4";
			this->jThinButton4->Size = System::Drawing::Size(169, 135);
			this->jThinButton4->TabIndex = 22;
			this->jThinButton4->Click += gcnew System::EventHandler(this, &MainMenuPage::jThinButton4_Click);
			// 
			// jThinButton5
			// 
			this->jThinButton5->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->jThinButton5->BackColor = System::Drawing::Color::Transparent;
			this->jThinButton5->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->jThinButton5->BorderColor = System::Drawing::Color::White;
			this->jThinButton5->BorderRadius = 15;
			this->jThinButton5->ButtonText = L"Депозит";
			this->jThinButton5->Font = (gcnew System::Drawing::Font(L"Impact", 12));
			this->jThinButton5->Font_Size = (gcnew System::Drawing::Font(L"Impact", 12));
			this->jThinButton5->ForeColors = System::Drawing::SystemColors::ControlLight;
			this->jThinButton5->HoverBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->jThinButton5->HoverBorder = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->jThinButton5->HoverFontColor = System::Drawing::Color::White;
			this->jThinButton5->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->jThinButton5->LineThickness = 2;
			this->jThinButton5->Location = System::Drawing::Point(472, 203);
			this->jThinButton5->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->jThinButton5->Name = L"jThinButton5";
			this->jThinButton5->Size = System::Drawing::Size(169, 135);
			this->jThinButton5->TabIndex = 23;
			this->jThinButton5->Click += gcnew System::EventHandler(this, &MainMenuPage::jThinButton5_Click);
			// 
			// jThinButton6
			// 
			this->jThinButton6->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->jThinButton6->BackColor = System::Drawing::Color::Transparent;
			this->jThinButton6->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->jThinButton6->BorderColor = System::Drawing::Color::White;
			this->jThinButton6->BorderRadius = 15;
			this->jThinButton6->ButtonText = L"    Конвертація і\n купівля/продаж";
			this->jThinButton6->Font = (gcnew System::Drawing::Font(L"Impact", 12));
			this->jThinButton6->Font_Size = (gcnew System::Drawing::Font(L"Impact", 12));
			this->jThinButton6->ForeColors = System::Drawing::SystemColors::ControlLight;
			this->jThinButton6->HoverBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->jThinButton6->HoverBorder = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->jThinButton6->HoverFontColor = System::Drawing::Color::White;
			this->jThinButton6->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->jThinButton6->LineThickness = 2;
			this->jThinButton6->Location = System::Drawing::Point(472, 336);
			this->jThinButton6->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->jThinButton6->Name = L"jThinButton6";
			this->jThinButton6->Size = System::Drawing::Size(169, 135);
			this->jThinButton6->TabIndex = 24;
			this->jThinButton6->Click += gcnew System::EventHandler(this, &MainMenuPage::jThinButton6_Click);
			// 
			// MainMenuPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(700, 550);
			this->Controls->Add(this->jThinButton6);
			this->Controls->Add(this->jThinButton5);
			this->Controls->Add(this->jThinButton4);
			this->Controls->Add(this->jThinButton3);
			this->Controls->Add(this->jThinButton2);
			this->Controls->Add(this->jThinButton1);
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
#pragma endregion
	
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	exit(0);
	}
private: System::Void jThinButton1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	Card_InForm^ _Card_InForm1 = gcnew Card_InForm();		// creating the Replenishment Form
	_Card_InForm1->ShowDialog();							// going to Card Replenishment
}
private: System::Void jThinButton2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	Card_OutForm^ _Card_OutForm1 = gcnew Card_OutForm();	// creating the Withdrawal Form
	_Card_OutForm1->ShowDialog();									// going to Card Withdrawal
}
private: System::Void jThinButton3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	BalanceForm^ _BalanceForm1 = gcnew BalanceForm();		// creating the Balance n Extract Form
	_BalanceForm1->ShowDialog();									// going to Balance n Extract
}
private: System::Void jThinButton4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	Phone_InForm^ _Phone_InForm1 = gcnew Phone_InForm();	// creating the Phone Replenishment Form
	_Phone_InForm1->ShowDialog();									// going to Phone Replenishment
}
private: System::Void jThinButton5_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	DepositForm^ _DepositForm1 = gcnew DepositForm();		// creating the Deposit Form
	_DepositForm1->ShowDialog();									// going to Deposit
}
private: System::Void jThinButton6_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	ConversionForm^ _ConversionForm1 = gcnew ConversionForm();// creating the Conversion n Buy/Sale Form
	_ConversionForm1->ShowDialog();								  // going to Conversion n Buy/Sale
}
};
}
