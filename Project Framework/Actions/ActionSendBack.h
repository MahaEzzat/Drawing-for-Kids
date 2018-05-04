#ifndef ACTION_SEND_BACK_H
#define ACTION_SEND_BACK_H

#include "Action.h"

//Add Square Action class
class ActionSendBack : public Action
{
public:
	ActionSendBack(ApplicationManager *pApp);
	
	//Add Square to the ApplicationManager
	virtual void Execute() ;
	
};

#endif