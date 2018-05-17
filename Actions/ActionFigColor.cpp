#include "ActionFigColor.h"

#include "..\ApplicationManager.h"

#include "..\GUI\GUI.h"

ActionFigColor::ActionFigColor(ApplicationManager * pApp) :Action(pApp)
{}

//Execute the action
void ActionFigColor::Execute()
{
	

	//Get a Pointer to the Interface
	 GUI* pGUI = pManager->GetGUI();
	 pGUI->ClearStatusBar();


	pGUI->PrintMessage("You shall pick figures based on both their colors and figure type");	
	


}
