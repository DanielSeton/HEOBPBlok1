#include "ParticleEmmitter.h"



void ParticleEmmitter::setup()
{
	for (int i = 0; i < particles.size(); i++) 
	{
		partl = Particle();
	}
}

void ParticleEmmitter::update()
{
	for (int i = 0; i < particles.size(); i++) {
		particles[i].move();
	}
}

void ParticleEmmitter::draw()
{
	for (int i = 0; i < particles.size(); i++) {
		particles[i].draw();
	}
}
