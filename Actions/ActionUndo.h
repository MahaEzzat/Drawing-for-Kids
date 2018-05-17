#ifndef ACTION_UNDO_H
#define ACTION_UNDO_H

#include "Action.h"

//Add Square Action class
class ActionUndo : public Action
{
public:
	ActionUndo(ApplicationManager *pApp);
	
	//Add Square to the ApplicationManager
	virtual void Execute() ;
	
};

#endif