#pragma once
#include <msclr/marshal_cppstd.h>
#include <msclr/marshal.h>

void writeToFile(std::string getLocation);
std::string useLocation();
using namespace msclr::interop;
std::string gitPull(std::string location);

namespace GitHelper {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for GitPull
	/// </summary>
	public ref class GitPull : public System::Windows::Forms::Form
	{
	public:
		GitPull(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~GitPull()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ dirLabel;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dirLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(270, 83);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(213, 37);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Enter location";
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(142, 249);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(466, 44);
			this->textBox1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(384, 312);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(224, 58);
			this->button1->TabIndex = 2;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &GitPull::button1_Click);
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(142, 312);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(224, 58);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &GitPull::button2_Click);
			// 
			// button3
			// 
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(259, 123);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(224, 58);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Last dir:";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &GitPull::button3_Click);
			// 
			// dirLabel
			// 
			this->dirLabel->AutoSize = true;
			this->dirLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dirLabel->Location = System::Drawing::Point(135, 194);
			this->dirLabel->Name = L"dirLabel";
			this->dirLabel->Size = System::Drawing::Size(0, 37);
			this->dirLabel->TabIndex = 5;
			this->dirLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// GitPull
			// 
			this->AcceptButton = this->button1;
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(756, 552);
			this->Controls->Add(this->dirLabel);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->MaximumSize = System::Drawing::Size(782, 623);
			this->MinimumSize = System::Drawing::Size(782, 623);
			this->Name = L"GitPull";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Git Helper - Pull";
			this->Load += gcnew System::EventHandler(this, &GitPull::GitPull_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Close();

	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	if (String::IsNullOrEmpty(textBox1->Text)) {

		MessageBox::Show("Enter the location first!", "Git Helper");

	}
	else {

		String^ location = textBox1->Text;
		std::string convert_location = marshal_as<std::string>(location);;
		std::string convert_output = gitPull(convert_location);
		String^ output = gcnew String(convert_output.c_str());
		MessageBox::Show(output, "Git Helper");
		dirLabel->Text = location;
		writeToFile(convert_location);
	}
}
private: System::Void GitPull_Load(System::Object^ sender, System::EventArgs^ e) {

	std::string getDir = useLocation();
	String^ convert_getDir = gcnew String(getDir.c_str());
	dirLabel->Text = convert_getDir;

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	std::string getDir = useLocation();
	String^ convert_getDir = gcnew String(getDir.c_str());

	if (String::IsNullOrEmpty(convert_getDir)) {

		return;

	}
	else {

		textBox1->Text = convert_getDir;

	}

}
};
}
