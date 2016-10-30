#include "ParticleFactory.h"
#include "CurvingParticle.h"
#include "ParticleNieuw.h"

ParticleFactory* ParticleFactory::instance()
{
	if (!ParticleFactory::theOnlyOne)
	{
		ParticleFactory::theOnlyOne = new ParticleFactory();
	}
	return ParticleFactory::theOnlyOne;
}

ParticleFactory* ParticleFactory::theOnlyOne = 0;


Particle* ParticleFactory::emit()
{
	Particle* newParticle;

	if (ofRandom(1) > (1 - ParticleNieuwRatio))
	{
		newParticle = new ParticleNieuw(originX, originY, inner, outer);
	}
	else
	{
		newParticle = new Particle(originX, originY, inner, outer);
	}

	return newParticle;

	if (ofRandom(1) > (1 - curvingParticleRatio))
	{
		newParticle = new CurvingParticle(originX, originY, inner, outer);
	}
	else
	{
		newParticle = new Particle(originX, originY, inner, outer);
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
	inner = innerColour;
	outer = outerColour;
}
