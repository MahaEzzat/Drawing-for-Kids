#include "ActionChangeFC.h"

#include "..\ApplicationManager.h"

#include "..\GUI\GUI.h"

ActionChangeFC::ActionChangeFC(ApplicationManager * pApp) :Action(pApp)
{}

//Execute the action
void ActionChangeFC::Execute()
{
	

	//Get a Pointer to the Interface
	 GUI* pGUI = pManager->GetGUI();
	 pGUI->ClearStatusBar();


	pGUI->PrintMessage("You want to change filling color");	
	


}
