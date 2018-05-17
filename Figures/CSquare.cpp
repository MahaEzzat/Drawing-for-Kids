#include "CSquare.h"
#include <iostream>

CSquare::CSquare(Point P1, int len, GfxInfo FigureGfxInfo):CFigure(FigureGfxInfo)
{
	TopLeftCorner = P1;
	length = len;
	
}
	
CSquare::CSquare(fstream &InFile, GfxInfo  FigureGfxInfo):CFigure(FigureGfxInfo)
{
	Load(InFile);
}

void CSquare::DrawMe(GUI* pGUI) const
{
	//Call Output::DrawRect to draw a Square on the screen	
	pGUI->DrawSquare(TopLeftCorner, length, FigGfxInfo, Selected);
}

bool CSquare::IsInside(int x, int y)
{
	if (x >= TopLeftCorner.x && x <= (TopLeftCorner.x + length) && y >= TopLeftCorner.y && y <= (TopLeftCorner.y + length))
	{
		return true;
	}
	return false;
}

void CSquare::Save(fstream &OutFile, int id) 
{
	OutFile << "SQR " << id << " " << TopLeftCorner.x << " " << TopLeftCorner.y << " " << length << " " << (FigGfxInfo.isFilled? "1" : "0") << " " <<  std::to_string(FigGfxInfo.DrawClr.ucRed) << " " << std::to_string(FigGfxInfo.DrawClr.ucGreen) << " " << std::to_string(FigGfxInfo.DrawClr.ucBlue) << " " << std::to_string(FigGfxInfo.FillClr.ucRed) << " " << std::to_string(FigGfxInfo.FillClr.ucGreen) << " " << std::to_string(FigGfxInfo.FillClr.ucBlue) << "\n";
}

void CSquare::Load(fstream &InFile)
{
	string word;
	InFile >> word; //retrieving ID which is the same as the index of the figure in FigList
	InFile >> word; TopLeftCorner.x = stoi(word, 0, 10);
	InFile >> word; TopLeftCorner.y = stoi(word, 0, 10);
	InFile >> word; length = stoi(word, 0, 10);
	InFile >> word; FigGfxInfo.isFilled = stoi(word, 0, 2);
	

	int RGB[3];
	for (int i = 0; i < 3; i++)
	{
		InFile >> word;
		RGB[i] = stoi(word, 0, 10);
	}
	FigGfxInfo.DrawClr.ucRed = RGB[0];
	FigGfxInfo.DrawClr.ucGreen = RGB[1];
	FigGfxInfo.DrawClr.ucBlue = RGB[2];
	
	for (int i = 0; i < 3; i++)
	{
		InFile >> word;
		RGB[i] = stoi(word, 0, 10);
	}
	FigGfxInfo.FillClr.ucRed = RGB[0];
	FigGfxInfo.FillClr.ucGreen = RGB[1];
	FigGfxInfo.FillClr.ucBlue = RGB[2];
	
}