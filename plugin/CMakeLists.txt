cmake_minimum_required(VERSION 3.28)

project(Kingpin VERSION 0.1.0)

add_subdirectory("../libs/juce" JUCE)

juce_add_plugin(${PROJECT_NAME}
    COMPANY_NAME OMEN
    PLUGIN_MANUFACTURER_CODE OMEN
    PLUGIN_CODE KGPN
    PRODUCT_NAME "Kingpin"
    FORMATS VST3

    IS_SYNTH TRUE
    IS_MIDI_EFFECT FALSE
    NEEDS_MIDI_INPUT TRUE
    NEEDS_MIDI_OUTPUT FALSE
    EDITOR_WANTS_KEYBOARD_FOCUS TRUE

    COPY_PLUGIN_AFTER_BUILD TRUE
)

juce_generate_juce_header(${PROJECT_NAME})

target_sources(${PROJECT_NAME}
    PRIVATE
        source/PluginEditor.cpp
        source/PluginProcessor.cpp
)

target_include_directories(${PROJECT_NAME}
    PRIVATE
        include
)

message(STATUS "Include paths: ${CMAKE_INCLUDE_PATH}")

target_link_libraries(${PROJECT_NAME}
    PRIVATE
        juce::juce_audio_utils
    PUBLIC
        juce::juce_recommended_config_flags
        juce::juce_recommended_lto_flags
        juce::juce_recommended_warning_flags
)

target_compile_definitions(${PROJECT_NAME}
    PUBLIC
        JUCE_WEB_BROWSER=0
        JUCE_USE_CURL=0
        JUCE_VST3_CAN_REPLACE_VST2=0
)

if(MSVC)
target_compile_definitions(${PROJECT_NAME}
    PRIVATE
        _SILENCE_CXX23_ALIGNED_STORAGE_DEPRECATION_WARNING
)
endif()