#include <iostream>
#include <math.h>
#include "waves.hpp"
#include "sample_rate.hpp"
#include "filters.hpp"
#include "utility.hpp"

float fmWaveform(int t) {
  float tSec = float(t)/SAMPLE_RATE;
  float fmFreq = 440;
  //float fmFreq = tSec/10.*220.0;
  float cFreq = 440;
  //float I = tSec/10.*5.;
  float I = 1;
  return sin(2*M_PI*cFreq*tSec + I*sin(2*M_PI*fmFreq*tSec)) + 0.5f;
}

float waveform(int t) {
  return square(440*t);
}

int main() {
  unsigned char prev = charFromWF(waveform(0));
  for(int t=0;;++t) {
    // Low Pass
    //unsigned char wf = charFromWF(waveform(t));
    //unsigned char current = lowPass(wf, prev);
    //std::cout << current;
    //prev = current;

    // High Pass
    //unsigned char wf = charFromWF(waveform(t));
    //unsigned char current = lowPass(wf, prev);
    //wf = highPass(wf, prev);
    //prev = current;

    // Thru
    //unsigned char wf = charFromWF(waveform(t));

    // Frequency Modulated
    unsigned char wf = charFromWF(fmWaveform(t));

    std::cout << wf;
  }
}
