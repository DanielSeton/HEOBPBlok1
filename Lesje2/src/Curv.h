
#include "ofMain.h"
#include "Particle.h"

class Curv : public Particle 
{
public:
	Curv();

	void move();

	ofVec2f curve;
};

