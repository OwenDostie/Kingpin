# Kingpin

Can you pin the king?

## Todo

### Owen

* Automated build + run script
* Drag & drop files (work off example)
* Create console section in plugin window w/ copy paste functionality
* Create magic UI

## Notes

* https://docs.juce.com/master/
* [JUCE Modules](https://forum.juce.com/t/awesome-juce-a-list-of-open-source-libraries-modules-plugins-utilities/51360)
* [Setting up CMake](https://www.youtube.com/watch?v=Uq7Hwt18s3s) - [example](https://forum.juce.com/t/adding-visual-studio-code-code-completion/44190/8)

### GUI

* [Foley's GUI Magic](https://github.com/ffAudio/foleys_gui_magic) - [demo](https://www.youtube.com/watch?v=aphA_OTmbFE)

### CMake

Initial config:
* Install CMake, make sure to add to path
* Run VS Code as admin, otherwise it won't be able to copy plugin to vst folder
* Go to root/libs/cmake and run `cmake -S . -B build`. You should only have to do this once.

To build and test plugin, run this from the plugin directory:
```
cmake --build build
start ../ableton/Kingpin.als
```