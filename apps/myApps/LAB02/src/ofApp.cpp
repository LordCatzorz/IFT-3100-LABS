#include "ofApp.h"

//ofApp::ofApp()
//{
//	this->renderer = nullptr;
//}
//--------------------------------------------------------------
void ofApp::setup()
{
	ofLog() << "<ofApp::setup>";

	ofSetWindowTitle("Lab02 - Albums");
	this->renderer = new Renderer();
	renderer->setup();
}

//--------------------------------------------------------------
void ofApp::draw()
{
	renderer->draw();
}

void ofApp::exit()
{
	renderer->exportImage("./rendered/", "png");
}
//
//ofApp::~ofApp()
//{
//	if (renderer != nullptr)
//		delete renderer;
//}