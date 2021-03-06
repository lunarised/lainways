#pragma once
#include "Tilemap.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

ref class NPC
{
private:

	int frameHeight;
	int frameWidth;
	int nFrames;
	int state;
	int currentFrame;
	Graphics^ canvas;
	Bitmap^ spriteSheet;
	TileMap^ tm;

public:
	NPC^ Next;
	property int xPos;
	property int yPos;
	property int Type;
	property int health;

public:
	NPC(Graphics^ _canvas, Bitmap^ _spriteSheet, int _frameWidth, int _frameHeight, int _nFrames, int _xPos, int _yPos, int type, TileMap^ _tm);
	void draw(int _xVP, int _yVP);
	void updateFrame();
	void genState(int _x, int _y);
	int direction;
	int action(int _x, int _y);
};

