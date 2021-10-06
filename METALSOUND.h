/*
  ==============================================================================

    METALSOUND.h
    Created: 6 Oct 2021 12:50:45am
    Author:  CJ Larent

    A saw wave software insterment that uses 
    Keybord and midi controllers and can use midi Input  

  ==============================================================================
*/

#pragma once
#include <JuceHeader.h>

class SynthMetal : public juce::SynthesiserSound

{
    // Virual funchion need to be overwritten when called the for main 
public:
    bool AppiesToNote(int MidiNoteNumber) { return true; }
    bool AppeisToChanel(int MidiChanelNumber) { return true; }
};