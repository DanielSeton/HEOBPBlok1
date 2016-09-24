#include "ofMain.h"
#include "Particle.h"


class ParticleEmmitter
{
public:
	void setup();
	void update();
	void draw();

	Particle partl;

	array<Particle, 100> particles;
};

