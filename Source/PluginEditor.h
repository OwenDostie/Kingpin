/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class KingpinAudioProcessorEditor  : public juce::AudioProcessorEditor, 
                                     public juce::FileDragAndDropTarget
{
public:
    KingpinAudioProcessorEditor (KingpinAudioProcessor&);
    ~KingpinAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

    //==============================================================================
    // FileDragAndDropTarget virtual function impls
    bool isInterestedInFileDrag(const juce::StringArray& files) override;
    void filesDropped(const juce::StringArray& files, int x, int y) override;
private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    KingpinAudioProcessor& audioProcessor;
    bool fileDropped = false;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (KingpinAudioProcessorEditor)
};
