#pragma once

#include "ofMain.h"
#include "renderer.h"

class ofApp : public ofBaseApp
{

public:

	Renderer* renderer;
	void setup();
	void draw();
	void exit();

};
