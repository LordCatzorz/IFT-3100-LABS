#include "GoogleMusicLogo.h"
#include <math.h>

GoogleMusicLogo::GoogleMusicLogo()
{
}

GoogleMusicLogo::~GoogleMusicLogo()
{
}

void GoogleMusicLogo::draw()
{
	ofColor orange = ofColor::fromHex(0xed720d);
	ofColor brightOrange = ofColor::fromHex(0xf5810e);
	ofColor darkOrange = ofColor::fromHex(0xaf5409);
	ofColor beige = ofColor::fromHex(0xfdbb5c);
	ofColor erase = ofGetBackgroundColor();

	ofFill();
	ofSetCircleResolution(100);

	//Arc
	ofSetColor(orange);
	ofDrawCircle(0, 0, 222.5);

	ofSetColor(beige);
	ofDrawCircle(0, 0, 193.5);

	ofSetColor(erase);
	ofDrawCircle(0, 0, 142.5);
	ofDrawRectangle(-193.5, 7, 387, 300);

	//round the middle arc
	ofSetColor(erase);
	ofDrawRectangle(-155.5, -6, 26, 13);
	ofDrawRectangle(155.5, -6, -26, 13);
	ofSetColor(beige);
	ofDrawCircle(-155.5, -6, 13);
	ofDrawCircle(155.5, -6, 13);


	//Arms
	ofSetColor(orange);
	ofDrawTriangle(-222, 20, -194, 20, -194, 144);
	ofDrawTriangle(-166, 144, -194, 20, -194, 144);

	ofDrawTriangle(222, 20, 194, 20, 194, 144);
	ofDrawTriangle(166, 144, 194, 20, 194, 144);

	ofSetColor(darkOrange);
	ofDrawTriangle(166, 144, 194, 144, 185, 62);
	ofDrawTriangle(194, 144, 185, 62, 206, 92);


	//Ear cover

	//ofSetColor(0, 128, 0);

	circle topRight = circle(-113, 51, 25);
	circle bottomRight = circle(-91, 194, 26);
	circle bottomLeft = circle(-145, 209, 12);
	circle topLeft = circle(-173.5, 61, 10.5);


	ofSetColor(beige);
	drawCircle(topRight); // top-right
	drawCircle(bottomRight); //bottom-right

	ofDrawTriangle(getPointAtAngle(topRight, 110), getPointAtAngle(bottomRight, 260), getPointAtAngle(bottomLeft, 270));

	ofDrawTriangle(getPointAtAngle(topRight, 110), getPointAtAngle(bottomLeft, 270), getPointAtAngle(topLeft, 90));

	ofDrawTriangle(getPointAtAngle(bottomRight, 0), getPointAtAngle(topLeft, 180), getPointAtAngle(bottomLeft, 180));

	ofDrawTriangle(getPointAtAngle(topRight, 0), getPointAtAngle(bottomRight, 0), getPointAtAngle(topLeft, 180));


	ofSetColor(brightOrange);
	drawCircle(bottomLeft); 
	drawCircle(topLeft); 

	ofDrawTriangle(getPointAtAngle(topLeft, 90), ofPoint(-133, 32.5), ofPoint(-100, 220));
	ofDrawTriangle(getPointAtAngle(topLeft, 90), getPointAtAngle(bottomLeft,270), ofPoint(-100, 220));
	ofDrawTriangle(getPointAtAngle(topLeft, 180), getPointAtAngle(bottomLeft, 180), getPointAtAngle(bottomLeft, 0));
	ofDrawTriangle(getPointAtAngle(topLeft, 180), getPointAtAngle(bottomLeft, 180), getPointAtAngle(topLeft, 0));


	//--------------------------------------------

	topRight.x = -topRight.x;
	topLeft.x = -topLeft.x;
	bottomLeft.x = -bottomLeft.x;
	bottomRight.x = -bottomRight.x;

	ofSetColor(beige);
	drawCircle(topRight); 
	drawCircle(bottomRight); 

	ofDrawTriangle(getPointAtAngle(topRight, 70), getPointAtAngle(bottomRight, 280), getPointAtAngle(bottomLeft, 270));

	ofDrawTriangle(getPointAtAngle(topRight, 70), getPointAtAngle(bottomLeft, 270), getPointAtAngle(topLeft, 90));

	ofDrawTriangle(getPointAtAngle(bottomRight, 180), getPointAtAngle(topLeft, 0), getPointAtAngle(bottomLeft, 0));

	ofDrawTriangle(getPointAtAngle(topRight, 180), getPointAtAngle(bottomRight, 180), getPointAtAngle(topLeft, 0));


	ofSetColor(brightOrange);
	drawCircle(bottomLeft);
	drawCircle(topLeft);

	ofDrawTriangle(getPointAtAngle(topLeft, 90), ofPoint(133, 32.5), ofPoint(100, 220));
	ofDrawTriangle(getPointAtAngle(topLeft, 90), getPointAtAngle(bottomLeft, 270), ofPoint(100, 220));
	ofDrawTriangle(getPointAtAngle(topLeft, 0), getPointAtAngle(bottomLeft, 0), getPointAtAngle(bottomLeft, 180));
	ofDrawTriangle(getPointAtAngle(topLeft, 0), getPointAtAngle(bottomLeft, 0), getPointAtAngle(topLeft, 180));

}

ofPoint GoogleMusicLogo::getPointAtAngle(circle c, double angle)
{
	return ofPoint(c.x + c.radius * cos(angle * PI / 180), c.y - c.radius * sin(angle * PI / 180));
}


void GoogleMusicLogo::drawCircle(circle c)
{
	ofDrawCircle(c.x, c.y, c.radius);
}

