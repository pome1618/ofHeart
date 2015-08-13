#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
	ofSetWindowTitle("Heart");
	ofBackground(15, 0, 0);
	ofSetFrameRate(60);
	ofEnableAlphaBlending();
	light.enable();
	ofEnableDepthTest();
	ofEnableSmoothing();
	light.setDirectional();
	light.setPosition(ofGetWidth() / 2, ofGetHeight() / 2 - 600,0);
	light.setAmbientColor(ofFloatColor(1.0, 1.0, 1.0, 1.0));
	light.setDiffuseColor(ofFloatColor(1.0, 1.0, 1.0));
	light.setSpecularColor(ofFloatColor(0,0, 0));
}

//--------------------------------------------------------------
void ofApp::draw() {
	ofTranslate(ofGetWidth() / 2, ofGetHeight() / 2 + 400, -400);
	ofRotateX(100);
	ofRotateY(0);
	ofRotateZ(0);
	heart.drawHeart();
}
