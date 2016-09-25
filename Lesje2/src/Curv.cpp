#include "Curv.h"

Curv::Curv() 
{
	curve = ofVec2f(ofRandom(-5, 5),
		ofRandom(-5, 5));

	innerColour = ofColor(31, 127, 255, 127);
	outerColour = ofColor(61, 128, 128, 30);
}

void Curv::move() 
{
	position += speed;
	curve.rotate(2);
	position += curve;
}