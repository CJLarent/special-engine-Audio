/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
EqualizerAudioProcessorEditor::EqualizerAudioProcessorEditor (EqualizerAudioProcessor& p)
    : AudioProcessorEditor (&p), audioProcessor (p)
{   // midVolume is a Audio Proessor object 
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    //Parmeter layout for the editer 
    
    juce::Slider::Listener* listener;
    setSize (500, 500);
    midVolume.setSliderStyle(juce::Slider::LinearBarVertical);
    midVolume.setRange(0.0, 127.0, 1.0);
    midVolume.setTextBoxStyle(juce::Slider::NoTextBox, false, 90, 0);
    midVolume.setPopupDisplayEnabled(true, false, this  );
    midVolume.setTextValueSuffix("Volume");
    midVolume.setValue(1.0);
    addAndMakeVisible(&midVolume);
    //midVolume.valueChanged();
    midVolume.getValue();
    // addding listener 
  
    //midVolume.addListener(listener);
}

EqualizerAudioProcessorEditor::~EqualizerAudioProcessorEditor()
{
    
}

//==============================================================================
void EqualizerAudioProcessorEditor::paint (juce::Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));
    g.fillAll(juce::Colours::white);
    g.setColour (juce::Colours::black);
    g.setFont (15.0f);
    g.drawFittedText ("Hello World!", getLocalBounds(), juce::Justification::centred, 1);
    g.drawFittedText("Midi Volume", 0, 0, getWidth(), 30,
      juce::Justification::centred, 1);
}

void EqualizerAudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..

    midVolume.setBounds(30, 20, getHeight(), - 60);
}
