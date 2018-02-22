% The Mathematics of Synthesis
% Jamie Quinn

# What is Synthesis?

##
> The artificial (electronic) production of sound

# What is Sound?

## To the Physicist
> Sound is a vibration that typically propagates as an audible wave of pressure

## To the Psychologist
> Sound is the reception of such waves and their perception by the brain

##
> Sound is a vibration that typically propagates as an audible wave of pressure

> Sound is the reception of such waves and their perception by the brain

# The Three Components of Synthesised Sound

## Pitch

![](./Sine_waves_different_frequencies.svg)

<https://commons.wikimedia.org/wiki/File:Sine_waves_different_frequencies.svg>

## Timbre

![](./timbre.svg)

. . .

![](./fourier.png)

## Volume

![](./ADSR.jpg)

# Types of Synthesis

- Physically Based
- Additive
- Subtractive
- Frequency modulated
- Sample based

# Physically Based

##

Using mathematical models to emulate a sound, such as a bowed instrument

<video class="stretch" data-autoplay loop src="./5_glissando.mp4"></video>

<http://www.ness.music.ed.ac.uk/>

. . .

<audio data-autoplay src="./5_glissando.mp3"></audio>

## 

Or a gong using a linear model

. . .

<audio data-autoplay src="./shellcurved_linear.mp4"></audio>

## 

and a nonlinear model

. . .

<audio data-autoplay src="./shellcurved_nonlinear.mp4"></audio>

# Sample Based

## {data-background-iframe="https://www.youtube-nocookie.com/embed/U21TOJ-fpCU?rel=0"}

# Additive

##

<http://www.ams.org/publicoutreach/feature-column/fcarc-synthesizer>

![](./fcarc-march2009-gstring.gif)

. . .

<audio data-autoplay src="./GString.mp3"></audio>

. . .

![](./fcarc-march2009-guitarspectrum.gif)

. . .

<audio data-autoplay src="./gstring.fourier.mp3"></audio>

# Frequency Modulated

Basics of this, multiplying sin waves

## Subtractive

What I'll use today, expansion later


# The Elements of Synthesis

## Pitch
2. Timbre
3. Volume

## Todo: analysis of acoustic sound ITO these parts

# Subtractive Synthesis

- Oscillate harmonically rich wave - Pitch
- Filter - Timbre
- ASDR envelopes - Volume

- LFO - Variations on above

## Start with harmonically complex wave (what does that mean?)

Perfrom Fourier Transform of square wave?

Audio of rich (square) vs simple (sine)

## Add filters to reduce number of harmonics

intro to filters
filter analysis of low pass

comb filter

all with Audio

## ASDR

Not too much to talk about, simply modifying volume

# Example on Microkorg

# Conclusion
