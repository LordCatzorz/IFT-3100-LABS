#pragma once
#include "LSystem.h"
#include <regex>



LSystem::LSystem()
{
	fbo.allocate(ofGetWindowWidth(), ofGetWindowHeight(), GL_RGBA);

}

LSystem::~LSystem()
{
}

void LSystem::generate(int _nbIteration)
{
	this->stringToDraw = this->axiom;

	for (int i = 0; i < _nbIteration; i++)
	{
		for each (Rule rule in this->rules)
		{
			regex expression(rule.variable);

			this->stringToDraw = regex_replace(this->stringToDraw, expression, rule.replacement);
		}
	}
	initFbo();

}

void LSystem::draw()
{
	float width = ofGetWindowWidth();
	float height = ofGetWindowHeight();
	ofPushMatrix();
	ofTranslate(height + (width - height)*0.5, -(width - height)*0.5);
	ofRotateZ(90);
	fbo.draw(0, 0);
	ofPopMatrix();
}

void LSystem::addRule(string _variable, string _replacement)
{
	Rule rule;
	rule.replacement = _replacement;
	rule.variable = _variable;
	this->rules.push_back(rule);
}

void LSystem::setAxiom(string _axiom)
{
	this->axiom = _axiom;
}

void LSystem::initFbo()
{
	fbo.begin();
	float scaleFactor = 0.65;
	float lineHeight = min(ofGetWindowWidth(), ofGetWindowHeight()) / 2.0;
	float rotationDegree = 90;
	ofPushMatrix();
	ofTranslate(ofGetWindowWidth() / 2.0, ofGetWindowHeight() / 2.0);
	int depth = 0;
	float lineWidth = 10;
	lineWidthRatio = 0.2;
	for each (char c in this->stringToDraw)
	{
		switch (c)
		{
		case '(':
			depth = ++depth > 10 ? 0 : depth;

			break;
		case ')':
			depth = --depth < 0 ? 10 : depth;
			break;
		case '[':
			ofPushMatrix();
			break;
		case ']':
			ofPopMatrix();
			break;
		case '+':
			ofTranslate(-lineHeight / 2.0, lineHeight / 2.0);
			ofRotate(-rotationDegree);
			break;
		case '-':
			ofTranslate(lineHeight / 2.0, -lineHeight / 2.0);
			ofRotate(rotationDegree);
			break;
		case 'X':
			ofSetLineWidth(lineWidth - depth);
			ofFill();
			ofDrawLine(0, 0, 0, lineHeight);
			break;
		case 'C':
			ofSetLineWidth(lineWidth - depth);
			ofFill();
			ofDrawLine(0, 0, 0, lineHeight);
			break;
		case 'F':
			ofTranslate(0, lineHeight);
			break;
		case 'H':
			ofTranslate(0, lineHeight*0.5);
			break;
		case 'S':
			ofScale(scaleFactor, scaleFactor);
			break;
		case 'D':
			ofSetColor(25 * depth);
			break;
		case '0':
			ofSetColor(0, 0, 0);
			break;
		case '1':
			ofSetColor(255, 0, 0);
			break;
		case '2':
			ofSetColor(0, 255, 0);
			break;
		case '3':
			ofSetColor(0, 0, 255);
			break;
		case '4':
			ofSetColor(255, 255, 0);
			break;
		case '5':
			ofSetColor(255, 0, 255);
			break;
		case '6':
			ofSetColor(0, 255, 255);
			break;
		case '7':
			ofSetColor(255, 255, 255);
			break;
		case '<':
			lineWidthRatio *= 2.0;
			ofSetLineWidth(lineWidthRatio);
			break;
		case '>':
			lineWidthRatio *= 0.5;
			ofSetLineWidth(lineWidthRatio);
			break;
		default:
			break;
		}
	}
	fbo.end();
}