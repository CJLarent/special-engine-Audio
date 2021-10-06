/*
  ==============================================================================

    MELTALSAW.h
    Created: 6 Oct 2021 12:49:32am
    Author:  CJ Larent

  ==============================================================================
*/
  //SynthesiserSound
#pragma once
#include<JuceHeader.h>
#include"METALSOUND.h"

class METALVOICE : public juce::SynthesiserVoice
{
public:
    bool CanPlaySound(juce::SynthesiserSound* sound);
     void 	StartNote(int midiNoteNumber, float velocity, juce::SynthesiserSound* sound, int currentPitchWheelPosition);
     void 	StopNote(float velocity, bool allowTailOff);
     void 	ControllerMoved(int controllerNumber, int newControllerValue);
     void 	PitchWheelMoved(int newPitchWheelValue);
     void 	AftertouchChanged(int newAftertouchValue);
     void 	ChannelPressureChanged(int newChannelPressureValue);
     void 	RenderNextBlock(juce::AudioBuffer< float >& outputBuffer, int startSample, int numSamples);
     bool 	isPlayingChannel(int midiChannel) const;
     bool 	isVoiceActive() const;
private:
    
};