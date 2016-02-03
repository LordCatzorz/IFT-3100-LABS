#pragma once
#include "Face.h"
class Logo
{
public:
	Logo();
	~Logo();

	void draw();

private:
	Face faceTop;
	Face faceLeft;
	Face faceRight;

	void createLeft();
	void createRight();
	int i;



	ofColor _362518 = ofColor::fromHex(0x362518);
	ofColor _3b6121 = ofColor::fromHex(0x3b6121);
	ofColor _496e2e = ofColor::fromHex(0x496e2e);
	ofColor _4f3624 = ofColor::fromHex(0x4f3624);
	ofColor _5a5952 = ofColor::fromHex(0x5a5952);
	ofColor _5a9a30 = ofColor::fromHex(0x5a9a30);
	ofColor _5b422d = ofColor::fromHex(0x5b422d);
	ofColor _64a43a = ofColor::fromHex(0x64a43a);
	ofColor _72b147 = ofColor::fromHex(0x72b147);
	ofColor _765338 = ofColor::fromHex(0x765338);
	ofColor _88b858 = ofColor::fromHex(0x88b858);
	ofColor _946a49 = ofColor::fromHex(0x946a49);
	ofColor _97c767 = ofColor::fromHex(0x97c767);
	ofColor _b7835a = ofColor::fromHex(0xb7835a);
};