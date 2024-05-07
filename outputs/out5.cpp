/* ------------------------------------------------------------
name: "exemple"
Code generated with Faust 2.72.16 (https://faust.grame.fr)
Compilation options: -a print_samples_arch.cpp -lang cpp -ct 1 -es 1 -mcd 16 -mdd 1024 -mdy 33 -single -ftz 0
------------------------------------------------------------ */

#ifndef  __mydsp_H__
#define  __mydsp_H__

#include <iostream>
#include <cstdlib>
#include "print_samples_arch.h"
#include "faust/misc.h"


// Define a simple DSP Adapter that prints samples to stdout



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

static float mydsp_faustpower2_f(float value) {
	return value * value;
}

class mydsp : public dsp {
	
 private:
	
	int fSampleRate;
	float fConst0;
	float fConst1;
	float fConst2;
	int iVec0[2];
	float fConst3;
	int iRec2[2];
	int iVec1[2];
	int iRec1[2];
	float fConst4;
	float fConst5;
	float fConst6;
	float fConst7;
	float fConst8;
	float fConst9;
	float fConst10;
	float fConst11;
	float fConst12;
	float fConst13;
	float fConst14;
	float fConst15;
	float fConst16;
	int iRec5[2];
	float fRec4[3];
	float fConst17;
	float fRec3[3];
	float fRec0[3];
	float fConst18;
	float fConst19;
	float fConst20;
	float fRec6[3];
	float fConst21;
	float fConst22;
	float fConst23;
	float fRec7[3];
	float fConst24;
	float fConst25;
	float fConst26;
	float fRec8[3];
	float fConst27;
	float fConst28;
	float fConst29;
	float fRec9[3];
	float fConst30;
	float fConst31;
	float fConst32;
	float fRec10[3];
	float fConst33;
	float fConst34;
	float fConst35;
	float fRec11[3];
	float fConst36;
	float fConst37;
	float fConst38;
	float fRec12[3];
	float fConst39;
	float fConst40;
	float fConst41;
	float fRec13[3];
	float fConst42;
	float fConst43;
	float fConst44;
	float fRec14[3];
	float fConst45;
	float fConst46;
	float fConst47;
	float fRec15[3];
	float fConst48;
	float fConst49;
	float fConst50;
	float fRec16[3];
	float fConst51;
	float fConst52;
	float fConst53;
	float fRec17[3];
	float fConst54;
	float fConst55;
	float fConst56;
	float fRec18[3];
	float fConst57;
	float fConst58;
	float fConst59;
	float fRec19[3];
	float fConst60;
	float fConst61;
	float fConst62;
	float fRec20[3];
	float fConst63;
	float fConst64;
	float fConst65;
	float fRec21[3];
	float fConst66;
	float fConst67;
	float fConst68;
	float fRec22[3];
	float fConst69;
	float fConst70;
	float fConst71;
	float fRec23[3];
	float fConst72;
	float fConst73;
	float fConst74;
	float fRec24[3];
	FAUSTFLOAT fVslider0;
	FAUSTFLOAT fVslider1;
	float fConst75;
	float fRec34[2];
	FAUSTFLOAT fVslider2;
	float fConst76;
	int IOTA0;
	float fVec2[8192];
	int iConst77;
	float fRec33[2];
	float fRec36[2];
	float fVec3[8192];
	int iConst78;
	float fRec35[2];
	float fRec38[2];
	float fVec4[8192];
	int iConst79;
	float fRec37[2];
	float fRec40[2];
	float fVec5[8192];
	int iConst80;
	float fRec39[2];
	float fRec42[2];
	float fVec6[8192];
	int iConst81;
	float fRec41[2];
	float fRec44[2];
	float fVec7[8192];
	int iConst82;
	float fRec43[2];
	float fRec46[2];
	float fVec8[8192];
	int iConst83;
	float fRec45[2];
	float fRec48[2];
	float fVec9[8192];
	int iConst84;
	float fRec47[2];
	float fVec10[2048];
	int iConst85;
	int iConst86;
	float fRec31[2];
	float fVec11[2048];
	int iConst87;
	int iConst88;
	float fRec29[2];
	float fVec12[2048];
	int iConst89;
	int iConst90;
	float fRec27[2];
	float fVec13[1024];
	int iConst91;
	int iConst92;
	float fRec25[2];
	float fRec58[2];
	float fVec14[8192];
	FAUSTFLOAT fVslider3;
	float fConst93;
	float fRec57[2];
	float fRec60[2];
	float fVec15[8192];
	float fRec59[2];
	float fRec62[2];
	float fVec16[8192];
	float fRec61[2];
	float fRec64[2];
	float fVec17[8192];
	float fRec63[2];
	float fRec66[2];
	float fVec18[8192];
	float fRec65[2];
	float fRec68[2];
	float fVec19[8192];
	float fRec67[2];
	float fRec70[2];
	float fVec20[8192];
	float fRec69[2];
	float fRec72[2];
	float fVec21[8192];
	float fRec71[2];
	float fVec22[2048];
	float fRec55[2];
	float fVec23[2048];
	float fRec53[2];
	float fVec24[2048];
	float fRec51[2];
	float fVec25[2048];
	float fRec49[2];
	
 public:
	mydsp() {}

	void metadata(Meta* m) { 
		m->declare("basics.lib/name", "Faust Basic Element Library");
		m->declare("basics.lib/tabulateNd", "Copyright (C) 2023 Bart Brouns <bart@magnetophon.nl>");
		m->declare("basics.lib/version", "1.15.0");
		m->declare("compile_options", "-a print_samples_arch.cpp -lang cpp -ct 1 -es 1 -mcd 16 -mdd 1024 -mdy 33 -single -ftz 0");
		m->declare("delays.lib/name", "Faust Delay Library");
		m->declare("delays.lib/version", "1.1.0");
		m->declare("demos.lib/freeverb_demo:author", " Romain Michon");
		m->declare("demos.lib/freeverb_demo:licence", "LGPL");
		m->declare("demos.lib/name", "Faust Demos Library");
		m->declare("demos.lib/version", "1.1.1");
		m->declare("envelopes.lib/ar:author", "Yann Orlarey, Stéphane Letz");
		m->declare("envelopes.lib/author", "GRAME");
		m->declare("envelopes.lib/copyright", "GRAME");
		m->declare("envelopes.lib/license", "LGPL with exception");
		m->declare("envelopes.lib/name", "Faust Envelope Library");
		m->declare("envelopes.lib/version", "1.3.0");
		m->declare("filename", "exemple.dsp");
		m->declare("filters.lib/allpass_comb:author", "Julius O. Smith III");
		m->declare("filters.lib/allpass_comb:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/allpass_comb:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/fir:author", "Julius O. Smith III");
		m->declare("filters.lib/fir:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/fir:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/highpass:author", "Julius O. Smith III");
		m->declare("filters.lib/highpass:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/iir:author", "Julius O. Smith III");
		m->declare("filters.lib/iir:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/iir:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/lowpass0_highpass1", "MIT-style STK-4.3 license");
		m->declare("filters.lib/lowpass0_highpass1:author", "Julius O. Smith III");
		m->declare("filters.lib/lowpass:author", "Julius O. Smith III");
		m->declare("filters.lib/lowpass:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/lowpass:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/name", "Faust Filters Library");
		m->declare("filters.lib/tf2:author", "Julius O. Smith III");
		m->declare("filters.lib/tf2:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/tf2:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/tf2s:author", "Julius O. Smith III");
		m->declare("filters.lib/tf2s:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/tf2s:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/version", "1.3.0");
		m->declare("maths.lib/author", "GRAME");
		m->declare("maths.lib/copyright", "GRAME");
		m->declare("maths.lib/license", "LGPL with exception");
		m->declare("maths.lib/name", "Faust Math Library");
		m->declare("maths.lib/version", "2.8.0");
		m->declare("name", "exemple");
		m->declare("noises.lib/name", "Faust Noise Generator Library");
		m->declare("noises.lib/version", "1.4.1");
		m->declare("physmodels.lib/name", "Faust Physical Models Library");
		m->declare("physmodels.lib/version", "1.1.0");
		m->declare("platform.lib/name", "Generic Platform Library");
		m->declare("platform.lib/version", "1.3.0");
		m->declare("reverbs.lib/mono_freeverb:author", "Romain Michon");
		m->declare("reverbs.lib/name", "Faust Reverb Library");
		m->declare("reverbs.lib/stereo_freeverb:author", "Romain Michon");
		m->declare("reverbs.lib/version", "1.2.1");
	}

	virtual int getNumInputs() {
		return 0;
	}
	virtual int getNumOutputs() {
		return 2;
	}
	
	static void classInit(int sample_rate) {
	}
	
	virtual void instanceConstants(int sample_rate) {
		fSampleRate = sample_rate;
		fConst0 = std::min<float>(1.92e+05f, std::max<float>(1.0f, float(fSampleRate)));
		fConst1 = std::pow(0.001f, 1.6666666f / fConst0);
		fConst2 = mydsp_faustpower2_f(fConst1);
		fConst3 = 2.0f * std::cos(376.99112f / fConst0) * fConst1;
		fConst4 = 1.0f / std::max<float>(1.0f, 0.0008f * fConst0);
		fConst5 = std::tan(15707.963f / fConst0);
		fConst6 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst5));
		fConst7 = 1.0f / fConst5;
		fConst8 = (fConst7 + -1.4142135f) / fConst5 + 1.0f;
		fConst9 = 1.0f / ((fConst7 + 1.4142135f) / fConst5 + 1.0f);
		fConst10 = std::tan(596.9026f / fConst0);
		fConst11 = mydsp_faustpower2_f(fConst10);
		fConst12 = 2.0f * (1.0f - 1.0f / fConst11);
		fConst13 = 1.0f / fConst10;
		fConst14 = (fConst13 + -1.4142135f) / fConst10 + 1.0f;
		fConst15 = (fConst13 + 1.4142135f) / fConst10 + 1.0f;
		fConst16 = 1.0f / fConst15;
		fConst17 = 1.0f / (fConst11 * fConst15);
		fConst18 = std::pow(0.001f, 33.333332f / fConst0);
		fConst19 = mydsp_faustpower2_f(fConst18);
		fConst20 = 2.0f * std::cos(24253.096f / fConst0) * fConst18;
		fConst21 = std::pow(0.001f, 16.666666f / fConst0);
		fConst22 = mydsp_faustpower2_f(fConst21);
		fConst23 = 2.0f * std::cos(22996.459f / fConst0) * fConst21;
		fConst24 = std::pow(0.001f, 11.111111f / fConst0);
		fConst25 = mydsp_faustpower2_f(fConst24);
		fConst26 = 2.0f * std::cos(21739.82f / fConst0) * fConst24;
		fConst27 = std::pow(0.001f, 8.333333f / fConst0);
		fConst28 = mydsp_faustpower2_f(fConst27);
		fConst29 = 2.0f * std::cos(20483.184f / fConst0) * fConst27;
		fConst30 = std::pow(0.001f, 6.6666665f / fConst0);
		fConst31 = mydsp_faustpower2_f(fConst30);
		fConst32 = 2.0f * std::cos(19226.547f / fConst0) * fConst30;
		fConst33 = std::pow(0.001f, 5.5555553f / fConst0);
		fConst34 = mydsp_faustpower2_f(fConst33);
		fConst35 = 2.0f * std::cos(17969.91f / fConst0) * fConst33;
		fConst36 = std::pow(0.001f, 4.7619047f / fConst0);
		fConst37 = mydsp_faustpower2_f(fConst36);
		fConst38 = 2.0f * std::cos(16713.273f / fConst0) * fConst36;
		fConst39 = std::pow(0.001f, 4.1666665f / fConst0);
		fConst40 = mydsp_faustpower2_f(fConst39);
		fConst41 = 2.0f * std::cos(15456.636f / fConst0) * fConst39;
		fConst42 = std::pow(0.001f, 3.7037036f / fConst0);
		fConst43 = mydsp_faustpower2_f(fConst42);
		fConst44 = 2.0f * std::cos(14199.999f / fConst0) * fConst42;
		fConst45 = std::pow(0.001f, 3.3333333f / fConst0);
		fConst46 = mydsp_faustpower2_f(fConst45);
		fConst47 = 2.0f * std::cos(12943.361f / fConst0) * fConst45;
		fConst48 = std::pow(0.001f, 3.030303f / fConst0);
		fConst49 = mydsp_faustpower2_f(fConst48);
		fConst50 = 2.0f * std::cos(11686.725f / fConst0) * fConst48;
		fConst51 = std::pow(0.001f, 2.7777777f / fConst0);
		fConst52 = mydsp_faustpower2_f(fConst51);
		fConst53 = 2.0f * std::cos(10430.088f / fConst0) * fConst51;
		fConst54 = std::pow(0.001f, 2.5641026f / fConst0);
		fConst55 = mydsp_faustpower2_f(fConst54);
		fConst56 = 2.0f * std::cos(9173.45f / fConst0) * fConst54;
		fConst57 = std::pow(0.001f, 2.3809524f / fConst0);
		fConst58 = mydsp_faustpower2_f(fConst57);
		fConst59 = 2.0f * std::cos(7916.8135f / fConst0) * fConst57;
		fConst60 = std::pow(0.001f, 2.2222223f / fConst0);
		fConst61 = mydsp_faustpower2_f(fConst60);
		fConst62 = 2.0f * std::cos(6660.1763f / fConst0) * fConst60;
		fConst63 = std::pow(0.001f, 2.0833333f / fConst0);
		fConst64 = mydsp_faustpower2_f(fConst63);
		fConst65 = 2.0f * std::cos(5403.5396f / fConst0) * fConst63;
		fConst66 = std::pow(0.001f, 1.9607843f / fConst0);
		fConst67 = mydsp_faustpower2_f(fConst66);
		fConst68 = 2.0f * std::cos(4146.9023f / fConst0) * fConst66;
		fConst69 = std::pow(0.001f, 1.8518518f / fConst0);
		fConst70 = mydsp_faustpower2_f(fConst69);
		fConst71 = 2.0f * std::cos(2890.2651f / fConst0) * fConst69;
		fConst72 = std::pow(0.001f, 1.754386f / fConst0);
		fConst73 = mydsp_faustpower2_f(fConst72);
		fConst74 = 2.0f * std::cos(1633.6282f / fConst0) * fConst72;
		fConst75 = 1.764e+04f / fConst0;
		fConst76 = 12348.0f / fConst0;
		iConst77 = int(0.036666665f * fConst0);
		iConst78 = int(0.035306122f * fConst0);
		iConst79 = int(0.033809524f * fConst0);
		iConst80 = int(0.0322449f * fConst0);
		iConst81 = int(0.030748298f * fConst0);
		iConst82 = int(0.028956916f * fConst0);
		iConst83 = int(0.026938776f * fConst0);
		iConst84 = int(0.025306122f * fConst0);
		iConst85 = int(0.0126077095f * fConst0);
		iConst86 = std::min<int>(1024, std::max<int>(0, iConst85 + -1));
		iConst87 = int(0.01f * fConst0);
		iConst88 = std::min<int>(1024, std::max<int>(0, iConst87 + -1));
		iConst89 = int(0.0077324263f * fConst0);
		iConst90 = std::min<int>(1024, std::max<int>(0, iConst89 + -1));
		iConst91 = int(0.0051020407f * fConst0);
		iConst92 = std::min<int>(1024, std::max<int>(0, iConst91 + -1));
		fConst93 = 0.0010430838f * fConst0;
	}
	
	virtual void instanceResetUserInterface() {
		fVslider0 = FAUSTFLOAT(0.3333f);
		fVslider1 = FAUSTFLOAT(0.5f);
		fVslider2 = FAUSTFLOAT(0.5f);
		fVslider3 = FAUSTFLOAT(0.5f);
	}
	
	virtual void instanceClear() {
		for (int l0 = 0; l0 < 2; l0 = l0 + 1) {
			iVec0[l0] = 0;
		}
		for (int l1 = 0; l1 < 2; l1 = l1 + 1) {
			iRec2[l1] = 0;
		}
		for (int l2 = 0; l2 < 2; l2 = l2 + 1) {
			iVec1[l2] = 0;
		}
		for (int l3 = 0; l3 < 2; l3 = l3 + 1) {
			iRec1[l3] = 0;
		}
		for (int l4 = 0; l4 < 2; l4 = l4 + 1) {
			iRec5[l4] = 0;
		}
		for (int l5 = 0; l5 < 3; l5 = l5 + 1) {
			fRec4[l5] = 0.0f;
		}
		for (int l6 = 0; l6 < 3; l6 = l6 + 1) {
			fRec3[l6] = 0.0f;
		}
		for (int l7 = 0; l7 < 3; l7 = l7 + 1) {
			fRec0[l7] = 0.0f;
		}
		for (int l8 = 0; l8 < 3; l8 = l8 + 1) {
			fRec6[l8] = 0.0f;
		}
		for (int l9 = 0; l9 < 3; l9 = l9 + 1) {
			fRec7[l9] = 0.0f;
		}
		for (int l10 = 0; l10 < 3; l10 = l10 + 1) {
			fRec8[l10] = 0.0f;
		}
		for (int l11 = 0; l11 < 3; l11 = l11 + 1) {
			fRec9[l11] = 0.0f;
		}
		for (int l12 = 0; l12 < 3; l12 = l12 + 1) {
			fRec10[l12] = 0.0f;
		}
		for (int l13 = 0; l13 < 3; l13 = l13 + 1) {
			fRec11[l13] = 0.0f;
		}
		for (int l14 = 0; l14 < 3; l14 = l14 + 1) {
			fRec12[l14] = 0.0f;
		}
		for (int l15 = 0; l15 < 3; l15 = l15 + 1) {
			fRec13[l15] = 0.0f;
		}
		for (int l16 = 0; l16 < 3; l16 = l16 + 1) {
			fRec14[l16] = 0.0f;
		}
		for (int l17 = 0; l17 < 3; l17 = l17 + 1) {
			fRec15[l17] = 0.0f;
		}
		for (int l18 = 0; l18 < 3; l18 = l18 + 1) {
			fRec16[l18] = 0.0f;
		}
		for (int l19 = 0; l19 < 3; l19 = l19 + 1) {
			fRec17[l19] = 0.0f;
		}
		for (int l20 = 0; l20 < 3; l20 = l20 + 1) {
			fRec18[l20] = 0.0f;
		}
		for (int l21 = 0; l21 < 3; l21 = l21 + 1) {
			fRec19[l21] = 0.0f;
		}
		for (int l22 = 0; l22 < 3; l22 = l22 + 1) {
			fRec20[l22] = 0.0f;
		}
		for (int l23 = 0; l23 < 3; l23 = l23 + 1) {
			fRec21[l23] = 0.0f;
		}
		for (int l24 = 0; l24 < 3; l24 = l24 + 1) {
			fRec22[l24] = 0.0f;
		}
		for (int l25 = 0; l25 < 3; l25 = l25 + 1) {
			fRec23[l25] = 0.0f;
		}
		for (int l26 = 0; l26 < 3; l26 = l26 + 1) {
			fRec24[l26] = 0.0f;
		}
		for (int l27 = 0; l27 < 2; l27 = l27 + 1) {
			fRec34[l27] = 0.0f;
		}
		IOTA0 = 0;
		for (int l28 = 0; l28 < 8192; l28 = l28 + 1) {
			fVec2[l28] = 0.0f;
		}
		for (int l29 = 0; l29 < 2; l29 = l29 + 1) {
			fRec33[l29] = 0.0f;
		}
		for (int l30 = 0; l30 < 2; l30 = l30 + 1) {
			fRec36[l30] = 0.0f;
		}
		for (int l31 = 0; l31 < 8192; l31 = l31 + 1) {
			fVec3[l31] = 0.0f;
		}
		for (int l32 = 0; l32 < 2; l32 = l32 + 1) {
			fRec35[l32] = 0.0f;
		}
		for (int l33 = 0; l33 < 2; l33 = l33 + 1) {
			fRec38[l33] = 0.0f;
		}
		for (int l34 = 0; l34 < 8192; l34 = l34 + 1) {
			fVec4[l34] = 0.0f;
		}
		for (int l35 = 0; l35 < 2; l35 = l35 + 1) {
			fRec37[l35] = 0.0f;
		}
		for (int l36 = 0; l36 < 2; l36 = l36 + 1) {
			fRec40[l36] = 0.0f;
		}
		for (int l37 = 0; l37 < 8192; l37 = l37 + 1) {
			fVec5[l37] = 0.0f;
		}
		for (int l38 = 0; l38 < 2; l38 = l38 + 1) {
			fRec39[l38] = 0.0f;
		}
		for (int l39 = 0; l39 < 2; l39 = l39 + 1) {
			fRec42[l39] = 0.0f;
		}
		for (int l40 = 0; l40 < 8192; l40 = l40 + 1) {
			fVec6[l40] = 0.0f;
		}
		for (int l41 = 0; l41 < 2; l41 = l41 + 1) {
			fRec41[l41] = 0.0f;
		}
		for (int l42 = 0; l42 < 2; l42 = l42 + 1) {
			fRec44[l42] = 0.0f;
		}
		for (int l43 = 0; l43 < 8192; l43 = l43 + 1) {
			fVec7[l43] = 0.0f;
		}
		for (int l44 = 0; l44 < 2; l44 = l44 + 1) {
			fRec43[l44] = 0.0f;
		}
		for (int l45 = 0; l45 < 2; l45 = l45 + 1) {
			fRec46[l45] = 0.0f;
		}
		for (int l46 = 0; l46 < 8192; l46 = l46 + 1) {
			fVec8[l46] = 0.0f;
		}
		for (int l47 = 0; l47 < 2; l47 = l47 + 1) {
			fRec45[l47] = 0.0f;
		}
		for (int l48 = 0; l48 < 2; l48 = l48 + 1) {
			fRec48[l48] = 0.0f;
		}
		for (int l49 = 0; l49 < 8192; l49 = l49 + 1) {
			fVec9[l49] = 0.0f;
		}
		for (int l50 = 0; l50 < 2; l50 = l50 + 1) {
			fRec47[l50] = 0.0f;
		}
		for (int l51 = 0; l51 < 2048; l51 = l51 + 1) {
			fVec10[l51] = 0.0f;
		}
		for (int l52 = 0; l52 < 2; l52 = l52 + 1) {
			fRec31[l52] = 0.0f;
		}
		for (int l53 = 0; l53 < 2048; l53 = l53 + 1) {
			fVec11[l53] = 0.0f;
		}
		for (int l54 = 0; l54 < 2; l54 = l54 + 1) {
			fRec29[l54] = 0.0f;
		}
		for (int l55 = 0; l55 < 2048; l55 = l55 + 1) {
			fVec12[l55] = 0.0f;
		}
		for (int l56 = 0; l56 < 2; l56 = l56 + 1) {
			fRec27[l56] = 0.0f;
		}
		for (int l57 = 0; l57 < 1024; l57 = l57 + 1) {
			fVec13[l57] = 0.0f;
		}
		for (int l58 = 0; l58 < 2; l58 = l58 + 1) {
			fRec25[l58] = 0.0f;
		}
		for (int l59 = 0; l59 < 2; l59 = l59 + 1) {
			fRec58[l59] = 0.0f;
		}
		for (int l60 = 0; l60 < 8192; l60 = l60 + 1) {
			fVec14[l60] = 0.0f;
		}
		for (int l61 = 0; l61 < 2; l61 = l61 + 1) {
			fRec57[l61] = 0.0f;
		}
		for (int l62 = 0; l62 < 2; l62 = l62 + 1) {
			fRec60[l62] = 0.0f;
		}
		for (int l63 = 0; l63 < 8192; l63 = l63 + 1) {
			fVec15[l63] = 0.0f;
		}
		for (int l64 = 0; l64 < 2; l64 = l64 + 1) {
			fRec59[l64] = 0.0f;
		}
		for (int l65 = 0; l65 < 2; l65 = l65 + 1) {
			fRec62[l65] = 0.0f;
		}
		for (int l66 = 0; l66 < 8192; l66 = l66 + 1) {
			fVec16[l66] = 0.0f;
		}
		for (int l67 = 0; l67 < 2; l67 = l67 + 1) {
			fRec61[l67] = 0.0f;
		}
		for (int l68 = 0; l68 < 2; l68 = l68 + 1) {
			fRec64[l68] = 0.0f;
		}
		for (int l69 = 0; l69 < 8192; l69 = l69 + 1) {
			fVec17[l69] = 0.0f;
		}
		for (int l70 = 0; l70 < 2; l70 = l70 + 1) {
			fRec63[l70] = 0.0f;
		}
		for (int l71 = 0; l71 < 2; l71 = l71 + 1) {
			fRec66[l71] = 0.0f;
		}
		for (int l72 = 0; l72 < 8192; l72 = l72 + 1) {
			fVec18[l72] = 0.0f;
		}
		for (int l73 = 0; l73 < 2; l73 = l73 + 1) {
			fRec65[l73] = 0.0f;
		}
		for (int l74 = 0; l74 < 2; l74 = l74 + 1) {
			fRec68[l74] = 0.0f;
		}
		for (int l75 = 0; l75 < 8192; l75 = l75 + 1) {
			fVec19[l75] = 0.0f;
		}
		for (int l76 = 0; l76 < 2; l76 = l76 + 1) {
			fRec67[l76] = 0.0f;
		}
		for (int l77 = 0; l77 < 2; l77 = l77 + 1) {
			fRec70[l77] = 0.0f;
		}
		for (int l78 = 0; l78 < 8192; l78 = l78 + 1) {
			fVec20[l78] = 0.0f;
		}
		for (int l79 = 0; l79 < 2; l79 = l79 + 1) {
			fRec69[l79] = 0.0f;
		}
		for (int l80 = 0; l80 < 2; l80 = l80 + 1) {
			fRec72[l80] = 0.0f;
		}
		for (int l81 = 0; l81 < 8192; l81 = l81 + 1) {
			fVec21[l81] = 0.0f;
		}
		for (int l82 = 0; l82 < 2; l82 = l82 + 1) {
			fRec71[l82] = 0.0f;
		}
		for (int l83 = 0; l83 < 2048; l83 = l83 + 1) {
			fVec22[l83] = 0.0f;
		}
		for (int l84 = 0; l84 < 2; l84 = l84 + 1) {
			fRec55[l84] = 0.0f;
		}
		for (int l85 = 0; l85 < 2048; l85 = l85 + 1) {
			fVec23[l85] = 0.0f;
		}
		for (int l86 = 0; l86 < 2; l86 = l86 + 1) {
			fRec53[l86] = 0.0f;
		}
		for (int l87 = 0; l87 < 2048; l87 = l87 + 1) {
			fVec24[l87] = 0.0f;
		}
		for (int l88 = 0; l88 < 2; l88 = l88 + 1) {
			fRec51[l88] = 0.0f;
		}
		for (int l89 = 0; l89 < 2048; l89 = l89 + 1) {
			fVec25[l89] = 0.0f;
		}
		for (int l90 = 0; l90 < 2; l90 = l90 + 1) {
			fRec49[l90] = 0.0f;
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
		ui_interface->openHorizontalBox("Freeverb");
		ui_interface->declare(0, "0", "");
		ui_interface->openVerticalBox("0x00");
		ui_interface->declare(&fVslider1, "0", "");
		ui_interface->declare(&fVslider1, "style", "knob");
		ui_interface->declare(&fVslider1, "tooltip", "Somehow control the         density of the reverb.");
		ui_interface->addVerticalSlider("Damp", &fVslider1, FAUSTFLOAT(0.5f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.025f));
		ui_interface->declare(&fVslider2, "1", "");
		ui_interface->declare(&fVslider2, "style", "knob");
		ui_interface->declare(&fVslider2, "tooltip", "The room size         between 0 and 1 with 1 for the largest room.");
		ui_interface->addVerticalSlider("RoomSize", &fVslider2, FAUSTFLOAT(0.5f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.025f));
		ui_interface->declare(&fVslider3, "2", "");
		ui_interface->declare(&fVslider3, "style", "knob");
		ui_interface->declare(&fVslider3, "tooltip", "Spatial         spread between 0 and 1 with 1 for maximum spread.");
		ui_interface->addVerticalSlider("Stereo Spread", &fVslider3, FAUSTFLOAT(0.5f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.01f));
		ui_interface->closeBox();
		ui_interface->declare(&fVslider0, "1", "");
		ui_interface->declare(&fVslider0, "tooltip", "The amount of reverb applied to the signal         between 0 and 1 with 1 for the maximum amount of reverb.");
		ui_interface->addVerticalSlider("Wet", &fVslider0, FAUSTFLOAT(0.3333f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.025f));
		ui_interface->closeBox();
	}
	
	virtual void compute(int count, FAUSTFLOAT** RESTRICT inputs, FAUSTFLOAT** RESTRICT outputs) {
		FAUSTFLOAT* output0 = outputs[0];
		FAUSTFLOAT* output1 = outputs[1];
		float fSlow0 = float(fVslider0);
		float fSlow1 = 0.05f * (1.0f - fSlow0);
		float fSlow2 = fConst75 * float(fVslider1);
		float fSlow3 = 1.0f - fSlow2;
		float fSlow4 = fConst76 * float(fVslider2) + 0.7f;
		float fSlow5 = 0.01f * fSlow0;
		int iSlow6 = int(fConst93 * float(fVslider3));
		int iSlow7 = iConst77 + iSlow6;
		int iSlow8 = iConst78 + iSlow6;
		int iSlow9 = iConst79 + iSlow6;
		int iSlow10 = iConst80 + iSlow6;
		int iSlow11 = iConst81 + iSlow6;
		int iSlow12 = iConst82 + iSlow6;
		int iSlow13 = iConst83 + iSlow6;
		int iSlow14 = iConst84 + iSlow6;
		int iSlow15 = iSlow6 + -1;
		int iSlow16 = std::min<int>(1024, std::max<int>(0, iConst85 + iSlow15));
		int iSlow17 = std::min<int>(1024, std::max<int>(0, iConst87 + iSlow15));
		int iSlow18 = std::min<int>(1024, std::max<int>(0, iConst89 + iSlow15));
		int iSlow19 = std::min<int>(1024, std::max<int>(0, iConst91 + iSlow15));
		for (int i0 = 0; i0 < count; i0 = i0 + 1) {
			iVec0[0] = 1;
			iRec2[0] = (iVec0[1] + iRec2[1]) % 10000;
			int iTemp0 = iRec2[0] < 1;
			iVec1[0] = iTemp0;
			iRec1[0] = (iRec1[1] + (iRec1[1] > 0)) * (iTemp0 <= iVec1[1]) + (iTemp0 > iVec1[1]);
			float fTemp1 = fConst4 * float(iRec1[0]);
			iRec5[0] = 1103515245 * iRec5[1] + 12345;
			fRec4[0] = 4.656613e-10f * float(iRec5[0]) - fConst16 * (fConst14 * fRec4[2] + fConst12 * fRec4[1]);
			fRec3[0] = fConst17 * (fRec4[2] + (fRec4[0] - 2.0f * fRec4[1])) - fConst9 * (fConst8 * fRec3[2] + fConst6 * fRec3[1]);
			float fTemp2 = fConst9 * (fRec3[2] + fRec3[0] + 2.0f * fRec3[1]) * std::max<float>(0.0f, std::min<float>(fTemp1, 2.0f - fTemp1));
			fRec0[0] = fTemp2 + fConst3 * fRec0[1] - fConst2 * fRec0[2];
			fRec6[0] = fTemp2 + fConst20 * fRec6[1] - fConst19 * fRec6[2];
			fRec7[0] = fTemp2 + fConst23 * fRec7[1] - fConst22 * fRec7[2];
			fRec8[0] = fTemp2 + fConst26 * fRec8[1] - fConst25 * fRec8[2];
			fRec9[0] = fTemp2 + fConst29 * fRec9[1] - fConst28 * fRec9[2];
			fRec10[0] = fTemp2 + fConst32 * fRec10[1] - fConst31 * fRec10[2];
			fRec11[0] = fTemp2 + fConst35 * fRec11[1] - fConst34 * fRec11[2];
			fRec12[0] = fTemp2 + fConst38 * fRec12[1] - fConst37 * fRec12[2];
			fRec13[0] = fTemp2 + fConst41 * fRec13[1] - fConst40 * fRec13[2];
			fRec14[0] = fTemp2 + fConst44 * fRec14[1] - fConst43 * fRec14[2];
			fRec15[0] = fTemp2 + fConst47 * fRec15[1] - fConst46 * fRec15[2];
			fRec16[0] = fTemp2 + fConst50 * fRec16[1] - fConst49 * fRec16[2];
			fRec17[0] = fTemp2 + fConst53 * fRec17[1] - fConst52 * fRec17[2];
			fRec18[0] = fTemp2 + fConst56 * fRec18[1] - fConst55 * fRec18[2];
			fRec19[0] = fTemp2 + fConst59 * fRec19[1] - fConst58 * fRec19[2];
			fRec20[0] = fTemp2 + fConst62 * fRec20[1] - fConst61 * fRec20[2];
			fRec21[0] = fTemp2 + fConst65 * fRec21[1] - fConst64 * fRec21[2];
			fRec22[0] = fTemp2 + fConst68 * fRec22[1] - fConst67 * fRec22[2];
			fRec23[0] = fTemp2 + fConst71 * fRec23[1] - fConst70 * fRec23[2];
			fRec24[0] = fTemp2 + fConst74 * fRec24[1] - fConst73 * fRec24[2];
			float fTemp3 = fRec0[0] + 0.25f * (fRec24[0] - fRec24[2]) + 0.11111111f * (fRec23[0] - fRec23[2]) + 0.0625f * (fRec22[0] - fRec22[2]) + 0.04f * (fRec21[0] - fRec21[2]) + 0.027777778f * (fRec20[0] - fRec20[2]) + 0.020408163f * (fRec19[0] - fRec19[2]) + 0.015625f * (fRec18[0] - fRec18[2]) + 0.012345679f * (fRec17[0] - fRec17[2]) + 0.01f * (fRec16[0] - fRec16[2]) + 0.008264462f * (fRec15[0] - fRec15[2]) + 0.0069444445f * (fRec14[0] - fRec14[2]) + 0.00591716f * (fRec13[0] - fRec13[2]) + 0.0051020407f * (fRec12[0] - fRec12[2]) + 0.0044444446f * (fRec11[0] - fRec11[2]) + 0.00390625f * (fRec10[0] - fRec10[2]) + 0.0034602077f * (fRec9[0] - fRec9[2]) + 0.0030864198f * (fRec8[0] - fRec8[2]) + 0.002770083f * (fRec7[0] - fRec7[2]) + 0.0025f * (fRec6[0] - fRec6[2]) - fRec0[2];
			float fTemp4 = fSlow1 * fTemp3;
			fRec34[0] = fSlow2 * fRec34[1] + fSlow3 * fRec33[1];
			float fTemp5 = fSlow5 * fTemp3;
			fVec2[IOTA0 & 8191] = fTemp5 + fSlow4 * fRec34[0];
			fRec33[0] = fVec2[(IOTA0 - iConst77) & 8191];
			fRec36[0] = fSlow2 * fRec36[1] + fSlow3 * fRec35[1];
			fVec3[IOTA0 & 8191] = fTemp5 + fSlow4 * fRec36[0];
			fRec35[0] = fVec3[(IOTA0 - iConst78) & 8191];
			fRec38[0] = fSlow2 * fRec38[1] + fSlow3 * fRec37[1];
			fVec4[IOTA0 & 8191] = fTemp5 + fSlow4 * fRec38[0];
			fRec37[0] = fVec4[(IOTA0 - iConst79) & 8191];
			fRec40[0] = fSlow2 * fRec40[1] + fSlow3 * fRec39[1];
			fVec5[IOTA0 & 8191] = fTemp5 + fSlow4 * fRec40[0];
			fRec39[0] = fVec5[(IOTA0 - iConst80) & 8191];
			fRec42[0] = fSlow2 * fRec42[1] + fSlow3 * fRec41[1];
			fVec6[IOTA0 & 8191] = fTemp5 + fSlow4 * fRec42[0];
			fRec41[0] = fVec6[(IOTA0 - iConst81) & 8191];
			fRec44[0] = fSlow2 * fRec44[1] + fSlow3 * fRec43[1];
			fVec7[IOTA0 & 8191] = fTemp5 + fSlow4 * fRec44[0];
			fRec43[0] = fVec7[(IOTA0 - iConst82) & 8191];
			fRec46[0] = fSlow2 * fRec46[1] + fSlow3 * fRec45[1];
			fVec8[IOTA0 & 8191] = fTemp5 + fSlow4 * fRec46[0];
			fRec45[0] = fVec8[(IOTA0 - iConst83) & 8191];
			fRec48[0] = fSlow2 * fRec48[1] + fSlow3 * fRec47[1];
			fVec9[IOTA0 & 8191] = fSlow4 * fRec48[0] + fTemp5;
			fRec47[0] = fVec9[(IOTA0 - iConst84) & 8191];
			float fTemp6 = fRec47[0] + fRec45[0] + fRec43[0] + fRec41[0] + fRec39[0] + fRec37[0] + fRec35[0] + fRec33[0] + 0.5f * fRec31[1];
			fVec10[IOTA0 & 2047] = fTemp6;
			fRec31[0] = fVec10[(IOTA0 - iConst86) & 2047];
			float fRec32 = -(0.5f * fTemp6);
			float fTemp7 = fRec31[1] + fRec32 + 0.5f * fRec29[1];
			fVec11[IOTA0 & 2047] = fTemp7;
			fRec29[0] = fVec11[(IOTA0 - iConst88) & 2047];
			float fRec30 = -(0.5f * fTemp7);
			float fTemp8 = fRec29[1] + fRec30 + 0.5f * fRec27[1];
			fVec12[IOTA0 & 2047] = fTemp8;
			fRec27[0] = fVec12[(IOTA0 - iConst90) & 2047];
			float fRec28 = -(0.5f * fTemp8);
			float fTemp9 = fRec27[1] + fRec28 + 0.5f * fRec25[1];
			fVec13[IOTA0 & 1023] = fTemp9;
			fRec25[0] = fVec13[(IOTA0 - iConst92) & 1023];
			float fRec26 = -(0.5f * fTemp9);
			output0[i0] = FAUSTFLOAT(fRec26 + fRec25[1] + fTemp4);
			fRec58[0] = fSlow2 * fRec58[1] + fSlow3 * fRec57[1];
			fVec14[IOTA0 & 8191] = fTemp5 + fSlow4 * fRec58[0];
			fRec57[0] = fVec14[(IOTA0 - iSlow7) & 8191];
			fRec60[0] = fSlow2 * fRec60[1] + fSlow3 * fRec59[1];
			fVec15[IOTA0 & 8191] = fTemp5 + fSlow4 * fRec60[0];
			fRec59[0] = fVec15[(IOTA0 - iSlow8) & 8191];
			fRec62[0] = fSlow2 * fRec62[1] + fSlow3 * fRec61[1];
			fVec16[IOTA0 & 8191] = fTemp5 + fSlow4 * fRec62[0];
			fRec61[0] = fVec16[(IOTA0 - iSlow9) & 8191];
			fRec64[0] = fSlow2 * fRec64[1] + fSlow3 * fRec63[1];
			fVec17[IOTA0 & 8191] = fTemp5 + fSlow4 * fRec64[0];
			fRec63[0] = fVec17[(IOTA0 - iSlow10) & 8191];
			fRec66[0] = fSlow2 * fRec66[1] + fSlow3 * fRec65[1];
			fVec18[IOTA0 & 8191] = fTemp5 + fSlow4 * fRec66[0];
			fRec65[0] = fVec18[(IOTA0 - iSlow11) & 8191];
			fRec68[0] = fSlow2 * fRec68[1] + fSlow3 * fRec67[1];
			fVec19[IOTA0 & 8191] = fTemp5 + fSlow4 * fRec68[0];
			fRec67[0] = fVec19[(IOTA0 - iSlow12) & 8191];
			fRec70[0] = fSlow2 * fRec70[1] + fSlow3 * fRec69[1];
			fVec20[IOTA0 & 8191] = fTemp5 + fSlow4 * fRec70[0];
			fRec69[0] = fVec20[(IOTA0 - iSlow13) & 8191];
			fRec72[0] = fSlow2 * fRec72[1] + fSlow3 * fRec71[1];
			fVec21[IOTA0 & 8191] = fTemp5 + fSlow4 * fRec72[0];
			fRec71[0] = fVec21[(IOTA0 - iSlow14) & 8191];
			float fTemp10 = fRec71[0] + fRec69[0] + fRec67[0] + fRec65[0] + fRec63[0] + fRec61[0] + fRec59[0] + fRec57[0] + 0.5f * fRec55[1];
			fVec22[IOTA0 & 2047] = fTemp10;
			fRec55[0] = fVec22[(IOTA0 - iSlow16) & 2047];
			float fRec56 = -(0.5f * fTemp10);
			float fTemp11 = fRec55[1] + fRec56 + 0.5f * fRec53[1];
			fVec23[IOTA0 & 2047] = fTemp11;
			fRec53[0] = fVec23[(IOTA0 - iSlow17) & 2047];
			float fRec54 = -(0.5f * fTemp11);
			float fTemp12 = fRec53[1] + fRec54 + 0.5f * fRec51[1];
			fVec24[IOTA0 & 2047] = fTemp12;
			fRec51[0] = fVec24[(IOTA0 - iSlow18) & 2047];
			float fRec52 = -(0.5f * fTemp12);
			float fTemp13 = fRec51[1] + fRec52 + 0.5f * fRec49[1];
			fVec25[IOTA0 & 2047] = fTemp13;
			fRec49[0] = fVec25[(IOTA0 - iSlow19) & 2047];
			float fRec50 = -(0.5f * fTemp13);
			output1[i0] = FAUSTFLOAT(fRec49[1] + fRec50 + fTemp4);
			iVec0[1] = iVec0[0];
			iRec2[1] = iRec2[0];
			iVec1[1] = iVec1[0];
			iRec1[1] = iRec1[0];
			iRec5[1] = iRec5[0];
			fRec4[2] = fRec4[1];
			fRec4[1] = fRec4[0];
			fRec3[2] = fRec3[1];
			fRec3[1] = fRec3[0];
			fRec0[2] = fRec0[1];
			fRec0[1] = fRec0[0];
			fRec6[2] = fRec6[1];
			fRec6[1] = fRec6[0];
			fRec7[2] = fRec7[1];
			fRec7[1] = fRec7[0];
			fRec8[2] = fRec8[1];
			fRec8[1] = fRec8[0];
			fRec9[2] = fRec9[1];
			fRec9[1] = fRec9[0];
			fRec10[2] = fRec10[1];
			fRec10[1] = fRec10[0];
			fRec11[2] = fRec11[1];
			fRec11[1] = fRec11[0];
			fRec12[2] = fRec12[1];
			fRec12[1] = fRec12[0];
			fRec13[2] = fRec13[1];
			fRec13[1] = fRec13[0];
			fRec14[2] = fRec14[1];
			fRec14[1] = fRec14[0];
			fRec15[2] = fRec15[1];
			fRec15[1] = fRec15[0];
			fRec16[2] = fRec16[1];
			fRec16[1] = fRec16[0];
			fRec17[2] = fRec17[1];
			fRec17[1] = fRec17[0];
			fRec18[2] = fRec18[1];
			fRec18[1] = fRec18[0];
			fRec19[2] = fRec19[1];
			fRec19[1] = fRec19[0];
			fRec20[2] = fRec20[1];
			fRec20[1] = fRec20[0];
			fRec21[2] = fRec21[1];
			fRec21[1] = fRec21[0];
			fRec22[2] = fRec22[1];
			fRec22[1] = fRec22[0];
			fRec23[2] = fRec23[1];
			fRec23[1] = fRec23[0];
			fRec24[2] = fRec24[1];
			fRec24[1] = fRec24[0];
			fRec34[1] = fRec34[0];
			IOTA0 = IOTA0 + 1;
			fRec33[1] = fRec33[0];
			fRec36[1] = fRec36[0];
			fRec35[1] = fRec35[0];
			fRec38[1] = fRec38[0];
			fRec37[1] = fRec37[0];
			fRec40[1] = fRec40[0];
			fRec39[1] = fRec39[0];
			fRec42[1] = fRec42[0];
			fRec41[1] = fRec41[0];
			fRec44[1] = fRec44[0];
			fRec43[1] = fRec43[0];
			fRec46[1] = fRec46[0];
			fRec45[1] = fRec45[0];
			fRec48[1] = fRec48[0];
			fRec47[1] = fRec47[0];
			fRec31[1] = fRec31[0];
			fRec29[1] = fRec29[0];
			fRec27[1] = fRec27[0];
			fRec25[1] = fRec25[0];
			fRec58[1] = fRec58[0];
			fRec57[1] = fRec57[0];
			fRec60[1] = fRec60[0];
			fRec59[1] = fRec59[0];
			fRec62[1] = fRec62[0];
			fRec61[1] = fRec61[0];
			fRec64[1] = fRec64[0];
			fRec63[1] = fRec63[0];
			fRec66[1] = fRec66[0];
			fRec65[1] = fRec65[0];
			fRec68[1] = fRec68[0];
			fRec67[1] = fRec67[0];
			fRec70[1] = fRec70[0];
			fRec69[1] = fRec69[0];
			fRec72[1] = fRec72[0];
			fRec71[1] = fRec71[0];
			fRec55[1] = fRec55[0];
			fRec53[1] = fRec53[0];
			fRec51[1] = fRec51[0];
			fRec49[1] = fRec49[0];
		}
	}

};

#endif


// Main function
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
