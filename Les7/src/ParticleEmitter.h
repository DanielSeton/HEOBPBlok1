#pragma once


#include "Particle.h"

class ParticleEmitter {
    public:
        void setOrigin(int x, int y);

        void setCurvingParticleRatio(float ratio);

        void setColours(ofColor innerColour, ofColor outerColor);


		// De emit functie maakt een object aan met een return en alle variable worden gestuurd als parameters
		// Hierdoor gebeurd er niks met de members in de class
        Particle* emit() const;

    private:
        int originX;
        int originY;
        float curvingParticleRatio;
        ofColor inner;
        ofColor outer;
};

