#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup()
{
	ofBackground(ofColor::black);

	factory1 = ParticleFactory();
	factory1.setOrigin(100, 100);
	factory1.setCurvingParticleRatio(0.1);
	factory1.setColours(ofColor(31, 127, 255, 127), ofColor(128, 255, 255, 15));

	factory2 = ParticleFactory();
	factory2.setOrigin(400, 400);
	factory2.setCurvingParticleRatio(0.8);
	factory2.setColours(ofColor(128, 0, 128, 127), ofColor(200, 100, 100, 15));

	factory3 = ParticleFactory();
	factory3.setOrigin(600, 600);
	factory3.setParticleNieuwRatio(0.1);
	factory3.setColours(ofColor(255, 255, 0, 127), ofColor(200, 100, 0, 15));
}

//--------------------------------------------------------------
void ofApp::update()
{

	for (int i = 0; i < particles.size(); ++i)
	{
		particles[i]->move();
	}

	Particle* freshParticle = factory1.emit();
	particles.push_back(freshParticle);

	Particle* freshParticle2 = factory2.emit();
	particles.push_back(freshParticle2);

	Particle* freshParticle3 = factory3.emit();
	particles.push_back(freshParticle3);

	Particle* lifetime;

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

