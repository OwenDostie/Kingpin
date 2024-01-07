#include "../include/PluginProcessor.h"
#include "../include/PluginEditor.h"

juce::TextButton playButton          { "Play" };
TextButton openButton          { "Open" };
TextButton stopButton          { "Stop" };

//==============================================================================
KingpinAudioProcessorEditor::KingpinAudioProcessorEditor (KingpinAudioProcessor& p)
    : AudioProcessorEditor (&p), processorRef (p)
{
    juce::ignoreUnused (processorRef);
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    setSize (800, 200);

    addAndMakeVisible (&openButton);
    openButton.setButtonText ("Open...");
    openButton.onClick = [this] { openButtonClicked(); };

    addAndMakeVisible (&playButton);
    playButton.setButtonText ("Play");
    // playButton.onClick = [this] { playButtonClicked(); };
    playButton.setColour (juce::TextButton::buttonColourId, juce::Colours::green);
    playButton.setEnabled (true);

    addAndMakeVisible (&stopButton);
    stopButton.setButtonText ("Stop");
    // stopButton.onClick = [this] { stopButtonClicked(); };
    stopButton.setColour (juce::TextButton::buttonColourId, juce::Colours::red);
    stopButton.setEnabled (true);

}

void KingpinAudioProcessorEditor::openButtonClicked()
{
    debugString = "Test Click";
    repaint();
}

KingpinAudioProcessorEditor::~KingpinAudioProcessorEditor()
{
}

//==============================================================================
void KingpinAudioProcessorEditor::paint (juce::Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));

    g.setColour (juce::Colours::white);
    g.setFont (15.0f);
    g.drawFittedText (debugString, getLocalBounds(), juce::Justification::centred, 1);

}

void KingpinAudioProcessorEditor::resized()
{
    playButton.setBounds (120, 10, 100, 30);
    stopButton.setBounds (10, 10, 100, 100);
    openButton.setBounds (200, 10, 100, 100);
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
}