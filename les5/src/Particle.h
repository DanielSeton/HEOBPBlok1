#pragma once


#include "ofMain.h"

class Particle {
    public:
        Particle(int startX, int startY, ofColor inner, ofColor outer);

        virtual void move();

        void draw();
		
		void setColours(ofColor center, ofColor inner, ofColor outer);

    protected:
        ofPoint position;
        float radius;
        ofVec2f speed;
        float lifetime;

        ofColor centerColour = ofColor::white;
        ofColor innerColour;
        ofColor outerColour;

};
