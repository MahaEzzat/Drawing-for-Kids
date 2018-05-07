#include "ApplicationManager.h"
#include "Actions\ActionAddSquare.h"
#include "Actions\ActionAddEllipse.h"
#include "Actions\ActionAddHexagon.h"
#include "Actions\ActionChangeDC.h"
#include "Actions\ActionChangeFC.h"
#include "Actions\ActionResize.h"
#include "Actions\ActionSendBack.h"
#include "Actions\ActionBringFront.h"
#include "Actions\ActionSave.h"
#include "Actions\ActionLoad.h"
#include "Actions\ActionGetColor.h"
#include "Actions\ActionDelete.h"
#include "Actions\ActionPlayMode.h"
#include "Actions\ActionDrawMode.h"
#include "Actions\ActionMove.h"
#include "Actions\ActionRedo.h"
#include "Actions\ActionUndo.h"
#include "Actions\ActionRotate.h"
#include "Actions\ActionColor.h"
#include "Actions\ActionFig.h"
#include "Actions\ActionFigColor.h"
#include "Actions\ActionRestart.h"

//Constructor
ApplicationManager::ApplicationManager()
{
	//Create Input and output
	pGUI = new GUI;	
	
	FigCount = 0;
		
	//Create an array of figure pointers and set them to NULL		
	for(int i=0; i<MaxFigCount; i++)
		FigList[i] = NULL;	
}

void ApplicationManager::Run()
{
	ActionType ActType;
	do
	{		
		//1- Read user action
		ActType = pGUI->MapInputToActionType();

		//2- Create the corresponding Action
		Action *pAct = CreateAction(ActType);
		
		//3- Execute the action
		ExecuteAction(pAct);

		//4- Update the interface
		UpdateInterface();	

	}while(ActType != EXIT);
	
}


//==================================================================================//
//								Actions Related Functions							//
//==================================================================================//
//Creates an action
Action* ApplicationManager::CreateAction(ActionType ActType) 
{
	Action* newAct = NULL;
	
	//According to Action Type, create the corresponding action object
	switch (ActType)
	{
		case DRAW_SQUARE:
			newAct = new ActionAddSquare(this);
			break;

		case DRAW_ELPS:
			newAct = new ActionAddEllipse(this);
			break;

		case DRAW_HEX:
			newAct = new ActionAddHexagon(this);
			break;

		case CHNG_DRAW_CLR:
			newAct = new ActionChangeDC(this);
			break;

		case CHNG_FILL_CLR:
			newAct = new ActionChangeFC(this);
			break;

		case RESIZE:
			newAct = new ActionResize(this);
			break;

		case SEND_BACK:
			newAct = new ActionSendBack(this);
			break;

		case BRNG_FRNT:
			newAct = new ActionBringFront(this);
			break;

		case SAVE:
			newAct = new ActionSave(this);
			break;

		case LOAD:
			newAct = new ActionLoad(this);
			break;

		case GET_COLOR:
			newAct = new ActionGetColor(this);
			break;

		case TO_PLAY:
			newAct = new ActionPlayMode(this);
			break;

		case TO_DRAW:
			newAct = new ActionDrawMode(this);
			break;

		case DEL:
			newAct = new ActionDelete(this);
			break;

		case MOVE:
			newAct = new ActionMove(this);
			break;
		case ROTATE:
			newAct = new ActionRotate(this);
			break;
		case REDO:
			newAct = new ActionRedo(this);
			break;
		case UNDO:
			newAct = new ActionUndo(this);
			break;

		case FIG:
			newAct = new ActionFig(this);
			break;
		case FIG_COLOR:
			newAct = new ActionFigColor(this);
			break;
		case COLOR:
			newAct = new ActionColor(this);
			break;
		case RESTART:
			newAct = new ActionRestart(this);
			break;
		case EXIT:
			///create ExitAction here
			
			break;
		
		case STATUS:	//a click on the status bar ==> no action
			return NULL;
			break;
	}	
	return newAct;
}
//////////////////////////////////////////////////////////////////////
//Executes the created Action
void ApplicationManager::ExecuteAction(Action* &pAct) 
{	
	//Execute the created action
	if(pAct != NULL)
	{
		pAct->Execute();//Execute
		delete pAct;	//Action is not needed any more ==> delete it
		pAct = NULL;
	}
}
//==================================================================================//
//						Figures Management Functions								//
//==================================================================================//

//Add a figure to the list of figures
void ApplicationManager::AddFigure(CFigure* pFig)
{
	if(FigCount < MaxFigCount )
		FigList[FigCount++] = pFig;	
}
////////////////////////////////////////////////////////////////////////////////////
CFigure *ApplicationManager::GetFigure(int x, int y) const
{
	//If a figure is found return a pointer to it.
	//if this point (x,y) does not belong to any figure return NULL


	///Add your code here to search for a figure given a point x,y	

	return NULL;
}
//==================================================================================//
//							Interface Management Functions							//
//==================================================================================//

//Draw all figures on the user interface
void ApplicationManager::UpdateInterface() const
{	
	for(int i=0; i<FigCount; i++)
		FigList[i]->DrawMe(pGUI);		//Call Draw function (virtual member fn)
}
////////////////////////////////////////////////////////////////////////////////////
//Return a pointer to the interface
GUI *ApplicationManager::GetGUI() const
{	return pGUI; }
////////////////////////////////////////////////////////////////////////////////////
//Destructor
ApplicationManager::~ApplicationManager()
{
	for(int i=0; i<FigCount; i++)
		delete FigList[i];
	delete pGUI;
	
}
