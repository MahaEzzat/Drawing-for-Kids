#include "ActionRedo.h"

#include "..\ApplicationManager.h"

#include "..\GUI\GUI.h"

ActionRedo::ActionRedo(ApplicationManager * pApp) :Action(pApp)
{}

//Execute the action
void ActionRedo::Execute()
{
	

	//Get a Pointer to the Interface
	 GUI* pGUI = pManager->GetGUI();
	 pGUI->ClearStatusBar();


	pGUI->PrintMessage("You want to redo action");	
	


}
