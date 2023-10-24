/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"
#include <windows.h>

//==============================================================================
KingpinAudioProcessorEditor::KingpinAudioProcessorEditor (KingpinAudioProcessor& p)
    : AudioProcessorEditor (&p), audioProcessor (p)
{
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    setSize (800, 600);
}

KingpinAudioProcessorEditor::~KingpinAudioProcessorEditor()
{
}

//==============================================================================
void KingpinAudioProcessorEditor::paint (juce::Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));
    OutputDebugStringA("Drawin' shit!\n");

    g.setColour (juce::Colours::white);
    g.setFont (15.0f);
    if (!fileDropped) {
        g.drawFittedText("Welcome to Kingpin!", getLocalBounds(), juce::Justification::centred, 1);
    }

    if (fileDropped) {
        OutputDebugStringA("Drawin' file dropped!\n");
        g.drawFittedText("File dropped!", getLocalBounds(), juce::Justification::centred, 1);
    }
}

void KingpinAudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
}

bool KingpinAudioProcessorEditor::isInterestedInFileDrag(const juce::StringArray& files)
{
    return true;
}

void KingpinAudioProcessorEditor::filesDropped(const juce::StringArray& files, int x, int y)
{
    OutputDebugStringA("hi\n");
    ///juce::Logger::writeToLog(x + "");
    fileDropped = true;
    std::string message = fileDropped ? "file dropped!" : "no file dropped.";
    OutputDebugStringA(message.c_str());
    repaint();
    return;
}