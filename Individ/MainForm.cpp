#include "MainForm.h"
#include "DialogWindow.h"

using namespace System;
using namespace System::Windows::Forms;

System::Void Individ::MainForm::inputColorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	DialogWindow^ dialogWindow = gcnew DialogWindow(this);
	dialogWindow->Show();
}

[STAThreadAttribute]
int main() 
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Individ::MainForm form;
	Application::Run(% form);
	return 0;
}