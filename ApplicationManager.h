#ifndef APPLICATION_MANAGER_H
#define APPLICATION_MANAGER_H

#include "DEFS.h"
#include "Figures\CFigure.h"
#include <fstream>

class Action;	//Forward Declaration


//Main class that manages everything in the application.
class ApplicationManager
{

	enum { MaxFigCount = 200 };	//Max no of figures

private:
	int FigCount;		//Actual number of figures
	CFigure* FigList[MaxFigCount];	//List of all figures (Array of pointers)
	CFigure* DrawFigList[MaxFigCount];	//List of all figures (Array of pointers)
	int IDs[MaxFigCount]; //IDs of the answer in the playmode
	int ColorCount; //Number of colored figures of certail color

	//Pointers to Input and Output classes
	GUI* pGUI;
	

public:	
	
	ApplicationManager(); 
	~ApplicationManager();

	void Run();		//to run the application
	// -- Action-Related Functions
	Action* CreateAction(ActionType);
	void ExecuteAction(Action*&) ; //Execute an action
	
	// -- Figures Management Functions
	void AddFigure(CFigure* pFig); //Adds a new figure to the FigList
	CFigure *GetFigure(int x, int y) const; //Search for a figure given a point inside the figure
	void SelectFigure(int x, int y);  
	void RemoveFigure(int id); //set pointer of figure (id) to NULL (PLAYING MODE)
	CFigure* GetSelectedFig() const; //Get pointer to the selected figure
	void StartPlay(); //Store the figures of drawmode in temp. array of 
	void StartDraw(); //get the original array of pointers to figures of drawmode
	// -- Interface Management Functions	
	GUI *GetGUI() const; //Return pointer to the interface
	void UpdateInterface() const;	//Redraws all the drawing window
	int ColorFigList(color* Col); //return number of colored figures with certain color
	void SaveAll(fstream &Outfile); //Saves the drawing window information
	int GetFigCount();
	void ClearFigList();
};

#endif