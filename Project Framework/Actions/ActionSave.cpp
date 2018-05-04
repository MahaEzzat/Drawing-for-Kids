#include "ActionSave.h"


#include "..\ApplicationManager.h"

#include "..\GUI\GUI.h"

ActionSave::ActionSave(ApplicationManager * pApp) :Action(pApp)
{}

//Execute the action
void ActionSave::Execute()
{
	

	//Get a Pointer to the Interface
	 GUI* pGUI = pManager->GetGUI();
	 pGUI->ClearStatusBar();


	pGUI->PrintMessage("You want to save file");	
	


}
