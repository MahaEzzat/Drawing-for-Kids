#include "ActionFig.h"

#include "..\ApplicationManager.h"

#include "..\GUI\GUI.h"

ActionFig::ActionFig(ApplicationManager * pApp) :Action(pApp)
{}

//Execute the action
void ActionFig::Execute()
{
	

	//Get a Pointer to the Interface
	 GUI* pGUI = pManager->GetGUI();
	 pGUI->ClearStatusBar();


	pGUI->PrintMessage("You shall pick figures based on their figure type");	
	


}
