#pragma once

#include "Renderer.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void exit();
private:
	Renderer renderer;
};
