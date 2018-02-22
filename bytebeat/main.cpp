#include <iostream>
#include <math.h>

#define SAMPLE_RATE 44100

float bsin(int t) {
  return sin(2*M_PI*(float)t/SAMPLE_RATE) + 0.5f;
}

float saw(int t) {
  return (float)(t % SAMPLE_RATE)/(float)SAMPLE_RATE;
}

float square(int t) {
  return (saw(t)>0.5 ? 1 : 0);
}

float waveform(int t) {
  return square(440*t);
}

unsigned char f(int t) {
  float wf = waveform(t);
  wf = wf > 1.0f ? 1.0f : wf;
  wf = wf < 0.0f ? 0.0f : wf;
  return wf*255.0f;
}

unsigned char lowPass(int t, unsigned char prev) {
  float cutoff = 15000.0/SAMPLE_RATE;
  return prev + (f(t) - prev)*cutoff;
}

unsigned char highPass(int t, unsigned char prev) {
  return f(t) - lowPass(t, prev);
}

int main() {
  unsigned char prev = f(0);
  for(int t=0;;++t) {
    // Low Pass
    //unsigned char current = lowPass(t, prev);
    //std::cout << current;
    //prev = current;

    // High Pass
    //unsigned char current = lowPass(t, prev);
    //std::cout << highPass(t, prev);
    //prev = current;

    // Thru
    std::cout << f(t);
  }
}
