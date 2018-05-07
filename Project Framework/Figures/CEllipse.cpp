#include "CEllipse.h"


CEllipse::CEllipse(Point P1, int major, int minor, GfxInfo FigureGfxInfo) : CFigure(FigureGfxInfo)
{
	LeftMajor = P1;
	Major = major;
	Minor = minor;
}


void CEllipse::DrawMe(GUI* pGUI) const
{
	//Call Output::DrawRect to draw an ellipse on the screen	
	pGUI->DrawEllip(LeftMajor, Major, Minor, FigGfxInfo, Selected);
}