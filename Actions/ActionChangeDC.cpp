#include "ActionChangeDC.h"

#include "..\ApplicationManager.h"

#include "..\GUI\GUI.h"

ActionChangeDC::ActionChangeDC(ApplicationManager * pApp) :Action(pApp)
{}

//Execute the action
void ActionChangeDC::Execute()
{
	

	//Get a Pointer to the Interface
	 GUI* pGUI = pManager->GetGUI();
	 pGUI->ClearStatusBar();
	 UI.ColorChagne = 1;
	 UI.IsFilled = 0;
	 pGUI->DrawColor();
	 pGUI->PrintMessage("Select Color to draw frame figure");
	


}
