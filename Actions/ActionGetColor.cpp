#include "ActionGetColor.h"


#include "ActionGetColor.h"




ActionGetColor::ActionGetColor(ApplicationManager * pApp) :Action(pApp)
{}

//Execute the action
void ActionGetColor::Execute()
{

	//Get a Pointer to the Interface
	 GUI* pGUI = pManager->GetGUI();
	 pGUI->ClearStatusBar();
	 UI.BkGrndColor = pGUI->DrawPallate();
	 pGUI->PrintMessage("You want to change background color, Please pick color.");
	 pGUI->CreateDrawToolBar();
	 pGUI->CreateDrawArea();
	 
	 
	 

	
	


}
