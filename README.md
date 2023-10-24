# Kingpin

Can you pin the king?

## Notes

* https://docs.juce.com/master/
* [JUCE Modules](https://forum.juce.com/t/awesome-juce-a-list-of-open-source-libraries-modules-plugins-utilities/51360)
* [Setting up CMake](https://www.youtube.com/watch?v=Uq7Hwt18s3s) - [example](https://forum.juce.com/t/adding-visual-studio-code-code-completion/44190/8)

### GUI

* [Foley's GUI Magic](https://github.com/ffAudio/foleys_gui_magic) - [demo](https://www.youtube.com/watch?v=aphA_OTmbFE)

### CMake

Setting up CMake in root directory
`cmake -S . -B build`

Setting up Juce via CMake (in plugin directory)
`cmake -S . -B build`

Build plugin (in plugin directory)
`cmake --build build`

* [Pamplejuce](https://github.com/sudara/pamplejuce)


#### Todo

* Make automatic build process in vscode