#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	this->renderer = Renderer();
	renderer.setup();
	ofSetFrameRate(1);
	ofSetBackgroundAuto(true);
	ofSetBackgroundColor(ofColor::blueSteel);
}

//--------------------------------------------------------------
void ofApp::update(){
	//renderer.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
	renderer.draw();
}

//--------------------------------------------------------------
void ofApp::exit()
{
	renderer.exportImage("./rendered/", "png");
}