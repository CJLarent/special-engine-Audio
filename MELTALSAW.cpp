/*
  ==============================================================================

    MELTALSAW.cpp
    Created: 6 Oct 2021 12:49:32am
    Author:  CJ Larent

  ==============================================================================
*/

#include "MELTALSAW.h"

bool  METALVOICE::CanPlaySound(juce::SynthesiserSound* sound)
{
    
    return dynamic_cast<juce::SynthesiserSound*>(sound) != nullptr;
}

void METALVOICE::StartNote(int midiNoteNumber, float velocity, juce::SynthesiserSound* sound, int currentPitchWheelPosition)
{
}

void METALVOICE::StopNote(float velocity, bool allowTailOff)
{
}

void METALVOICE::ControllerMoved(int controllerNumber, int newControllerValue)
{
}

void METALVOICE::PitchWheelMoved(int newPitchWheelValue)
{
}

void METALVOICE::AftertouchChanged(int newAftertouchValue)
{
}

void METALVOICE::ChannelPressureChanged(int newChannelPressureValue)
{
}

void METALVOICE::RenderNextBlock(juce::AudioBuffer<float>& outputBuffer, int startSample, int numSamples)
{
}

bool METALVOICE::isPlayingChannel(int midiChannel) const
{
    return false;
}

bool METALVOICE::isVoiceActive() const
{
    return false;
}
