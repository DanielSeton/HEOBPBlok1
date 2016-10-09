#pragma once


#include "ofMain.h"

class Particle {
public:
	Particle(int startX, int startY, ofColor inner, ofColor outer);

	virtual void move();

	void draw();

	void update();

	bool IsDead();

	void setColours(ofColor center, ofColor inner, ofColor outer);

	int lifetime;

protected:
	ofPoint position;
	float radius;
	ofVec2f speed;


	ofColor centerColour = ofColor::white;
	ofColor innerColour;
	ofColor outerColour;

};

