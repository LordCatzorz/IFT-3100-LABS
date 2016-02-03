#pragma once

#include "ofMain.h"

class GoogleMusicLogo
{
public:
	GoogleMusicLogo();
	~GoogleMusicLogo();

	void draw();
private:
	struct circle
	{
		double x;
		double y;
		double radius;
		circle(double _x, double _y, double _radius)
		{
			x = _x;
			y = _y;
			radius = _radius;
		}
	};
	ofPoint getPointAtAngle(circle c, double angle);
	void drawCircle(circle c);
};
