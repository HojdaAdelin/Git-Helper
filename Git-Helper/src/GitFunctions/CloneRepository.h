#pragma once

namespace GitHelper {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CloneRepository
	/// </summary>
	public ref class CloneRepository : public System::Windows::Forms::Form
	{
	public:
		CloneRepository(void)
		{
			InitializeComponent();
			


		}
		System::Windows::Forms::TextBox^ repoLinkText;


	private: System::Windows::Forms::Label^ label3;
	public:
	public: System::Windows::Forms::TextBox^ locationText;
	private:
		System::Windows::Forms::Button^ button1;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CloneRepository()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	

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
			this->repoLinkText = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->locationText = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(319, 159);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(223, 37);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Enter repo link";
			// 
			// repoLinkText
			// 
			this->repoLinkText->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->repoLinkText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->repoLinkText->Location = System::Drawing::Point(326, 214);
			this->repoLinkText->Name = L"repoLinkText";
			this->repoLinkText->Size = System::Drawing::Size(624, 49);
			this->repoLinkText->TabIndex = 1;
			this->repoLinkText->TextChanged += gcnew System::EventHandler(this, &CloneRepository::repoLinkText_TextChanged);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(317, 424);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(624, 74);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Enter";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CloneRepository::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(319, 283);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(213, 37);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Enter location";
			// 
			// locationText
			// 
			this->locationText->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->locationText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->locationText->Location = System::Drawing::Point(317, 338);
			this->locationText->Name = L"locationText";
			this->locationText->Size = System::Drawing::Size(624, 49);
			this->locationText->TabIndex = 6;
			// 
			// CloneRepository
			// 
			this->AcceptButton = this->button1;
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1259, 846);
			this->Controls->Add(this->locationText);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->repoLinkText);
			this->Controls->Add(this->label1);
			this->MaximumSize = System::Drawing::Size(1285, 917);
			this->MinimumSize = System::Drawing::Size(1285, 917);
			this->Name = L"CloneRepository";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Git Helper - Clone";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void repoLinkText_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		this->DialogResult = System::Windows::Forms::DialogResult::OK;

	}
};
}
