/*
  ==============================================================================

    PitchMap.h
    Created: 23 Oct 2023 9:26:49pm
    Author:  owend

  ==============================================================================

import #
#pragma once

class PitchMap {

    AudioBuffer<float> apply_fft

};

source_audio = audio_file(a)
modulator_audio = audio_file(b)

// bufffer size ~256
for i in buffer_slices:
    source_buffer = audiobuffer(source_audio[i])
    modulator_buffer = audiobuffer(source_audio[i])
    source_fft = fft(source something)
    modulator_fft = fft(modulator)
    modulated_fft = source_fft + modulator_fft
    modulated_fft_inverse = inverse_fft(modulated_fft)

*/