#include <iostream>
#include <cstdlib>

// Include the Faust DSP class
#include "./faust/dsp/dsp.h"
#include "./faust/gui/UI.h"
#include "./faust/gui/UI.h"
#include "./faust/audio/dummy-audio.h"

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

    //void PrintSamplesAdapter :: audioDummySetup

    // Allocate the audio driver
    // fAudio = std::make_unique<dummyaudio>(48000, 1);
    // fAudio->init("Dummy audio", fDSP);

};


/*
// Define the main audio function
extern "C" {
    dsp* createDSPInstance() {
        return new PrintSamplesAdapter(new mydsp()); // Replace 'mydsp' with your actual DSP class name
    }
}
*/