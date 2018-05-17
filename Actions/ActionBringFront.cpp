#include "ActionBringFront.h"


#include "..\ApplicationManager.h"

#include "..\GUI\GUI.h"

ActionBringFront::ActionBringFront(ApplicationManager * pApp) :Action(pApp)
{}

//Execute the action
void ActionBringFront::Execute()
{
	

	//Get a Pointer to the Interface
	 GUI* pGUI = pManager->GetGUI();
	 pGUI->ClearStatusBar();


	pGUI->PrintMessage("You want to bring figure to front");	
	


}
