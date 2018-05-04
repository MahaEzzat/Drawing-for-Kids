#include "ActionSendBack.h"

#include "..\ApplicationManager.h"

#include "..\GUI\GUI.h"

ActionSendBack::ActionSendBack(ApplicationManager * pApp) :Action(pApp)
{}

//Execute the action
void ActionSendBack::Execute()
{
	

	//Get a Pointer to the Interface
	 GUI* pGUI = pManager->GetGUI();
	 pGUI->ClearStatusBar();


	pGUI->PrintMessage("You want to send figure to back");	
	


}
