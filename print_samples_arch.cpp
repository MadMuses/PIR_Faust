#include <iostream>
#include <cstdlib>
#include "print_samples_arch.h"
#include "faust/misc.h"

/******************************************************************************
 *******************************************************************************
 
 VECTOR INTRINSICS
 
 *******************************************************************************
 *******************************************************************************/

<<includeIntrinsic>>

/********************END ARCHITECTURE SECTION (part 1/2)****************/

/**************************BEGIN USER SECTION **************************/

<<includeclass>>

/***************************END USER SECTION ***************************/

/*******************BEGIN ARCHITECTURE SECTION (part 2/2)***************/

/**************************BEGIN MAIN SECTION **************************/

int main() {
    auto* fDSP = new mydsp();
    auto* dsp = new PrintSamplesAdapter(fDSP);
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

/***************************END MAIN SECTION ***************************/
