#pragma once

#include "ofMain.h"
#include "Particle.h"

class ParticleNieuw : public Particle
{
public:
	ParticleNieuw(int startX, int startY, ofColor inner, ofColor outer);

	virtual void setColours(ofColor center, ofColor inner, ofColor outer);

};

