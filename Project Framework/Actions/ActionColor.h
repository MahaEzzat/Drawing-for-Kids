#ifndef ACTION_COLOR_H
#define ACTION_COLOR_H

#include "Action.h"

//Add Square Action class
class ActionColor : public Action
{
public:
	ActionColor(ApplicationManager *pApp);
	
	//Add Square to the ApplicationManager
	virtual void Execute() ;
	
};

#endif