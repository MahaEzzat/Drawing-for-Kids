#ifndef ACTION_FIG_H
#define ACTION_FIG_H

#include "Action.h"

//Add Square Action class
class ActionFig : public Action
{
public:
	ActionFig(ApplicationManager *pApp);
	
	//Add Square to the ApplicationManager
	virtual void Execute() ;
	
};

#endif