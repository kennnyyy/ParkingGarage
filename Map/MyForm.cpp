#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

 [STAThread]
 void main(array<String^>^ args)
 {
	 Application::EnableVisualStyles();
	 Application::SetCompatibleTextRenderingDefault(false);

	 //TEST has to match name of the app, and myform has to match the name oof the form
	 Test2::MyForm form;
	 Application::Run(%form);


 }