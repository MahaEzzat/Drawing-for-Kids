#include "..\Project Framework New\CHexagon.h"

CHexagon::CHexagon(int* Px, int* Py, GfxInfo FigureGfxInfo) :CFigure(FigureGfxInfo)
{
	PX = Px;
	PY = Py;
}


void CHexagon::DrawMe(GUI* pGUI) const
{
	//Call Output::DrawPloygon to draw a Hexagon on the screen	
	pGUI->DrawHex(PX, PY, FigGfxInfo, Selected);
}