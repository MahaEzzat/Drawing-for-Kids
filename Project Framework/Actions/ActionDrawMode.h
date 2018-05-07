#ifndef ACTION_DRAW_MODE_H
#define ACTION_DRAW_MODE_H

#include "Action.h"

//Add Square Action class
class ActionDrawMode : public Action
{
public:
	ActionDrawMode(ApplicationManager *pApp);
	
	//Add Square to the ApplicationManager
	virtual void Execute() ;
	
};

#endif