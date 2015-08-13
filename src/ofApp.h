#pragma once

#include "ofMain.h"
#include "Heart.h"

class ofApp : public ofBaseApp{
private:
	ofLight light;
	Heart heart;

public:
	void setup();
	void draw();
};
