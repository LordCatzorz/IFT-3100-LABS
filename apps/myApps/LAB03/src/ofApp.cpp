#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	this->renderer = Renderer();
	ofSetFrameRate(20);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	renderer.draw();
}

void ofApp::exit()
{
	renderer.exportImage("./rendered/", "png");
}
