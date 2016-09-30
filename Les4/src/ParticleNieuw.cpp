#include "ParticleNieuw.h"



ParticleNieuw::ParticleNieuw(int startX, int startY) : Particle(startX, startY)
{
	radius = ofRandom(10, 50);
	position = ofPoint(startX,
		startY);


	speed = ofVec2f(ofRandom(-5, 5),
		ofRandom(-5, 5));

	innerColour = ofColor(31, 127, 255, 127);
	outerColour = ofColor(128, 255, 255, 15);
}

void ParticleNieuw::setColours(ofColor center, ofColor inner, ofColor outer) {
	centerColour = center;
	innerColour = inner;
	outerColour = outer;
}

void ParticleNieuw::move() {
	position += speed;
}
