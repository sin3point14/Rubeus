<p>
<h1 align=center><strong>Setting up Rubeus on Windows</strong></h1>
<p/>

<p align=center>
Created by SDSLabs with :heart:
</p>

## Setting up the build environment
1. Install [Microsoft Visual Studio 2017 or above](https://www.visualstudio.com/)
2. Rubeus uses Visual Leak Detector v2.5.1 for catching memory leaks. Find it [here](https://github.com/KindDragon/vld/releases/tag/v2.5.1). However, if you wish to not use this tool, just remove `add_definitions(-DVLD)` from `/RubeusCore/CMakeLists.txt`.
3. Install [CMake](https://cmake.org/) (preferably a version above or same as 3.11).
4. Clone this repository:
```shell
$ git clone git@github.com:sdslabs/Rubeus.git
```

## Initialising CMake
1. Navigate to the repository: `cd Rubeus`
2. Run `cmake ./`

## Setting up Rubeus source in Visual Studio 2017
1. Open the newly generated `RubeusCore.sln` in the repository root folder inside Visual Studio. Right click on `RubeusCore` in Solution Explorer and select `Set as StartUp project`. [Screenshot](https://imgur.com/a/xadxwsG)
2. All `.h` files will be present in `/RubeusCore/Include` and all of their implementations(if any) will be present in `/RubeusCore/Source` as `.cpp` files. No need to edit CMakeLists.txt anywhere unless there are any linking errors popping up.

## Building Rubeus in Visual Studio 2017
1. Open `RubeusCore.sln`.
2. Press F5. (Verify the build configuration to be either Debug or Release)

We are done! All libraries are relatively linked thus your project is ready to boot up in Visual Studio. Remember to go through the [contribution guidelines](CONTRIBUTING.md) for further guidance.
