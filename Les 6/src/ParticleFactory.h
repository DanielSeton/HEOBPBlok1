#pragma once

#include "Particle.h"

class ParticleFactory
{
public:
	static ParticleFactory* instance();
	void setOrigin(int x, int y);
	void setCurvingParticleRatio(float ratio);
	void setParticleNieuwRatio(float ratio);
	void setColours(ofColor innerColour, ofColor outercolor);

	Particle* emit();

private:
	ParticleFactory();
	static ParticleFactory* theOnlyOne;
	int originX;
	int originY;
	float curvingParticleRatio;
	float ParticleNieuwRatio;
	ofColor inner;
	ofColor outer;
};

