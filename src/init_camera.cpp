
#include "ofMain.h"
#include <iostream>

class init_camera public: public ofBaseApp {
public:
    void setup() {



        vidGrabber.setDeviceID(0); // pick the first webcam
        vidGrabber.setDesiredFrameRate(30);
        vidGrabber.setup(640, 480);
    }

    void update() {
        vidGrabber.update(); // get the latest frame
    }

    void draw() {
        // if (vidGrabber.isFrameNew()) {
            vidGrabber.draw(0, 0); // draw the camera frame to screen
        // }
    }

private:
    ofVideoGrabber vidGrabber;
    
};


