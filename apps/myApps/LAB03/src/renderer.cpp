#include "renderer.h"
Renderer::Renderer()
{
}

void Renderer::setup()
{
	i = 0;
	grassBlock = GrassBlock();
}

void Renderer::draw()
{

	ofSetBackgroundColor(0, 255, 0);
	ofPushMatrix();
	ofTranslate(ofGetWindowWidth() / 2.0, ofGetWindowHeight() / 2.0);

	grassBlock.draw();
	ofPopMatrix();
}

Renderer::~Renderer()
{
}

void Renderer::imageImport(const string URL, ofImage *& imageDestination)
{
}

void Renderer::exportImage(const string name, const string extension)
{
}
