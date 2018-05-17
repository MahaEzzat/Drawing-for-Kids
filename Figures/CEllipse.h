#ifndef CELLIPSE_H
#define CELLIPSE_H

#include "..\Figures\CFigure.h"

class CEllipse : public CFigure
{
private:
	Point LeftMajor;
	int Major;
	int Minor;
public:
	CEllipse(Point, int, int, GfxInfo FigureGfxInfo);
	CEllipse(fstream &Infile, GfxInfo FigureGfxInfo);
	virtual void DrawMe(GUI* pOut) const;
	virtual bool IsInside(int, int);
	virtual void Save(fstream &OutFile, int id);
	virtual void Load(fstream &Infile);
};

#endif