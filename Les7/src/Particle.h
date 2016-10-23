#pragma once


#include "ofMain.h"

#define MAX_LIFETIME 150

class Particle {
    public:
        Particle(int startX, int startY);
        virtual ~Particle();

        virtual void move();


		// Dit is een const omdat deze methode de 3 methodes van setColours aanroepen. Omdat deze niet worden aangepast is het een const
        void draw() const;

        void setColours(ofColor center, ofColor inner, ofColor outer);

        bool isDead();

    protected:
        ofPoint position;
        float radius;
        ofVec2f speed;
		long lifetime;

        ofColor centerColour = ofColor::white;
        ofColor innerColour;
        ofColor outerColour;

};

