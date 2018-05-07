#ifndef ACTION_MOVE_H
#define ACTION_MOVE_H

#include "Action.h"

//Add Square Action class
class ActionMove : public Action
{
public:
	ActionMove(ApplicationManager *pApp);
	
	//Add Square to the ApplicationManager
	virtual void Execute() ;
	
};

#endif