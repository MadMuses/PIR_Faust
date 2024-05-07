/* ------------------------------------------------------------
name: "simplerSynth"
Code generated with Faust 2.72.16 (https://faust.grame.fr)
Compilation options: -a print_samples_arch.cpp -lang cpp -ct 1 -es 1 -mcd 16 -mdd 1024 -mdy 33 -single -ftz 0
------------------------------------------------------------ */

#ifndef  __mydsp_H__
#define  __mydsp_H__

#include <iostream>
#include <cstdlib>

// Include the Faust DSP class
#include "./faust/dsp/dsp.h"
#include "./faust/gui/UI.h"
#include "./faust/audio/dummy-audio.h"



// Define a simple DSP Adapter that prints samples to stdout
class PrintSamplesAdapter : public dsp {
public:
    dsp* fDSP;

    PrintSamplesAdapter(dsp* dsp) : fDSP(dsp) {}

    virtual int getNumInputs() { return fDSP->getNumInputs(); }
    virtual int getNumOutputs() { return fDSP->getNumOutputs(); }
    virtual void buildUserInterface(UI* ui_interface) { fDSP->buildUserInterface(ui_interface); }
    virtual int getSampleRate() { return fDSP->getSampleRate(); }
    virtual void init(int sample_rate) { fDSP->init(sample_rate); }
    virtual void instanceInit(int sample_rate) { fDSP->instanceInit(sample_rate); }
    virtual void instanceConstants(int sample_rate) { fDSP->instanceConstants(sample_rate); }
    virtual void instanceResetUserInterface() { fDSP->instanceResetUserInterface(); }
    virtual void instanceClear() { fDSP->instanceClear(); }
    virtual void metadata(Meta* m) {fDSP->metadata(m);}
    virtual dsp* clone() { return new PrintSamplesAdapter(fDSP->clone()); }

    // Override the compute method to print samples
    virtual void compute(int count, FAUSTFLOAT** inputs, FAUSTFLOAT** outputs) {
        fDSP->compute(count, inputs, outputs);
        for (int i = 0; i < count; ++i) {
            for (int j = 0; j < getNumOutputs(); ++j) {
                std::cout << "Sample[" << i << "][" << j << "]: " << outputs[j][i] << std::endl;
            }
        }
    }

    //void PrintSamplesAdapter :: 

    // Allocate the audio driver
    // fAudio = std::make_unique<dummyaudio>(48000, 1);
    // fAudio->init("Dummy audio", fDSP);

};

// Main function
int main() {
    auto* dsp = new PrintSamplesAdapter(new mydsp());
    const int bufferSize = 512;  // Supposons une taille de buffer commune
    FAUSTFLOAT* inputs[1] = {new FAUSTFLOAT[bufferSize]};  // Supposons une seule entrée
    FAUSTFLOAT* outputs[1] = {new FAUSTFLOAT[bufferSize]}; // Une seule sortie

    // Initialisation et traitement
    dsp->init(44100);  // Initialiser la fréquence d'échantillonnage
    dsp->compute(bufferSize, inputs, outputs);  // Traitement des données audio

    delete[] inputs[0];
    delete[] outputs[0];
    delete dsp;
    return 0;
}

/*
// Define the main audio function
extern "C" {
    dsp* createDSPInstance() {
        return new PrintSamplesAdapter(new mydsp()); // Replace 'mydsp' with your actual DSP class name
    }
}
*/
#ifndef FAUSTFLOAT
#define FAUSTFLOAT float
#endif 

#include <algorithm>
#include <cmath>
#include <cstdint>
#include <math.h>

#ifndef FAUSTCLASS 
#define FAUSTCLASS mydsp
#endif

#ifdef __APPLE__ 
#define exp10f __exp10f
#define exp10 __exp10
#endif

#if defined(_WIN32)
#define RESTRICT __restrict
#else
#define RESTRICT __restrict__
#endif


class mydsp : public dsp {
	
 private:
	
	FAUSTFLOAT fHslider0;
	int fSampleRate;
	float fConst0;
	float fConst1;
	float fRec0[2];
	FAUSTFLOAT fHslider1;
	
 public:
	mydsp() {}

	void metadata(Meta* m) { 
		m->declare("compile_options", "-a print_samples_arch.cpp -lang cpp -ct 1 -es 1 -mcd 16 -mdd 1024 -mdy 33 -single -ftz 0");
		m->declare("filename", "simplerSynth.dsp");
		m->declare("maths.lib/author", "GRAME");
		m->declare("maths.lib/copyright", "GRAME");
		m->declare("maths.lib/license", "LGPL with exception");
		m->declare("maths.lib/name", "Faust Math Library");
		m->declare("maths.lib/version", "2.8.0");
		m->declare("name", "simplerSynth");
		m->declare("oscillators.lib/name", "Faust Oscillator Library");
		m->declare("oscillators.lib/saw2ptr:author", "Julius O. Smith III");
		m->declare("oscillators.lib/saw2ptr:license", "STK-4.3");
		m->declare("oscillators.lib/version", "1.5.1");
		m->declare("platform.lib/name", "Generic Platform Library");
		m->declare("platform.lib/version", "1.3.0");
	}

	virtual int getNumInputs() {
		return 0;
	}
	virtual int getNumOutputs() {
		return 1;
	}
	
	static void classInit(int sample_rate) {
	}
	
	virtual void instanceConstants(int sample_rate) {
		fSampleRate = sample_rate;
		fConst0 = std::min<float>(1.92e+05f, std::max<float>(1.0f, float(fSampleRate)));
		fConst1 = 1.0f / fConst0;
	}
	
	virtual void instanceResetUserInterface() {
		fHslider0 = FAUSTFLOAT(2e+02f);
		fHslider1 = FAUSTFLOAT(0.5f);
	}
	
	virtual void instanceClear() {
		for (int l0 = 0; l0 < 2; l0 = l0 + 1) {
			fRec0[l0] = 0.0f;
		}
	}
	
	virtual void init(int sample_rate) {
		classInit(sample_rate);
		instanceInit(sample_rate);
	}
	
	virtual void instanceInit(int sample_rate) {
		instanceConstants(sample_rate);
		instanceResetUserInterface();
		instanceClear();
	}
	
	virtual mydsp* clone() {
		return new mydsp();
	}
	
	virtual int getSampleRate() {
		return fSampleRate;
	}
	
	virtual void buildUserInterface(UI* ui_interface) {
		ui_interface->openVerticalBox("simplerSynth");
		ui_interface->addHorizontalSlider("freq", &fHslider0, FAUSTFLOAT(2e+02f), FAUSTFLOAT(5e+01f), FAUSTFLOAT(1e+03f), FAUSTFLOAT(0.01f));
		ui_interface->addHorizontalSlider("gain", &fHslider1, FAUSTFLOAT(0.5f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.01f));
		ui_interface->closeBox();
	}
	
	virtual void compute(int count, FAUSTFLOAT** RESTRICT inputs, FAUSTFLOAT** RESTRICT outputs) {
		FAUSTFLOAT* output0 = outputs[0];
		float fSlow0 = std::max<float>(1.1920929e-07f, std::fabs(float(fHslider0)));
		float fSlow1 = fConst1 * fSlow0;
		float fSlow2 = 1.0f - fConst0 / fSlow0;
		float fSlow3 = float(fHslider1);
		for (int i0 = 0; i0 < count; i0 = i0 + 1) {
			float fTemp0 = fSlow1 + fRec0[1] + -1.0f;
			int iTemp1 = fTemp0 < 0.0f;
			float fTemp2 = fSlow1 + fRec0[1];
			fRec0[0] = ((iTemp1) ? fTemp2 : fTemp0);
			float fRec1 = ((iTemp1) ? fTemp2 : fSlow1 + fRec0[1] + fSlow2 * fTemp0);
			output0[i0] = FAUSTFLOAT(fSlow3 * (2.0f * fRec1 + -1.0f));
			fRec0[1] = fRec0[0];
		}
	}

};

#endif
