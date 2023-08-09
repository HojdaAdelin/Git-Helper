#pragma once
#include <msclr/marshal_cppstd.h>
#include <msclr/marshal.h>
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
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(270, 105);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(213, 37);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Enter location";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(142, 165);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(466, 44);
			this->textBox1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(383, 252);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(224, 58);
			this->button1->TabIndex = 2;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &GitPull::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(142, 252);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(224, 58);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &GitPull::button2_Click);
			// 
			// GitPull
			// 
			this->AcceptButton = this->button1;
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(756, 552);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->MaximumSize = System::Drawing::Size(782, 623);
			this->MinimumSize = System::Drawing::Size(782, 623);
			this->Name = L"GitPull";
			this->Text = L"GitPull";
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

	}
}
};
}
