#ifndef ACTION_FIGCOLOR_H
#define ACTION_FIGCOLOR_H

#include "Action.h"

//Add Square Action class
class ActionFigColor : public Action
{
public:
	ActionFigColor(ApplicationManager *pApp);
	
	//Add Square to the ApplicationManager
	virtual void Execute() ;
	
};

#endif