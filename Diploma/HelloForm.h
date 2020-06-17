#pragma once
#include "Log_InPage.h"
#include "Sign_InPage.h"
#include <stdlib.h>
namespace Diploma {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// summary for HelloForm
	public ref class HelloForm : public System::Windows::Forms::Form
	{
	public:
		HelloForm(void);

	protected:

		/// delete all
		~HelloForm();

	protected:
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
	private: ::JThinButton::JThinButton^ Log_InFormButton;

	private: ::JThinButton::JThinButton^ Sign_InFormButton;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Panel^ panel1;
	private: ::JDragControl::JDragControl^ jDragControl1;
	private: ::JDragControl::JDragControl^ jDragControl2;

	private: System::ComponentModel::IContainer^ components;

	private:
		
#pragma region Windows Form Designer generated code

		/// func for designer. don`t change

		void InitializeComponent(void);
#pragma endregion
		System::Media::SoundPlayer^ simpleSound = gcnew System::Media::SoundPlayer("Audio/1.wav");
	private: System::Void HelloForm_Load(System::Object^ sender, System::EventArgs^ e);
		   //config the EDN label
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void label3_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
	private: System::Void label3_MouseLeave(System::Object^ sender, System::EventArgs^ e);

	private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void aboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
		   //config the Sign-In Form button
	private: System::Void Sign_InFormButton_Click(System::Object^ sender, System::EventArgs^ e);
		   //config the Log-In Form button
	private: System::Void Log_InFormButton1_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
