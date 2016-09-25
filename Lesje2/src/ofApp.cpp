#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	for (int i = 0; i < particles.size(); i++) {
		partl = Particle();
	}
	partl2 = Curv();
}

//--------------------------------------------------------------
void ofApp::update(){
	for (int i = 0; i < particles.size(); i++) {
		particles[i].move();
	}
	partl2.move();
}

//--------------------------------------------------------------
void ofApp::draw(){
	for (int i = 0; i < particles.size(); i++) {
		particles[i].draw();
	}
	partl2.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}
