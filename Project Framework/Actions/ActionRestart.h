#ifndef ACTION_RESTART_H
#define ACTION_RESTART_H

#include "Action.h"

//Add Square Action class
class ActionRestart : public Action
{
public:
	ActionRestart(ApplicationManager *pApp);
	
	//Add Square to the ApplicationManager
	virtual void Execute() ;
	
};

#endif