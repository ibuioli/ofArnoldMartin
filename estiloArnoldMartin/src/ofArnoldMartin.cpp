#include "ofArnoldMartin.h"

ofArnoldMartin::ofArnoldMartin()
{
    mov.loadMovie("video.mov");
    mov.play();
    ofSetBackgroundAuto(false);
    ofBackground(0, 0, 0);
    ofSetFrameRate(30);
}

//--------------------------------------------------------------
void ofArnoldMartin::update(float velocidad_, float bucle_, float reproduccion_){
    velocidad = velocidad_;
    bucle = bucle_;
    reproduccion = reproduccion_;

    c++;

    if(c > 0 && c < bucle){
        a += velocidad;
    }else if(c > bucle && c < reproduccion){
        a += -velocidad;
    }else if(c > reproduccion){
        c = 0;
    }

    mov.setPosition(a);
    mov.update();
}

//--------------------------------------------------------------
void ofArnoldMartin::draw(){

    mov.draw(0,0,ofGetWidth(),ofGetHeight());
}
