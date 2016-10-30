#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup()
{
	ofBackground(ofColor::black);

	factory1 = ParticleFactory::instance();
	factory1->setOrigin(100, 100);
	factory1->setCurvingParticleRatio(0.1);
	factory1->setColours(ofColor(31, 127, 255, 127), ofColor(128, 255, 255, 15));

}

//--------------------------------------------------------------
void ofApp::update()
{

	for (int i = 0; i < particles.size(); ++i)
	{
		particles[i]->move();
	}

	ParticleFactory* factory = ParticleFactory::instance();

	Particle* freshParticle = factory1->emit();
	particles.push_back(freshParticle);

	int lifetime;

	ofSetWindowTitle("Particles: " + ofToString(particles.size()));

}

//--------------------------------------------------------------
void ofApp::draw()
{
	for (int i = 0; i < particles.size(); ++i)
	{
		particles[i]->draw();
	}
}

