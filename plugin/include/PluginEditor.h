#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
class KingpinAudioProcessorEditor final : public juce::AudioProcessorEditor
{
public:
    
    std::string debugString = "Test";
    
    void openButtonClicked();
    //==============================================================================

    explicit KingpinAudioProcessorEditor (KingpinAudioProcessor&);
    ~KingpinAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    KingpinAudioProcessor& processorRef;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (KingpinAudioProcessorEditor)
};