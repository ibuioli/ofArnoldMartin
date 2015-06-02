#include "ofxArnoldMartin.h"

ofxArnoldMartin::ofxArnoldMartin()
{
    mov.loadMovie("video.mp4");
    aud.loadSound("audio.mp3", true);
    aud.play();
    ofSetFrameRate(24);
}

//--------------------------------------------------------------
void ofxArnoldMartin::update(float velocidad_, float bucle_, float reproduccion_){
    velocidad = velocidad_;
    bucle = bucle_;
    reproduccion = reproduccion_;

    c++;

    if(c > 0 && c < bucle){
        a += velocidad;
    }else if(c > bucle && c < reproduccion){
        a -= velocidad;
    }else if(c > reproduccion){
        c = 0;
    }

    mov.setPosition(a);
    mov.update();

    aud.setPosition(a);

    if(a >= 1){
        mov.stop();
        aud.stop();
    }
}

//--------------------------------------------------------------
void ofxArnoldMartin::draw(){
    if(a < 1){
        mov.draw(0,0,ofGetWidth(),ofGetHeight());
    }else{
        ofPushStyle();
        ofSetColor(0,0,0);
        ofFill();
        ofRect(0, 0, ofGetWidth(), ofGetHeight());
        ofPopStyle();
    }
}
