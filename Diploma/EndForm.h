#pragma once
#include <stdlib.h>
namespace Diploma {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для EndForm
	/// </summary>
	public ref class EndForm : public System::Windows::Forms::Form
	{
	public:
		EndForm(void)
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
		~EndForm()
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
	private: System::Windows::Forms::Label^ label1;
	private: ::JThinButton::JThinButton^ MainMenuButton;
	private: ::JThinButton::JThinButton^ EndButton;




	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->MainMenuButton = (gcnew ::JThinButton::JThinButton());
			this->EndButton = (gcnew ::JThinButton::JThinButton());
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
			this->menuStrip1->Size = System::Drawing::Size(600, 27);
			this->menuStrip1->TabIndex = 3;
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
			this->exitToolStripMenuItem->Size = System::Drawing::Size(224, 28);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &EndForm::exitToolStripMenuItem_Click);
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
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->label3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->Location = System::Drawing::Point(571, -5);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(31, 32);
			this->label3->TabIndex = 6;
			this->label3->Text = L"X";
			this->label3->Click += gcnew System::EventHandler(this, &EndForm::label3_Click);
			this->label3->MouseLeave += gcnew System::EventHandler(this, &EndForm::label3_MouseLeave);
			this->label3->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &EndForm::label3_MouseMove);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->panel1->Controls->Add(this->label2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 27);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(600, 100);
			this->panel1->TabIndex = 7;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(65, 24);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(474, 49);
			this->label2->TabIndex = 2;
			this->label2->Text = L"END OF THE OPERATION";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->Font = (gcnew System::Drawing::Font(L"Cooper Black", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->label1->Location = System::Drawing::Point(35, 229);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(530, 38);
			this->label1->TabIndex = 9;
			this->label1->Text = L"ОПЕРАЦІЯ ПРОЙШЛА УСПІШНО";
			// 
			// MainMenuButton
			// 
			this->MainMenuButton->BackColor = System::Drawing::Color::Transparent;
			this->MainMenuButton->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->MainMenuButton->BorderColor = System::Drawing::Color::White;
			this->MainMenuButton->BorderRadius = 40;
			this->MainMenuButton->ButtonText = L"НА ГОЛОВНУ";
			this->MainMenuButton->Font = (gcnew System::Drawing::Font(L"Cooper Black", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MainMenuButton->Font_Size = (gcnew System::Drawing::Font(L"Cooper Black", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MainMenuButton->ForeColors = System::Drawing::Color::Gainsboro;
			this->MainMenuButton->HoverBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->MainMenuButton->HoverBorder = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->MainMenuButton->HoverFontColor = System::Drawing::Color::WhiteSmoke;
			this->MainMenuButton->LineThickness = 2;
			this->MainMenuButton->Location = System::Drawing::Point(315, 351);
			this->MainMenuButton->Margin = System::Windows::Forms::Padding(4);
			this->MainMenuButton->Name = L"MainMenuButton";
			this->MainMenuButton->Size = System::Drawing::Size(224, 83);
			this->MainMenuButton->TabIndex = 11;
			this->MainMenuButton->Click += gcnew System::EventHandler(this, &EndForm::MainMenuButton_Click);
			// 
			// EndButton
			// 
			this->EndButton->BackColor = System::Drawing::Color::Transparent;
			this->EndButton->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->EndButton->BorderColor = System::Drawing::Color::White;
			this->EndButton->BorderRadius = 40;
			this->EndButton->ButtonText = L"ЗАКІНЧИТИ";
			this->EndButton->Font = (gcnew System::Drawing::Font(L"Cooper Black", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EndButton->Font_Size = (gcnew System::Drawing::Font(L"Cooper Black", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EndButton->ForeColors = System::Drawing::Color::Gainsboro;
			this->EndButton->HoverBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->EndButton->HoverBorder = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->EndButton->HoverFontColor = System::Drawing::Color::WhiteSmoke;
			this->EndButton->LineThickness = 2;
			this->EndButton->Location = System::Drawing::Point(65, 351);
			this->EndButton->Margin = System::Windows::Forms::Padding(4);
			this->EndButton->Name = L"EndButton";
			this->EndButton->Size = System::Drawing::Size(224, 83);
			this->EndButton->TabIndex = 12;
			this->EndButton->Click += gcnew System::EventHandler(this, &EndForm::EndButton_Click);
			// 
			// EndForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(600, 488);
			this->Controls->Add(this->EndButton);
			this->Controls->Add(this->MainMenuButton);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"EndForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"EndForm";
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
	private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		exit(0);
	}
	private: System::Void label3_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		this->label3->ForeColor = System::Drawing::Color::Tomato;
	}
	private: System::Void label3_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->label3->ForeColor = System::Drawing::Color::Gainsboro;
	}
	private: System::Void EndButton_Click(System::Object^ sender, System::EventArgs^ e) {
		exit(0);
	}
	private: System::Void MainMenuButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	};
}
