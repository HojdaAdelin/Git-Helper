#pragma once

namespace GitHelper {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ homeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ sourceToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ changeLogToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ gitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ historyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ pullToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ githubToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ gitWebToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ outputToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ defaultColorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ redColorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ blueColorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ greenColorToolStripMenuItem;
	private: System::Windows::Forms::Button^ addRepo;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ starLabel;
	private: System::Windows::Forms::Label^ pullLabel;
	private: System::Windows::Forms::Label^ issuesLabel;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ locationBox;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ messageBox;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ outputBox;
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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->homeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->outputToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sourceToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->changeLogToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->historyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pullToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->githubToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gitWebToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->defaultColorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->redColorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->blueColorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->greenColorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->addRepo = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->starLabel = (gcnew System::Windows::Forms::Label());
			this->pullLabel = (gcnew System::Windows::Forms::Label());
			this->issuesLabel = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->locationBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->messageBox = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->outputBox = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(32, 32);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->homeToolStripMenuItem,
					this->gitToolStripMenuItem, this->outputToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1447, 48);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// homeToolStripMenuItem
			// 
			this->homeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->sourceToolStripMenuItem,
					this->changeLogToolStripMenuItem
			});
			this->homeToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->homeToolStripMenuItem->Name = L"homeToolStripMenuItem";
			this->homeToolStripMenuItem->Size = System::Drawing::Size(115, 44);
			this->homeToolStripMenuItem->Text = L"Home";
			// 
			// gitToolStripMenuItem
			// 
			this->gitToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->historyToolStripMenuItem,
					this->pullToolStripMenuItem, this->githubToolStripMenuItem, this->gitWebToolStripMenuItem
			});
			this->gitToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gitToolStripMenuItem->Name = L"gitToolStripMenuItem";
			this->gitToolStripMenuItem->Size = System::Drawing::Size(74, 44);
			this->gitToolStripMenuItem->Text = L"Git";
			// 
			// outputToolStripMenuItem
			// 
			this->outputToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->defaultColorToolStripMenuItem,
					this->redColorToolStripMenuItem, this->blueColorToolStripMenuItem, this->greenColorToolStripMenuItem
			});
			this->outputToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->outputToolStripMenuItem->Name = L"outputToolStripMenuItem";
			this->outputToolStripMenuItem->Size = System::Drawing::Size(128, 44);
			this->outputToolStripMenuItem->Text = L"Output";
			// 
			// sourceToolStripMenuItem
			// 
			this->sourceToolStripMenuItem->Name = L"sourceToolStripMenuItem";
			this->sourceToolStripMenuItem->Size = System::Drawing::Size(359, 48);
			this->sourceToolStripMenuItem->Text = L"Source";
			// 
			// changeLogToolStripMenuItem
			// 
			this->changeLogToolStripMenuItem->Name = L"changeLogToolStripMenuItem";
			this->changeLogToolStripMenuItem->Size = System::Drawing::Size(359, 48);
			this->changeLogToolStripMenuItem->Text = L"Change log";
			// 
			// historyToolStripMenuItem
			// 
			this->historyToolStripMenuItem->Name = L"historyToolStripMenuItem";
			this->historyToolStripMenuItem->Size = System::Drawing::Size(359, 48);
			this->historyToolStripMenuItem->Text = L"History";
			// 
			// pullToolStripMenuItem
			// 
			this->pullToolStripMenuItem->Name = L"pullToolStripMenuItem";
			this->pullToolStripMenuItem->Size = System::Drawing::Size(359, 48);
			this->pullToolStripMenuItem->Text = L"Pull";
			// 
			// githubToolStripMenuItem
			// 
			this->githubToolStripMenuItem->Name = L"githubToolStripMenuItem";
			this->githubToolStripMenuItem->Size = System::Drawing::Size(359, 48);
			this->githubToolStripMenuItem->Text = L"Github";
			// 
			// gitWebToolStripMenuItem
			// 
			this->gitWebToolStripMenuItem->Name = L"gitWebToolStripMenuItem";
			this->gitWebToolStripMenuItem->Size = System::Drawing::Size(359, 48);
			this->gitWebToolStripMenuItem->Text = L"Git web";
			// 
			// defaultColorToolStripMenuItem
			// 
			this->defaultColorToolStripMenuItem->Name = L"defaultColorToolStripMenuItem";
			this->defaultColorToolStripMenuItem->Size = System::Drawing::Size(359, 48);
			this->defaultColorToolStripMenuItem->Text = L"Default color";
			// 
			// redColorToolStripMenuItem
			// 
			this->redColorToolStripMenuItem->Name = L"redColorToolStripMenuItem";
			this->redColorToolStripMenuItem->Size = System::Drawing::Size(359, 48);
			this->redColorToolStripMenuItem->Text = L"Red color";
			// 
			// blueColorToolStripMenuItem
			// 
			this->blueColorToolStripMenuItem->Name = L"blueColorToolStripMenuItem";
			this->blueColorToolStripMenuItem->Size = System::Drawing::Size(359, 48);
			this->blueColorToolStripMenuItem->Text = L"Blue color";
			// 
			// greenColorToolStripMenuItem
			// 
			this->greenColorToolStripMenuItem->Name = L"greenColorToolStripMenuItem";
			this->greenColorToolStripMenuItem->Size = System::Drawing::Size(359, 48);
			this->greenColorToolStripMenuItem->Text = L"Green color";
			// 
			// addRepo
			// 
			this->addRepo->BackColor = System::Drawing::SystemColors::Control;
			this->addRepo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->addRepo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addRepo->Location = System::Drawing::Point(12, 98);
			this->addRepo->Name = L"addRepo";
			this->addRepo->Size = System::Drawing::Size(67, 65);
			this->addRepo->TabIndex = 1;
			this->addRepo->Text = L"+";
			this->addRepo->UseVisualStyleBackColor = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(94, 117);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(224, 37);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Add repository";
			// 
			// starLabel
			// 
			this->starLabel->AutoSize = true;
			this->starLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->starLabel->Location = System::Drawing::Point(12, 266);
			this->starLabel->Name = L"starLabel";
			this->starLabel->Size = System::Drawing::Size(115, 42);
			this->starLabel->TabIndex = 3;
			this->starLabel->Text = L"Stars:";
			// 
			// pullLabel
			// 
			this->pullLabel->AutoSize = true;
			this->pullLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pullLabel->Location = System::Drawing::Point(12, 463);
			this->pullLabel->Name = L"pullLabel";
			this->pullLabel->Size = System::Drawing::Size(244, 42);
			this->pullLabel->TabIndex = 4;
			this->pullLabel->Text = L"Pull requests:";
			// 
			// issuesLabel
			// 
			this->issuesLabel->AutoSize = true;
			this->issuesLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->issuesLabel->Location = System::Drawing::Point(12, 365);
			this->issuesLabel->Name = L"issuesLabel";
			this->issuesLabel->Size = System::Drawing::Size(136, 42);
			this->issuesLabel->TabIndex = 5;
			this->issuesLabel->Text = L"Issues:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(894, 98);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(331, 42);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Enter repo location";
			// 
			// locationBox
			// 
			this->locationBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->locationBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->locationBox->Location = System::Drawing::Point(901, 165);
			this->locationBox->Multiline = true;
			this->locationBox->Name = L"locationBox";
			this->locationBox->Size = System::Drawing::Size(456, 47);
			this->locationBox->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(894, 229);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(171, 42);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Message";
			// 
			// messageBox
			// 
			this->messageBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->messageBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->messageBox->Location = System::Drawing::Point(901, 298);
			this->messageBox->Multiline = true;
			this->messageBox->Name = L"messageBox";
			this->messageBox->Size = System::Drawing::Size(456, 47);
			this->messageBox->TabIndex = 9;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(894, 365);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(130, 42);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Output";
			// 
			// outputBox
			// 
			this->outputBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->outputBox->Enabled = false;
			this->outputBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->outputBox->Location = System::Drawing::Point(901, 426);
			this->outputBox->Multiline = true;
			this->outputBox->Name = L"outputBox";
			this->outputBox->Size = System::Drawing::Size(456, 351);
			this->outputBox->TabIndex = 11;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(901, 812);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(456, 69);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Commit + Push";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1447, 909);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->outputBox);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->messageBox);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->locationBox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->issuesLabel);
			this->Controls->Add(this->pullLabel);
			this->Controls->Add(this->starLabel);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->addRepo);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximumSize = System::Drawing::Size(1473, 980);
			this->MinimumSize = System::Drawing::Size(1473, 980);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Git Helper";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
