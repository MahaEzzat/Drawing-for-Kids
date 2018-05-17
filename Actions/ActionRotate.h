#ifndef ACTION_ROTATE_H
#define ACTION_ROTATE_H

#include "Action.h"

//Add Square Action class
class ActionRotate : public Action
{
public:
	ActionRotate(ApplicationManager *pApp);
	
	//Add Square to the ApplicationManager
	virtual void Execute() ;
	
};

#endif