#include "CEllipse.h"

CEllipse::CEllipse(Point P1, int major, int minor, GfxInfo FigureGfxInfo) : CFigure(FigureGfxInfo)
{
	LeftMajor = P1;
	Major = major;
	Minor = minor;
}

CEllipse::CEllipse(fstream &InFile, GfxInfo FigureGfxInfo) : CFigure(FigureGfxInfo)
{
	Load(InFile);
}

void CEllipse::DrawMe(GUI* pGUI) const
{
	//Call Output::DrawRect to draw an ellipse on the screen	
	pGUI->DrawEllip(LeftMajor, Major, Minor, FigGfxInfo, Selected);
}

bool CEllipse::IsInside(int x, int y)
{
	if (4 * pow((x - (LeftMajor.x + Major/2)), 2) / pow(Major, 2) + 4 * pow((y - LeftMajor.y),2) / pow(Minor, 2) <= 1)
	{
		return true;
	}
	return false;
}


void CEllipse::Save(fstream &OutFile, int id) 
{
	OutFile << "ELPS " << id << " " << LeftMajor.x << " " << LeftMajor.y << " " << Major << " " << Minor << " " << FigGfxInfo.isFilled << " " << std::to_string(FigGfxInfo.DrawClr.ucRed) << " " << std::to_string(FigGfxInfo.DrawClr.ucGreen) << " " << std::to_string(FigGfxInfo.DrawClr.ucBlue) << " " << std::to_string(FigGfxInfo.FillClr.ucRed) << " " << std::to_string(FigGfxInfo.FillClr.ucGreen) << " " << std::to_string(FigGfxInfo.FillClr.ucBlue) << "\n";
}

void CEllipse::Load(fstream &InFile)
{
	string word;
	InFile >> word; //retrieving ID which is the same as the index of the figure in FigList
	InFile >> word; LeftMajor.x = stoi(word, 0, 10);
	InFile >> word; LeftMajor.y = stoi(word, 0, 10);
	InFile >> word; Major = stoi(word, 0, 10);
	InFile >> word; Minor = stoi(word, 0, 10);
	InFile >> word; FigGfxInfo.isFilled = stoi(word, 0, 10);
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