#include "ActionGetColor.h"


#include "..\ApplicationManager.h"

#include "..\GUI\GUI.h"

ActionGetColor::ActionGetColor(ApplicationManager * pApp) :Action(pApp)
{}

//Execute the action
void ActionGetColor::Execute()
{
	

	//Get a Pointer to the Interface
	 GUI* pGUI = pManager->GetGUI();
	 pGUI->ClearStatusBar();


	pGUI->PrintMessage("You want to get color");	
	


}
