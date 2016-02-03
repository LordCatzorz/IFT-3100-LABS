#include "renderer.h"
Renderer::Renderer()
{
}

void Renderer::setup()
{
	i = 0;
	grassBlock = GrassBlock();
	googleMusicLogo = GoogleMusicLogo();
}

void Renderer::draw()
{

	ofSetBackgroundColor(255);
	ofPushMatrix();
	ofTranslate(ofGetWindowWidth() / 2.0, ofGetWindowHeight() / 2.0);
	
	googleMusicLogo.draw();
	ofPushMatrix();
	ofTranslate(0, -60);
	grassBlock.draw();
	ofPopMatrix();
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
	ofImage imageTemp;

	string timestamp = ofGetTimestampString("%y%m%d-%H%M%S-%i");

	string fileName = name + timestamp + "." + extension;

	imageTemp.grabScreen(0, 0, ofGetWindowWidth(), ofGetWindowHeight());

	imageTemp.save(fileName);

	ofLog() << "<export image: " << fileName << ">";
}
