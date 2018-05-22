#ifndef ACTION_CHANGE_FC_H
#define ACTION_CHANGE_FC_H

#include "Action.h"
#include "..\ApplicationManager.h"

//Add Square Action class
class ActionChangeFC: public Action
{
public:
	ActionChangeFC(ApplicationManager *pApp);
	
	//Add Square to the ApplicationManager
	virtual void Execute() ;
	
};

#endif