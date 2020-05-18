#include "MainForm.h"
#include <iostream>

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array <String^> ^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	TaskManager::MainForm form;
//	std::cout << "Process ended: browser\n";
	Application::Run(%form);
	return 0;
}