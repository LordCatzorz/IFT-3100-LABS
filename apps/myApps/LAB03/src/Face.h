#pragma once
#include "pixel.h"

using namespace std;

class Face
{
public:

	Face();
	~Face();

	void draw();
	Pixel facePixel[16][16];

private:
	int i;
};
