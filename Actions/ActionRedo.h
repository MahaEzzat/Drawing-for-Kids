#ifndef ACTION_REDO_H
#define ACTION_REDO_H

#include "Action.h"

//Add Square Action class
class ActionRedo : public Action
{
public:
	ActionRedo(ApplicationManager *pApp);
	
	//Add Square to the ApplicationManager
	virtual void Execute() ;
	
};

#endif