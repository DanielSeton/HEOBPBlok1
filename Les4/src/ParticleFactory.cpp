#include "ParticleFactory.h"
#include "CurvingParticle.h"
#include "ParticleNieuw.h"

Particle* ParticleFactory::emit()
{
	Particle* newParticle;

	if (ofRandom(1) > (1 - ParticleNieuwRatio))
	{
		newParticle = new CurvingParticle(originX, originY);
		newParticle = new ParticleNieuw(originX, originY);
	}
	else
	{
		newParticle = new Particle(originX, originY);
	}

	return newParticle;
}

void ParticleFactory::setCurvingParticleRatio(float ratio)
{
	curvingParticleRatio = ratio;
}

void ParticleFactory::setParticleNieuwRatio(float ratio)
{
	ParticleNieuwRatio = ratio;
}

void ParticleFactory::setOrigin(int x, int y)
{
	originX = x;
	originY = y;
}

void ParticleFactory::setColours(ofColor innerColour, ofColor outerColour)
{
	
}
