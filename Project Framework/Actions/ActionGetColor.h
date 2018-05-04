#ifndef ACTION_GET_COLOR_H
#define ACTION_GET_COLOR_H

#include "Action.h"

//Add Square Action class
class ActionGetColor : public Action
{
public:
	ActionGetColor(ApplicationManager *pApp);
	
	//Add Square to the ApplicationManager
	virtual void Execute() ;
	
};

#endif