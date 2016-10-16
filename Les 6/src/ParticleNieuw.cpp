#include "ParticleNieuw.h"
#include "math.h"



ParticleNieuw::ParticleNieuw(int startX, int startY, ofColor inner, ofColor outer) : Particle(startX, startY, inner, outer)
{
	radius = ofRandom(1, 20);
	position = ofPoint(startX,
		startY);


	speed = ofVec2f(ofRandom(-5, 5),
		ofRandom(-5, 5));

	innerColour = ofColor(128, 30, 128, 23);
	outerColour = ofColor(32, 128, 255, 15);
}

void ParticleNieuw::setColours(ofColor center, ofColor inner, ofColor outer) {
	centerColour = center;
	innerColour = inner;
	outerColour = outer;
}
