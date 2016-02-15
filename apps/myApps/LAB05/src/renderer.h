#pragma once

#include "ofMain.h"
#include "ofxAssimpModelLoader.h"

class Renderer
{
public:
	Renderer();
	~Renderer();

	void setup();
	void update();
	void draw();

	void exportImage(const string path, const string extension);
private:
	ofxAssimpModelLoader* wolfModel;
	float increment = 0;
};
