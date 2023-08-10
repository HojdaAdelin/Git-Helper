#pragma once
#include "RepoWindow.h"
#include "src/Include.h"
#include <string>

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
		System::Windows::Forms::Label^ lastDirGet;

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





	private: System::Windows::Forms::Button^ addRepo;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ statusLabel;



	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ locationBox;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ messageBox;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ outputBox;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ createRepoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ cloneToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Button^ lastDir;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->homeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sourceToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->changeLogToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->historyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pullToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->githubToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gitWebToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->createRepoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cloneToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->addRepo = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->statusLabel = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->locationBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->messageBox = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->outputBox = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->lastDir = (gcnew System::Windows::Forms::Button());
			this->lastDirGet = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(32, 32);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->homeToolStripMenuItem,
					this->gitToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1447, 48);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// homeToolStripMenuItem
			// 
			this->homeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->sourceToolStripMenuItem,
					this->changeLogToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->homeToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->homeToolStripMenuItem->Name = L"homeToolStripMenuItem";
			this->homeToolStripMenuItem->Size = System::Drawing::Size(115, 44);
			this->homeToolStripMenuItem->Text = L"Home";
			// 
			// sourceToolStripMenuItem
			// 
			this->sourceToolStripMenuItem->Name = L"sourceToolStripMenuItem";
			this->sourceToolStripMenuItem->Size = System::Drawing::Size(299, 48);
			this->sourceToolStripMenuItem->Text = L"Source";
			this->sourceToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::sourceToolStripMenuItem_Click);
			// 
			// changeLogToolStripMenuItem
			// 
			this->changeLogToolStripMenuItem->Name = L"changeLogToolStripMenuItem";
			this->changeLogToolStripMenuItem->Size = System::Drawing::Size(299, 48);
			this->changeLogToolStripMenuItem->Text = L"Change log";
			this->changeLogToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::changeLogToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(299, 48);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			// 
			// gitToolStripMenuItem
			// 
			this->gitToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->historyToolStripMenuItem,
					this->pullToolStripMenuItem, this->githubToolStripMenuItem, this->gitWebToolStripMenuItem, this->createRepoToolStripMenuItem,
					this->cloneToolStripMenuItem
			});
			this->gitToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gitToolStripMenuItem->Name = L"gitToolStripMenuItem";
			this->gitToolStripMenuItem->Size = System::Drawing::Size(74, 44);
			this->gitToolStripMenuItem->Text = L"Git";
			this->gitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::gitToolStripMenuItem_Click);
			// 
			// historyToolStripMenuItem
			// 
			this->historyToolStripMenuItem->Name = L"historyToolStripMenuItem";
			this->historyToolStripMenuItem->Size = System::Drawing::Size(303, 48);
			this->historyToolStripMenuItem->Text = L"Log";
			this->historyToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::historyToolStripMenuItem_Click);
			// 
			// pullToolStripMenuItem
			// 
			this->pullToolStripMenuItem->Name = L"pullToolStripMenuItem";
			this->pullToolStripMenuItem->Size = System::Drawing::Size(303, 48);
			this->pullToolStripMenuItem->Text = L"Pull";
			this->pullToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::pullToolStripMenuItem_Click);
			// 
			// githubToolStripMenuItem
			// 
			this->githubToolStripMenuItem->Name = L"githubToolStripMenuItem";
			this->githubToolStripMenuItem->Size = System::Drawing::Size(303, 48);
			this->githubToolStripMenuItem->Text = L"Github";
			this->githubToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::githubToolStripMenuItem_Click);
			// 
			// gitWebToolStripMenuItem
			// 
			this->gitWebToolStripMenuItem->Name = L"gitWebToolStripMenuItem";
			this->gitWebToolStripMenuItem->Size = System::Drawing::Size(303, 48);
			this->gitWebToolStripMenuItem->Text = L"Git web";
			this->gitWebToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::gitWebToolStripMenuItem_Click);
			// 
			// createRepoToolStripMenuItem
			// 
			this->createRepoToolStripMenuItem->Name = L"createRepoToolStripMenuItem";
			this->createRepoToolStripMenuItem->Size = System::Drawing::Size(303, 48);
			this->createRepoToolStripMenuItem->Text = L"Create repo";
			this->createRepoToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::createRepoToolStripMenuItem_Click);
			// 
			// cloneToolStripMenuItem
			// 
			this->cloneToolStripMenuItem->Name = L"cloneToolStripMenuItem";
			this->cloneToolStripMenuItem->Size = System::Drawing::Size(303, 48);
			this->cloneToolStripMenuItem->Text = L"Clone";
			this->cloneToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::cloneToolStripMenuItem_Click);
			// 
			// addRepo
			// 
			this->addRepo->BackColor = System::Drawing::SystemColors::Control;
			this->addRepo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->addRepo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addRepo->Location = System::Drawing::Point(17, 137);
			this->addRepo->Name = L"addRepo";
			this->addRepo->Size = System::Drawing::Size(67, 65);
			this->addRepo->TabIndex = 1;
			this->addRepo->Text = L"+";
			this->addRepo->UseVisualStyleBackColor = false;
			this->addRepo->Click += gcnew System::EventHandler(this, &MyForm::addRepo_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(90, 156);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(224, 37);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Add repository";
			// 
			// statusLabel
			// 
			this->statusLabel->AutoSize = true;
			this->statusLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->statusLabel->Location = System::Drawing::Point(11, 205);
			this->statusLabel->Name = L"statusLabel";
			this->statusLabel->Size = System::Drawing::Size(100, 31);
			this->statusLabel->TabIndex = 3;
			this->statusLabel->Text = L"Status:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(956, 98);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(331, 42);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Enter repo location";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// locationBox
			// 
			this->locationBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->locationBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->locationBox->Location = System::Drawing::Point(963, 165);
			this->locationBox->Name = L"locationBox";
			this->locationBox->Size = System::Drawing::Size(456, 40);
			this->locationBox->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(956, 229);
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
			this->messageBox->Location = System::Drawing::Point(963, 303);
			this->messageBox->Name = L"messageBox";
			this->messageBox->Size = System::Drawing::Size(456, 40);
			this->messageBox->TabIndex = 9;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(956, 367);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(130, 42);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Output";
			// 
			// outputBox
			// 
			this->outputBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->outputBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->outputBox->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->outputBox->Location = System::Drawing::Point(963, 427);
			this->outputBox->Multiline = true;
			this->outputBox->Name = L"outputBox";
			this->outputBox->ReadOnly = true;
			this->outputBox->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->outputBox->Size = System::Drawing::Size(456, 351);
			this->outputBox->TabIndex = 11;
			this->outputBox->TextChanged += gcnew System::EventHandler(this, &MyForm::outputBox_TextChanged);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(963, 810);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(456, 69);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Commit + Push";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1294, 89);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(100, 50);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 13;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(1130, 229);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(100, 50);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 14;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(1092, 367);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(100, 50);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 15;
			this->pictureBox3->TabStop = false;
			// 
			// lastDir
			// 
			this->lastDir->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lastDir->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lastDir->Location = System::Drawing::Point(17, 61);
			this->lastDir->Name = L"lastDir";
			this->lastDir->Size = System::Drawing::Size(231, 61);
			this->lastDir->TabIndex = 16;
			this->lastDir->Text = L"Use last directory:";
			this->lastDir->UseVisualStyleBackColor = true;
			this->lastDir->Click += gcnew System::EventHandler(this, &MyForm::lastDir_Click);
			// 
			// lastDirGet
			// 
			this->lastDirGet->AutoSize = true;
			this->lastDirGet->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lastDirGet->Location = System::Drawing::Point(250, 71);
			this->lastDirGet->Name = L"lastDirGet";
			this->lastDirGet->Size = System::Drawing::Size(0, 37);
			this->lastDirGet->TabIndex = 17;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1447, 909);
			this->Controls->Add(this->lastDirGet);
			this->Controls->Add(this->lastDir);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->outputBox);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->messageBox);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->locationBox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->statusLabel);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->addRepo);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(0);
			this->MaximumSize = System::Drawing::Size(1473, 980);
			this->MinimumSize = System::Drawing::Size(1473, 980);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Git Helper";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void addRepo_Click(System::Object^ sender, System::EventArgs^ e) {

		RepoWindow^ newRepoWindow = gcnew RepoWindow();
		String^ getRepo;
		String^ systemString;
		std::string convert_systemString;

		if (newRepoWindow->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			getRepo = newRepoWindow->repoText->Text;
		}
		else {
			newRepoWindow->Close();
		}

		if (!String::IsNullOrEmpty(getRepo))
		{
			convert_systemString = ConvertString(getRepo);
			systemString = gcnew String(getRepoStatus(convert_systemString).c_str());
			statusLabel->Text = System::String::Concat("Status:\n", systemString);
			label1->Text = getRepo;
			locationBox->Text = getRepo;
			lastDirGet->Text = getRepo;
			writeToFile(convert_systemString);
		}
	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

	std::string getLocation = useLocation();
	String^ convert_getLocation = gcnew String(getLocation.c_str());
	lastDirGet->Text = convert_getLocation;

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	if (String::IsNullOrEmpty(locationBox->Text) || String::IsNullOrEmpty(messageBox->Text)) {

		MessageBox::Show("Enter the location & message first!", "Git Helper");

	}
	else {

		String^ getRepoLocation = locationBox->Text;
		String^ getMessage = messageBox->Text;
		String^ importOutput;
		std::string repolocation_convert = ConvertString(getRepoLocation);
		std::string getmessage_convert = ConvertString(getMessage);
		importOutput = gcnew String(commitPushFunction(repolocation_convert, getmessage_convert).c_str());

		outputBox->Text = importOutput;

		writeToFile(repolocation_convert);
		lastDirGet->Text = getRepoLocation;
	}

	
}
private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Close();

}
private: System::Void sourceToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	openSite("https://github.com/HojdaAdelin/Git-Helper");

}
private: System::Void changeLogToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	MessageBox::Show("Version 1.0", "Git Helper");

}
private: System::Void githubToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	openSite("https://github.com/");

}
private: System::Void gitWebToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	openSite("https://git-scm.com/");

}
private: System::Void cloneToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	CloneRepository^ newCloneRepository = gcnew CloneRepository();
	String^ link;
	String^ location;
	std::string convert_link;
	std::string convert_location;

	if (newCloneRepository->ShowDialog() == System::Windows::Forms::DialogResult::OK) {

		link = newCloneRepository->repoLinkText->Text;
		location = newCloneRepository->locationText->Text;
		convert_link = ConvertString(link);
		convert_location = ConvertString(location);
		if (cloneRepo(convert_link, convert_location) == true) {

			MessageBox::Show("Repository cloned!", "Git Helper");

		}
		else {

			MessageBox::Show("Error while cloning!", "Git Helper");

		}

	}
	else {

		newCloneRepository->Close();

	}
}
private: System::Void defaultColorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	outputBox->ForeColor = Color::Black;

}
private: System::Void redColorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	outputBox->ForeColor = System::Drawing::Color::Red;

}
private: System::Void outputBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void createRepoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ location_repo;
	std::string location_repo_convert;
	CreateRepoForm^ newCreateRepoForm = gcnew CreateRepoForm();

	if (newCreateRepoForm->ShowDialog() == System::Windows::Forms::DialogResult::OK) {

		location_repo = newCreateRepoForm->locationText->Text;
		location_repo_convert = ConvertString(location_repo);
		createRepo(location_repo_convert);
		MessageBox::Show("Repository created!", "Git Helper");

	}
	else {

		MessageBox::Show("Error while creating repository!", "Git Helper");

	}

}
private: System::Void gitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void historyToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	GitHistory^ newGitHistory = gcnew GitHistory();

	newGitHistory->Show();

}
private: System::Void pullToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	GitPull^ newGitPull = gcnew GitPull();
	newGitPull->Show();
}
private: System::Void lastDir_Click(System::Object^ sender, System::EventArgs^ e) {

	std::string location = useLocation();
	String^ convert_location = gcnew String(location.c_str());

	locationBox->Text = convert_location;
	String^ systemString = gcnew String(getRepoStatus(location).c_str());
	statusLabel->Text = System::String::Concat("Status:\n", systemString);
	label1->Text = convert_location;


}
};
}
