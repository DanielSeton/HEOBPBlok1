#pragma once

#include "ofMain.h"
#include "Particle.h"
#include "Curv.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);

		Particle partl;
		Curv partl2;

		array<Particle, 100> particles;
		
};
