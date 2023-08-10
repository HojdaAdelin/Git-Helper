#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

void main(array<String^>^ args) {

	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	GitHelper::MyForm frm;
	Application::Run(% frm);
	

}

// For cmd deletion Windows (/SUBSYSTEM:WINDOWS)