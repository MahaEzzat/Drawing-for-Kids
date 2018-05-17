#ifndef CHEXAGON_H
#define CHEXAGON_H

#include "..\Figures\CFigure.h"

class CHexagon : public CFigure
{
private:
	int* PX;
	int* PY;
public:
	CHexagon(int*, int*, GfxInfo FigureGfxInfo);
	CHexagon(fstream &Infile, GfxInfo FigureGfxInfo);
	virtual void DrawMe(GUI* pOut) const;
	virtual bool IsInside(int, int);
	virtual void Save(fstream &OutFile, int id);
	virtual void Load(fstream &Infile);
	void PrintPoints();
};

#endif