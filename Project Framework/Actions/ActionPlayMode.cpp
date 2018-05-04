#include "ActionPlayMode.h"

#include "..\ApplicationManager.h"

#include "..\GUI\GUI.h"

ActionPlayMode::ActionPlayMode(ApplicationManager * pApp) :Action(pApp)
{}

//Execute the action
void ActionPlayMode::Execute()
{
	

	//Get a Pointer to the Interface
	 GUI* pGUI = pManager->GetGUI();
	 pGUI->ClearStatusBar();


	pGUI->PrintMessage("You want to switch to play mode");	
	


}
