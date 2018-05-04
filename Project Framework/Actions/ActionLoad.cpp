#include "ActionLoad.h"

#include "..\ApplicationManager.h"

#include "..\GUI\GUI.h"

ActionLoad::ActionLoad(ApplicationManager * pApp) :Action(pApp)
{}

//Execute the action
void ActionLoad::Execute()
{
	

	//Get a Pointer to the Interface
	 GUI* pGUI = pManager->GetGUI();
	 pGUI->ClearStatusBar();


	pGUI->PrintMessage("You want to load file");	
	


}
