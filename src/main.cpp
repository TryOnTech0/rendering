

#include "ofMain.h"
#include "ofApp.cpp"

int main() {
    ofSetupOpenGL(640, 480, OF_WINDOW);
    ofRunApp(new init_camera());
}