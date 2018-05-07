#include "ActionUndo.h"

#include "..\ApplicationManager.h"

#include "..\GUI\GUI.h"

ActionUndo::ActionUndo(ApplicationManager * pApp) :Action(pApp)
{}

//Execute the action
void ActionUndo::Execute()
{
	

	//Get a Pointer to the Interface
	 GUI* pGUI = pManager->GetGUI();
	 pGUI->ClearStatusBar();


	pGUI->PrintMessage("You want to undo action");	
	


}
