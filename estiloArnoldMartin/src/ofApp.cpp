#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundAuto(false);
    ofBackground(0, 0, 0);
    ofSetFrameRate(30);

    mv = new ofArnoldMartin();
}

//--------------------------------------------------------------
void ofApp::update(){

    timer++;

    //--Operación Rítmica--
    if(timer > 0 && timer < 400){
        vel = 0.0001;
        bul = 12;
        rep = 20;
    }else if(timer > 400 && timer < 540){
        vel = 0.0008;
        bul = 12;
        rep = 20;
    }else if(timer > 540 && timer < 700){
        vel = 0.001;
        bul = 6;
        rep = 11;
    }else if(timer > 700 && timer < 790){
        vel = 0.002;
        bul = 3;
        rep = 5;
    }else if(timer > 790 && timer < 900){
        vel = 0.001;
        bul = 6;
        rep = 11;
    }else if(timer > 900 && timer < 950){
        vel = 0.0007;
        bul = 12;
        rep = 20;
    }else if(timer > 950 && timer < 1030){
        vel = 0.001;
        bul = 11;
        rep = 20;
    }else if(timer > 1030 && timer < 1200){
        vel = 0.0008;
        bul = 12;
        rep = 20;
    }else if(timer > 1200 && timer < 1330){
        vel = 0.0007;
        bul = 11;
        rep = 20;
    }else if(timer > 1330 && timer < 1500){
        vel = 0.00095;
        bul = 6;
        rep = 11;
    }else if(timer > 1500){
        timer = 540;
    }
    //---------------------

    mv->update(vel, bul, rep);

    //cout<<timer<<endl;
}

//--------------------------------------------------------------
void ofApp::draw(){
    mv->draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){

}
