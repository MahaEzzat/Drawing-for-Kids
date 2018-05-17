#ifndef ACTION_BRING_FRONT_H
#define ACTION_BRING_FRONT_H

#include "Action.h"

//Add Square Action class
class ActionBringFront : public Action
{
public:
	ActionBringFront(ApplicationManager *pApp);
	
	//Add Square to the ApplicationManager
	virtual void Execute() ;
	
};

#endif