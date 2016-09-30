#pragma once

#include "ofMain.h"
#include "Particle.h"

class ParticleNieuw : public Particle
{
public:
	ParticleNieuw(int startX, int startY);

	void move();

	void setColours(ofColor center, ofColor inner, ofColor outer);

protected:
	ofPoint position;
	float radius;
	long lifetime;

	ofColor centerColour = ofColor::white;
	ofColor innerColour = ofColor::red;
	ofColor outerColour = ofColor::purple;

};

