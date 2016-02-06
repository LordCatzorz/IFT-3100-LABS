#include "Renderer.h"

Renderer::Renderer()
{
	lsystem = LSystem();
	this->nbIteration = 0;
	this->setup();
	lsystem.generate(0);

}

Renderer::~Renderer()
{
}

void Renderer::setup()
{
	lsystem.setAxiom("[<0[X][++[0FX]]]");
	lsystem.addRule("X", "X([+[H[SDX]][++H[SDX]]])");
}

void Renderer::update()
{
	
	//lsystem.generate(nbIteration++);
	//if (nbIteration > 8)
	//{
	//	nbIteration = 0;
	//}
}

void Renderer::draw()
{
	lsystem.draw();
}

void Renderer::exportImage(const string path, const string extension)
{
	ofImage imageTemp;

	string timestamp = ofGetTimestampString("%y%m%d-%H%M%S-%i");

	string fileName = path + timestamp + "." + extension;

	imageTemp.grabScreen(0, 0, ofGetWindowWidth(), ofGetWindowHeight());

	imageTemp.save(fileName);

	ofLog() << "<export image: " << fileName << ">";
}