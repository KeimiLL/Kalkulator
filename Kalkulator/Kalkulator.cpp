#include "Kalkulator.h"
#include <iostream>

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(array<String^>^ args) {
    std::cout << "VaLiMy?";
    std::cout << "Mozna ale nwm co na to domin";
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    //WinformCDemo is your project name
    Kalkulator::Kalkulator form;
    Application::Run(% form);
}