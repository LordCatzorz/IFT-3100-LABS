#include "face.h"

Face::Face()
{
	for (int j = 0; j < 16; j++)
	{
		for (int i = 0; i < 16; i++)
		{
			this->facePixel[i][j] = Pixel(i, j, ofRandom(0, 255));
		}
	}

	this->i = 0;
}

Face::~Face()
{

}

void Face::draw()
{
	ofPushMatrix();
	ofScale(10, 10);
	for (int j = 0; j < 16; j++)
	{
		for (int i = 0; i < 16; i++)
		{
			this->facePixel[i][j].draw();
		}
	}

	ofPopMatrix();
}
