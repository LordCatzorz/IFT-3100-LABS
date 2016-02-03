#pragma once
#include "ofMain.h"
#include <string>
#include "GrassBlock.h"
#include "GoogleMusicLogo.h"
using namespace std;
class Renderer
{
public:
	Renderer();

	void setup();
	void draw();

	~Renderer();
	void imageImport(const string URL, ofImage * & imageDestination);
	void exportImage(const string name, const string extension);
private:
	GrassBlock grassBlock;
	GoogleMusicLogo googleMusicLogo;
	int i;
};
