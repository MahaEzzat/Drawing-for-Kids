#ifndef ACTION_LOAD_H
#define ACTION_LOAD_H

#include "Action.h"

//Add Square Action class
class ActionLoad : public Action
{
public:
	ActionLoad(ApplicationManager *pApp);
	
	//Add Square to the ApplicationManager
	virtual void Execute() ;
	
};

#endif