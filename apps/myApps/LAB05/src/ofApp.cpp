#include "ofApp.h"

ofApp::ofApp()
{
	this->renderer = nullptr;
}

ofApp::~ofApp()
{
	delete this->renderer;
}

//--------------------------------------------------------------
void ofApp::setup(){

	ofSetFrameRate(30);
	this->renderer = new Renderer();
	this->renderer->setup();
}

//--------------------------------------------------------------
void ofApp::update(){
	this->renderer->update();
}

//--------------------------------------------------------------
void ofApp::draw(){
	this->renderer->draw();

	//renderer->exportImage("/rendered/gif/", "png");
}

void ofApp::exit()
{
	renderer->exportImage("/rendered/", "png");
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
