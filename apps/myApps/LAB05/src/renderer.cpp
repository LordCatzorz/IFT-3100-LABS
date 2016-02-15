#include "renderer.h"

Renderer::Renderer()
{
	this->wolfModel = new ofxAssimpModelLoader();
}

Renderer::~Renderer()
{
}

void Renderer::setup()
{
	ofSetLogLevel(ofLogLevel::OF_LOG_VERBOSE);
	this->wolfModel->loadModel("/models/wolf/wolf.obj");
	this->wolfModel->enableTextures();
	this->wolfModel->enableMaterials();
}

void Renderer::update()
{
}

void Renderer::draw()
{
	ofEnableDepthTest();
	ofDrawLine(0, 0, 500, 500);
	ofPushMatrix();
	//ofSetColor(ofColor::wheat);
	// inverser l'axe Y pour qu'il pointe vers le haut
	ofScale(1, 1);
	ofTranslate(500, 700);
	ofPushMatrix();
	increment += 1.5;
	ofRotate(increment, 0, 1, 0);
	ofTranslate(0,0);
	ofScale(1, 1, -1);
	//ofSetColor(ofColor::orange);
	//this->wolfModel->disableTextures();
	this->wolfModel->setPosition(0, 0, 0);
	this->wolfModel->drawWireframe();
	ofPopMatrix();
	ofPopMatrix();
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
