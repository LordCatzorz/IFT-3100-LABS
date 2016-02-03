#pragma once
#include "ofMain.h"

using namespace std;
class Pixel
{
public:

	ofColor colour;

	Pixel();
	Pixel(int _x, int _y, ofColor _colour);
	~Pixel();

	void draw();

private:
	int x;
	int y;
};
