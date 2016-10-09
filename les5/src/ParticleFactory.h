#pragma once

#include "Particle.h"

class ParticleFactory
{
public:
	void setOrigin(int x, int y);
	void setCurvingParticleRatio(float ratio);
	void setParticleNieuwRatio(float ratio);
	void setColours(ofColor innerColour, ofColor outercolor);

	Particle* emit();

private:
	int originX;
	int originY;
	float curvingParticleRatio;
	float ParticleNieuwRatio;
	ofColor inner;
	ofColor outer;
};

