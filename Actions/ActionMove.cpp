#include "ActionMove.h"

#include "..\ApplicationManager.h"

#include "..\GUI\GUI.h"

ActionMove::ActionMove(ApplicationManager * pApp) :Action(pApp)
{}

//Execute the action
void ActionMove::Execute()
{
	

	//Get a Pointer to the Interface
	 GUI* pGUI = pManager->GetGUI();
	 pGUI->ClearStatusBar();


	pGUI->PrintMessage("You want to move figure");	
	


}
