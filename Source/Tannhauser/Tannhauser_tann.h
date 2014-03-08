/*
 * DO NOT MODIFY. THIS CODE IS MACHINE GENERATED BY THE TANNHÄUSER PD COMPILER.
 * THIS HEADER DEFINES THE EXTERNAL TANNHÄUSER API.
 */

#ifndef _TANNHAUSER_TANN_H_
#define _TANNHAUSER_TANN_H_

#include "TannBase.h"

#define Context(_x) ((Tann_tann *) (_x))

// object includes
#include "DspAdd.h"
#include "DspLine.h"
#include "DspMultiply.h"
#include "MessageFloat.h"

typedef struct Tann_tann {
	TannBase base;
	
	// objects
	DspLine dLine_lFWZE;
	DspLine dLine_9a4RK;
	DspLine dLine_iIF6Z;
	DspLine dLine_sqWoz;
	MessageFloat mFloat_4jxjT;
	MessageFloat mFloat_bfXtM;
	MessageFloat mFloat_yd3Kz;
	MessageFloat mFloat_n5QY1;
} Tann_tann;

Tann_tann *ctx_tann_new(int numInputChannels, int numOutputChannels, int nominalBlockSize, double sampleRate);

void ctx_tann_free(Tann_tann *c);

/**
 * Note that the block size (n) may be different from the nominal block size reported at
 * initialisation. Note that input and output buffers _MUST_ be independent non-overlapping
 * regions in memory.
 */
void ctx_tann_process(Tann_tann *_c, float *inputBuffers, float *outputBuffer, int n);

static inline TannBase *ctx_tann_getBase(Tann_tann *_c) {
	return &_c->base;
}

#endif // _TANNHAUSER_TANN_H_
