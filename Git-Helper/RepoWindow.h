#pragma once

namespace GitHelper {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for RepoWindow
	/// </summary>
	public ref class RepoWindow : public System::Windows::Forms::Form
	{
	public:
		RepoWindow(void)
		{
			InitializeComponent();

			//
			//TODO: Add the constructor code here
			//
		}
		System::Windows::Forms::TextBox^ repoText;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~RepoWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: //System::Windows::Forms::TextBox^ repoText;
	protected:

	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;
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
			this->repoText = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// repoText
			// 
			this->repoText->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->repoText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->repoText->Location = System::Drawing::Point(213, 181);
			this->repoText->Name = L"repoText";
			this->repoText->Size = System::Drawing::Size(569, 67);
			this->repoText->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(213, 122);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(295, 37);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Enter repo location:";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(372, 273);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(262, 76);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Ok";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &RepoWindow::button1_Click);
			// 
			// RepoWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1022, 694);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->repoText);
			this->MaximumSize = System::Drawing::Size(1048, 765);
			this->MinimumSize = System::Drawing::Size(1048, 765);
			this->Name = L"RepoWindow";
			this->Text = L"RepoWindow";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		this->DialogResult = System::Windows::Forms::DialogResult::OK;
		this->Close();

	}
	
};
}
