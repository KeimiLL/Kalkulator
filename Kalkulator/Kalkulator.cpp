#include "Kalkulator.h"
#include <iostream>

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(array<String^>^ args) {
    std::cout << "Wypisujemy do konsoli";
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    //WinformCDemo is your project name
    Kalkulator::Kalkulator form;
    Application::Run(% form);
}