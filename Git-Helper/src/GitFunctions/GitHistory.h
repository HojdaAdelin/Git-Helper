#pragma once
#include <string>
#include <msclr/marshal_cppstd.h>
#include <msclr/marshal.h>
using namespace msclr::interop;

std::string gitHistory(std::string location);

namespace GitHelper {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for GitHistory
	/// </summary>
	public ref class GitHistory : public System::Windows::Forms::Form
	{
	public:
		GitHistory(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		System::Windows::Forms::TextBox^ outputHistoryText;
		System::Windows::Forms::TextBox^ historyText;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~GitHistory()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:

	private: System::Windows::Forms::Button^ button1;

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
			this->historyText = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->outputHistoryText = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(41, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(256, 42);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Enter location:";
			// 
			// historyText
			// 
			this->historyText->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->historyText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->historyText->Location = System::Drawing::Point(303, 41);
			this->historyText->Name = L"historyText";
			this->historyText->Size = System::Drawing::Size(663, 49);
			this->historyText->TabIndex = 1;
			this->historyText->TextChanged += gcnew System::EventHandler(this, &GitHistory::historyText_TextChanged);
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(1016, 41);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(362, 49);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Enter";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &GitHistory::button1_Click);
			// 
			// outputHistoryText
			// 
			this->outputHistoryText->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->outputHistoryText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->outputHistoryText->Location = System::Drawing::Point(48, 113);
			this->outputHistoryText->Multiline = true;
			this->outputHistoryText->Name = L"outputHistoryText";
			this->outputHistoryText->ReadOnly = true;
			this->outputHistoryText->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->outputHistoryText->Size = System::Drawing::Size(1330, 719);
			this->outputHistoryText->TabIndex = 3;
			this->outputHistoryText->WordWrap = false;
			this->outputHistoryText->TextChanged += gcnew System::EventHandler(this, &GitHistory::outputHistoryText_TextChanged);
			// 
			// GitHistory
			// 
			this->AcceptButton = this->button1;
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1423, 893);
			this->Controls->Add(this->outputHistoryText);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->historyText);
			this->Controls->Add(this->label1);
			this->MaximumSize = System::Drawing::Size(1449, 964);
			this->MinimumSize = System::Drawing::Size(1449, 964);
			this->Name = L"GitHistory";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"GitLog";
			this->Load += gcnew System::EventHandler(this, &GitHistory::GitHistory_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void historyText_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void outputHistoryText_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ location;
	String^ output;
	std::string convert_location;
	std::string convert_output;

	if (String::IsNullOrEmpty(historyText->Text)) {

		MessageBox::Show("Enter the location first!", "GitHelper");

	}
	else {

		location = historyText->Text;
		convert_location = marshal_as<std::string>(location);
		convert_output = gitHistory(convert_location);
		output = gcnew String(convert_output.c_str());
		outputHistoryText->Text = output;

	}

}
private: System::Void GitHistory_Load(System::Object^ sender, System::EventArgs^ e) {
}

};
}
