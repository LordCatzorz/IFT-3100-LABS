#include "pixel.h"

Pixel::Pixel()
{
	this->x = 0;
	this->y = 0;
	this->colour = ofColor(255, 0, 255);
}

Pixel::Pixel(int _x, int _y, ofColor _colour)
{
	this->x = _x;
	this->y = _y;
	this->colour = _colour;
}

Pixel::~Pixel()
{
}

void Pixel::draw()
{
	ofPushMatrix();
	ofSetColor(this->colour);
	ofFill();
	ofRect(this->x, this->y, 1, 1);
	ofPopMatrix();
}
