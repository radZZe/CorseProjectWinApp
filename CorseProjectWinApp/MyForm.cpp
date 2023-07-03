#include "MyForm.h"
#include "ReaderRequests.h"
#include <vector>

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main() {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	CorseProjectWinApp::MyForm form;
	Application::Run(% form);

}

