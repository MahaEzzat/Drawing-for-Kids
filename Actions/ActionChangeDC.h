#ifndef ACTION_ADD_CHANGE_DC_H
#define ACTION_ADD_CHANGE_DC_H

#include "Action.h"
#include "..\ApplicationManager.h"

//Add Square Action class
class ActionChangeDC: public Action
{
public:
	ActionChangeDC(ApplicationManager *pApp);
	
	//Add Square to the ApplicationManager
	virtual void Execute() ;
	
};

#endif