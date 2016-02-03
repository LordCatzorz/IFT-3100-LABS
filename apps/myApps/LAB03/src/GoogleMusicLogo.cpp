#include "GoogleMusicLogo.h"


GoogleMusicLogo::GoogleMusicLogo()
{
}

GoogleMusicLogo::~GoogleMusicLogo()
{
}

void GoogleMusicLogo::draw()
{
	ofColor orange = ofColor::fromHex(0xed720d);
	ofColor beige = ofColor::fromHex(0xfdbb5c);
	ofColor erase = ofGetBackgroundColor();

	ofFill();
	ofSetCircleResolution(100);

	ofSetColor(orange);
	ofDrawCircle(0, 0, 222.5);

	ofSetColor(beige);
	ofDrawCircle(0, 0, 193.5);

	ofSetColor(erase);
	ofDrawCircle(0, 0, 142.5);
	ofDrawRectangle(-193.5, 7, 387, 300);

	ofSetColor(orange);
	ofDrawTriangle(-222, 20, -194, 20, -194, 144);
	ofDrawTriangle(-166, 144, - 194, 20, -194, 144);

	ofDrawTriangle(222, 20, 194, 20, 194, 144);
	ofDrawTriangle(166, 144,194, 20, 194, 144);
}
