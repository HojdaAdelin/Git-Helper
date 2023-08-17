#pragma once
#include <msclr/marshal_cppstd.h>
#include <msclr/marshal.h>
#include <string>
std::string changeBranch(std::string gitLocation, std::string newBranch);
using namespace msclr::interop;
using namespace System;
std::string viewBranch(std::string location);

namespace GitHelper {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CheckoutBranch
	/// </summary>
	public ref class CheckoutBranch : public System::Windows::Forms::Form
	{
	public:
		CheckoutBranch(void)
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
		~CheckoutBranch()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ locationBox;
	private: System::Windows::Forms::TextBox^ branchBox;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ branchToCheckout;
	private: System::Windows::Forms::TextBox^ outPut;
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
			this->locationBox = (gcnew System::Windows::Forms::TextBox());
			this->branchBox = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->branchToCheckout = (gcnew System::Windows::Forms::TextBox());
			this->outPut = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(48, 65);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(148, 37);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Location:";
			// 
			// locationBox
			// 
			this->locationBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->locationBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->locationBox->Location = System::Drawing::Point(55, 105);
			this->locationBox->Name = L"locationBox";
			this->locationBox->Size = System::Drawing::Size(434, 44);
			this->locationBox->TabIndex = 1;
			// 
			// branchBox
			// 
			this->branchBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->branchBox->Location = System::Drawing::Point(55, 155);
			this->branchBox->Multiline = true;
			this->branchBox->Name = L"branchBox";
			this->branchBox->ReadOnly = true;
			this->branchBox->Size = System::Drawing::Size(434, 452);
			this->branchBox->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(55, 614);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(434, 53);
			this->button1->TabIndex = 3;
			this->button1->Text = L"View branch";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CheckoutBranch::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(809, 65);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(217, 37);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Branch name:";
			// 
			// branchToCheckout
			// 
			this->branchToCheckout->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->branchToCheckout->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->branchToCheckout->Location = System::Drawing::Point(816, 105);
			this->branchToCheckout->Name = L"branchToCheckout";
			this->branchToCheckout->Size = System::Drawing::Size(434, 44);
			this->branchToCheckout->TabIndex = 5;
			// 
			// outPut
			// 
			this->outPut->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->outPut->Location = System::Drawing::Point(816, 155);
			this->outPut->Multiline = true;
			this->outPut->Name = L"outPut";
			this->outPut->ReadOnly = true;
			this->outPut->Size = System::Drawing::Size(434, 452);
			this->outPut->TabIndex = 6;
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(816, 614);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(434, 53);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Checkout";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &CheckoutBranch::button2_Click);
			// 
			// CheckoutBranch
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1308, 767);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->outPut);
			this->Controls->Add(this->branchToCheckout);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->branchBox);
			this->Controls->Add(this->locationBox);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"CheckoutBranch";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CheckoutBranch";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		if (String::IsNullOrEmpty(locationBox->Text)) {

			MessageBox::Show("Enter the location first!", "Git Helper");
			return;

		}
		else {

			String^ get_location = locationBox->Text;
			std::string get_location_convert = marshal_as<std::string>(get_location);
			String^ output = gcnew String(viewBranch(get_location_convert).c_str());
			branchBox->Text = output;

		}

	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	if (String::IsNullOrEmpty(locationBox->Text) || String::IsNullOrEmpty(branchToCheckout->Text)) {

		MessageBox::Show("Make sure the location and branch are setted!", "Git Helper");
		return;

	}
	else {

		String^ location = locationBox->Text;
		String^ branch = branchToCheckout->Text;
		std::string location_convert = marshal_as<std::string>(location);
		std::string branch_convert = marshal_as<std::string>(branch);
		String^ getContent = gcnew String(changeBranch(location_convert, branch_convert).c_str());
		outPut->Text = getContent;
	}
}
};
}
