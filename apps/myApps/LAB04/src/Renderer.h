#pragma once

#include "LSystem.h"

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
	LSystem lsystem;
	int nbIteration;
};
