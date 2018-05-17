#ifndef ACTION_RESIZE_H
#define ACTION_RESIZE_H

#include "Action.h"

//Add Square Action class
class ActionResize : public Action
{
public:
	ActionResize(ApplicationManager *pApp);
	
	//Add Square to the ApplicationManager
	virtual void Execute() ;
	
};

#endif