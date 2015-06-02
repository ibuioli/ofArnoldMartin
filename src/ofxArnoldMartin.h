#ifndef OFXARNOLDMARTIN_H
#define OFXARNOLDMARTIN_H

#include "ofMain.h"

class ofxArnoldMartin
{
    public:
        void update(float v, float b, float r);
		void draw();

		float a;
		int c;
		float velocidad, bucle, reproduccion;

        ofVideoPlayer mov;
        ofSoundPlayer aud;
        ofxArnoldMartin();
    protected:
    private:
};

#endif // OFXARNOLDMARTIN_H
