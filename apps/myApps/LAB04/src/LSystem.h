#pragma once
#include "ofMain.h";

class LSystem
{
public:
	LSystem();
	~LSystem();


	void generate(int _nbIteration);
	void draw();
	void addRule(string _variable, string _replacement);
	void setAxiom(string _axiom);

private:
	struct Rule
	{

		string variable;
		string replacement;
	};
	void initFbo();
	float lineWidthRatio = 1;
	string axiom;
	string stringToDraw;
	ofFbo fbo;
	vector<Rule> rules;
};

