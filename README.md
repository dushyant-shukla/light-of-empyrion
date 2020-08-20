# Light of Empyrion


Light of Empyrion is a 2D tower-defense game developed for GAM-541 coursework at DigiPen Institute of Technology.

> We are inspired by the Path Of Exile blight league to make an ARPG game with both engaging player skills and tower defenses elements. You play as an oath keeper of Empyrion that holds the front line from attacks launched by Abyss monsters. Time is ticking and monsters are flooding. You are to kill monsters and earn coins as fast as possible to get the finest skills and upgrades, and build tower wisely to gain an upper hand on the battlefield.
> Go! Our oath keeper! For Empyrion!

### Contributors
| Developer   | Role |
| ----------- | ----------- |
| Hang Yu | Producer / Gameplay Programmer/Artist     |
| Kyle Wang   | Graphics Programmer / UI Programmer   |
| Taksh Goyal | Physics Programmer / Audio     |
| Dushyant Shukla   | Engine Programmer / Gameplay Programmer   |

### Requirements
 - OS: Windows.
 - IDE: Microsoft Visual Studio 2019.
 - Run the project on x64 configuration in Visual Studio.

### External Dependencies
- #### Core:
  * Programming language: C++
  * Engine architecture: Entity Component System
  * Serialization: JSON ([jsoncpp](https://github.com/open-source-parsers/jsoncpp))
  * UI: [ImGui](https://github.com/ocornut/imgui)
  * Window Manager: [glfw](https://www.glfw.org/)
  * Logging: [spdlog](https://github.com/gabime/spdlog)
- #### Graphics:
  * Graphics API: OpenGL 4.0
  * Shader Language: GLSL version 400
  * Gl Loader-Generator: [glad](https://glad.dav1d.de/)
  * Image loader: [stb_image](https://github.com/nothings/stb)
- #### Other
  * Math library: [glm](https://glm.g-truc.net/)
  * Audio engine: [fmod](https://www.fmod.com/)

### Builduing the project solution for Microsoft Visual Studio 2019
Execute the ***generate-project.bat*** located at the root of the project folder.