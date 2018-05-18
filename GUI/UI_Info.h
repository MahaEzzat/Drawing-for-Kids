#ifndef UI_INFO_H
#define UI_INFO_H

#include "..\CMUgraphicsLib\CMUgraphics.h"

//User Interface information file.
//This file contains info that is needed by Input and Output classes to
//handle the user interface

enum GUI_MODE	//Graphical user interface mode
{
	MODE_DRAW,	//Drawing mode (startup mode)
	MODE_PLAY	//Playing mode
};

enum DrawMenuItem //The items of the Draw menu (you should add more items)
{
	//Note: Items are ordered here as they appear in menu
	//If you want to change the menu items order, change the order here
	ITM_SQUR,		//Square item in menu
	ITM_ELPS,		//Ellipse item in menu
	ITM_HEX,
	ITM_DC,
	ITM_FC,
	ITM_DEL,
	ITM_RSZ,
	ITM_STB,
	ITM_BTF,
	ITM_SAVE,
	ITM_LOAD,
	ITM_PAL,
	ITM_ROTATE,
	ITM_MOVE,
	ITM_REDO,
	ITM_UNDO,
	ITM_PM,
	//TODO: Add more items names here

	ITM_EXIT,		//Exit item

	DRAW_ITM_COUNT		//no. of menu items ==> This should be the last line in this enum

};

enum PlayMenuItem //The items of the Play menu (you should add more items)
{
	//Note: Items are ordered here as they appear in menu
	//If you want to change the menu items order, change the order here

	//TODO: Add more items names here
	ITM_FIG,
	ITM_COLOR,
	ITM_FIG_COLOR,
	ITM_DM,
	ITM_RESTART,
	PLAY_ITM_COUNT		//no. of menu items ==> This should be the last line in this enum

};





__declspec(selectany) //This line to prevent "redefinition error"

struct UI_Info	//User Interface Info.
{
	GUI_MODE InterfaceMode;

	int	width, height,	//Window width and height
		wx, wy,			//Window starting coordinates
		StatusBarHeight,	//Status Bar Height
		ToolBarHeight,		//Tool Bar Height (distance from top of window to bottom line of toolbar)
		MenuItemWidth,		//Width of each item in toolbar Draw menu
		PlayMenuItemWidth;		//Width of each item in toolbar Play menu


	color DrawColor;		//Drawing color
	color Current;
	color FillColor;		//Filling color
	color HighlightColor;	//Highlighting color
	color MsgColor;			//Messages color
	color BkGrndColor;		//Background color
	color StatusBarColor;	//Status bar color
	color MenuBarColor;
	bool ColorChagne;		//true for changing current color is selected and false for chaning Filling color is changed
	bool IsFilled;			//true for filled and false for frame
	int PenWidth;			//width of the pen that draws shapes

							/// Add more members if needed

}UI;	//create a global object UI

#endif