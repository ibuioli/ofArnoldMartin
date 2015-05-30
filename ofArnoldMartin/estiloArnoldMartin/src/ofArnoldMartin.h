#ifndef OFARNOLDMARTIN_H
#define OFARNOLDMARTIN_H

#include "ofMain.h"

class ofArnoldMartin
{
    public:
        void update(float v, float b, float r);
		void draw();

		float a;
		int c;
		float velocidad, bucle, reproduccion;

        ofVideoPlayer mov;
        ofSoundPlayer aud;
        ofArnoldMartin();
    protected:
    private:
};

#endif // OFARNOLDMARTIN_H