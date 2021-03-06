#pragma once

#include "ofMain.h"
#include "tracker/Tracker.h"
#include "config/Config.h"
#include "ui/MainAppUIHolder.h"
#include "interface/TestInterfaceLayout.h"

#define DEBUG_VERSION//

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
	
		void windowResized(int w, int h);

private:
	bbrother::ConfigPtr config;
	bbrother::TrackerPtr tracker;
	bbrother::MainAppUIHolderPtr mainUI;

#ifdef DEBUG_VERSION
	bbrother::TestInterfaceLayoutPtr testInterfaceLayout;
#endif

	void onConfigLoadComplete();
	void onInterfaceEvent(bbrother::InterfaceEventType& Event);
};
