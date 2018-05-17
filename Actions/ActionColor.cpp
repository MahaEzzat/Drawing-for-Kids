#include "ActionColor.h"

#include "..\ApplicationManager.h"

#include "..\GUI\GUI.h"

ActionColor::ActionColor(ApplicationManager * pApp) :Action(pApp)
{}

//Execute the action
void ActionColor::Execute()
{
	

	//Get a Pointer to the Interface
	 GUI* pGUI = pManager->GetGUI();
	 pGUI->ClearStatusBar();


	pGUI->PrintMessage("You shall pick figures based only on their colors");	
	


}
