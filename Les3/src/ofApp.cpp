#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup(){
	partl = ParticleEmmitter();
}

//--------------------------------------------------------------
void ofApp::update(){
	partl.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
	partl.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}
