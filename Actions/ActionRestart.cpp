#include "ActionRestart.h"

#include "..\ApplicationManager.h"

#include "..\GUI\GUI.h"

ActionRestart::ActionRestart(ApplicationManager * pApp) :Action(pApp)
{}

//Execute the action
void ActionRestart::Execute()
{
	

	//Get a Pointer to the Interface
	 GUI* pGUI = pManager->GetGUI();
	 pGUI->ClearStatusBar();


	pGUI->PrintMessage("You want to restart the game");	
	


}
