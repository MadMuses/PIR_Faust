#include <iostream>
#include <cstdlib>

// Include the Faust DSP class
#include "faust/dsp/dsp.h"
#include "faust/gui/UI.h"

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
};

// Define the main audio function
extern "C" {
    dsp* createDSPInstance() {
        return new PrintSamplesAdapter(new mydsp()); // Replace 'mydsp' with your actual DSP class name
    }
}
