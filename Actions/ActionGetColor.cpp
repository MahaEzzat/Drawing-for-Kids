#include "ActionGetColor.h"


#include "..\ApplicationManager.h"

#include "..\GUI\GUI.h"



ActionGetColor::ActionGetColor(ApplicationManager * pApp) :Action(pApp)
{}

//Execute the action
void ActionGetColor::Execute()
{
	Point P1;
	

	//Get a Pointer to the Interface
	 GUI* pGUI = pManager->GetGUI();
	 pGUI->ClearStatusBar();
	 pGUI->PrintMessage("You want to get color");
	 pGUI->DrawPallate();
	 pGUI->GetPointClicked(P1.x, P1.y);

	 if (UI.ColorChagne)
		UI.DrawColor = pGUI->GetColors(P1.x, P1.y);
	 else 
		 UI.FillColor=pGUI->GetColors(P1.x, P1.y);

	 pGUI->ClearStatusBar();
	 std::string str = "The color is (r,g,b) : ";
	 std::string Blue = std::to_string(UI.Current.ucBlue);
	 std::string Red = std::to_string(UI.Current.ucRed);
	 std::string Green = std::to_string(UI.Current.ucGreen);
	 str.append("(");
	 str.append(Red);
	 str.append(",");
	 str.append(Green);
	 str.append(",");
	 str.append(Blue);
	 str.append(")");
	 pGUI->PrintMessage(str);
	 pGUI->CreateDrawToolBar();

	
	


}
