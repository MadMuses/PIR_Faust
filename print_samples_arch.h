#include <iostream>
#include <cstdlib>

#ifndef print_samples_arch_h
#define print_samples_arch_h
#endif

// Include the Faust DSP (and other) classes
#include "./faust/dsp/dsp.h"
#include "./faust/gui/UI.h"
#include "./faust/gui/UI.h"
#include "./faust/audio/dummy-audio.h"

// PrintSamplesAdapter class
class PrintSamplesAdapter : public dsp 
{
    public:
        dsp* fDSP;

        PrintSamplesAdapter(dsp* dsp) : fDSP(dsp) {}
        virtual dsp* clone() { return new PrintSamplesAdapter(fDSP->clone()); }

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

        // Redefine compute
        void compute(int count, FAUSTFLOAT** inputs, FAUSTFLOAT** outputs){
            fDSP->compute(count, inputs, outputs);
            for (int i = 0; i < count; ++i) {
                for (int j = 0; j < getNumOutputs(); ++j) 
                {
                std::cout << "Sample[" << i << "][" << j << "]: " << outputs[j][i] << std::endl;
                }
            }
        };
        
};
