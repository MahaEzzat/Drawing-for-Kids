#ifndef CELLIPSE_H
#define CELLIPSE_H

#include "CFigure.h"

class CEllipse : public CFigure
{
private:
	Point LeftMajor;
	int Major;
	int Minor;
public:
	CEllipse(Point, int, int, GfxInfo FigureGfxInfo);
	virtual void DrawMe(GUI* pOut) const;
};

#endif