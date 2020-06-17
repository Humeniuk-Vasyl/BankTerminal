#pragma once
#include <stdlib.h>
namespace Diploma {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// summary for EndForm
	public ref class EndForm : public System::Windows::Forms::Form
	{
	public:
		EndForm(void);

	protected:
		/// delete all
		~EndForm();
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label1;
	private: ::JThinButton::JThinButton^ MainMenuButton;
	private: ::JThinButton::JThinButton^ EndButton;
	private: System::Windows::Forms::Label^ label2;

	private:

		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// func for designer. don`t change
		void InitializeComponent(void);
#pragma endregion
	private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void aboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void label3_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
	private: System::Void label3_MouseLeave(System::Object^ sender, System::EventArgs^ e);
	private: System::Void EndButton_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void MainMenuButton_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
