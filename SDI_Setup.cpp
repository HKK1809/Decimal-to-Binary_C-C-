#include "SDI_Setup.h"
using namespace System;

using namespace System::Windows::Forms;

[STAThread]

void main(array<String^>^ args)

{

    Application::EnableVisualStyles();

    Application::SetCompatibleTextRenderingDefault(false);

    GUI::SDI_Setup form;

    Application::Run(% form);

}
