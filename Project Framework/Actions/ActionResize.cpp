#include "ActionResize.h"

#include "..\ApplicationManager.h"

#include "..\GUI\GUI.h"

ActionResize::ActionResize(ApplicationManager * pApp) :Action(pApp)
{}

//Execute the action
void ActionResize::Execute()
{
	

	//Get a Pointer to the Interface
	 GUI* pGUI = pManager->GetGUI();
	 pGUI->ClearStatusBar();


	pGUI->PrintMessage("You want to resize figure");	
	


}
