#ifndef ACTION_SAVE_H
#define ACTION_SAVE_H

#include "Action.h"

//Add Square Action class
class ActionSave : public Action
{
public:
	ActionSave(ApplicationManager *pApp);
	
	//Add Square to the ApplicationManager
	virtual void Execute() ;
	
};

#endif