#include "Hauptfenster.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace TaschenrechnerCLR;


[STAThread]
void main(array<String^>^ args)
{

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);


	Hauptfenster^ fenster1 = gcnew Hauptfenster;
	
	// Anwendung soll mit Fenster1 starten
	Application::Run(fenster1);
}