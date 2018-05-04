#ifndef CHEXAGON_H
#define CHEXAGON_H

#include "..\Project Framework New\Figures\CFigure.h"

class CHexagon : public CFigure
{
private:
	int* PX;
	int* PY;
public:
	CHexagon(int*, int*, GfxInfo FigureGfxInfo);
	virtual void DrawMe(GUI* pOut) const;
};

#endif