#pragma once
#include <string>
void writeToFile(std::string getLocation);
std::string useLocation();

namespace GitHelper {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CreateRepoForm
	/// </summary>
	public ref class CreateRepoForm : public System::Windows::Forms::Form
	{
	public:
		CreateRepoForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::Button^ button3;
	public: System::Windows::Forms::TextBox^ locationText;
	private: System::Windows::Forms::Label^ dirLabel;

		

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CreateRepoForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ label2;
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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->locationText = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dirLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(283, 86);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(213, 37);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Enter location";
			// 
			// locationText
			// 
			this->locationText->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->locationText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->locationText->Location = System::Drawing::Point(204, 248);
			this->locationText->Name = L"locationText";
			this->locationText->Size = System::Drawing::Size(381, 44);
			this->locationText->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(418, 307);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(167, 67);
			this->button1->TabIndex = 4;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CreateRepoForm::button1_Click);
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(205, 307);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(167, 67);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &CreateRepoForm::button2_Click);
			// 
			// button3
			// 
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(301, 126);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(167, 55);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Last dir:";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &CreateRepoForm::button3_Click);
			// 
			// dirLabel
			// 
			this->dirLabel->AutoSize = true;
			this->dirLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dirLabel->Location = System::Drawing::Point(198, 197);
			this->dirLabel->Name = L"dirLabel";
			this->dirLabel->Size = System::Drawing::Size(0, 37);
			this->dirLabel->TabIndex = 7;
			// 
			// CreateRepoForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(765, 555);
			this->Controls->Add(this->dirLabel);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->locationText);
			this->Controls->Add(this->label2);
			this->MaximumSize = System::Drawing::Size(791, 626);
			this->MinimumSize = System::Drawing::Size(791, 626);
			this->Name = L"CreateRepoForm";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Git Helper - Create Repo";
			this->Load += gcnew System::EventHandler(this, &CreateRepoForm::CreateRepoForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		this->DialogResult = System::Windows::Forms::DialogResult::Cancel;
		this->Close();

	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	if (String::IsNullOrEmpty(locationText->Text)) {

		MessageBox::Show("First complete the text box!", "Git Helper");
		
	}
	else {

		this->DialogResult = System::Windows::Forms::DialogResult::OK;
		this->Close();

	}

}
private: System::Void CreateRepoForm_Load(System::Object^ sender, System::EventArgs^ e) {

	std::string dir = useLocation();
	String^ convert_dir = gcnew String(dir.c_str());
	dirLabel->Text = convert_dir;

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	std::string dir = useLocation();
	String^ convert_dir = gcnew String(dir.c_str());

	if (String::IsNullOrEmpty(convert_dir)) {

		return;

	}
	else {

		locationText->Text = convert_dir;

	}

}
};
}
