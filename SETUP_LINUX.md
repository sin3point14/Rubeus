<p>
<h1 align=center><strong>Setting up Rubeus on Linux</strong></h1>
<p/>

<p align=center>
Created by SDSLabs with :heart:
</p>

## Setting up the build environment 
1. You can use any IDE/text-editor you fancy for contributing to Rubeus.
2. Rubeus uses Visual Leak Detector v2.5.1 for catching memory leaks. Unfortunately, it is not available for Linux, which means that you can use some other dynamic code profiling tool like [Valgrind](http://valgrind.org/) if you like. You can also just ignore VLD altogether.
3. Install [CMake](https://cmake.org/) (preferably a version above or same as 3.11).
4. Clone this repository:
```shell
$ git clone git@github.com:sdslabs/Rubeus.git
```

## Acquiring dependencies:
1. The system package manager (Apt and Apt-Get) on Ubuntu can be commanded to get system specific libraries to run Rubeus. Run:
```shell
$ sudo apt install mesa-common-dev libxinerama-dev libxcursor-dev mesa-vulkan-drivers vulkan-utils cmake-gui libglew-dev libglfw3-dev 
$ sudo apt-get install libgl-dev xorg-dev libglu1-mesa-dev libx11-dev libxrandr-dev libxi-dev libudev-dev mesa-common-dev libopenal-dev libdevil1c2 libdevil-dev libsfml-dev
$ hash -r
```

## Initialising CMake
1. Navigate to Rubeus' cloned repository
2. Run `cmake ./`
_Note: Rubeus uses an in-source CMake build_

## Building Rubeus using Makefiles
1. After running CMake, you will find that CMake has generated a Makefile. To use this Makefile to build Rubeus, just run this in `Rubeus/`:
```shell
$ make
```
2. This will generate a binary in the `RubeusCore/` directory by the name `RubeusCore`. Run it using:
```shell
$ cd RubeusCore/ && ./RubeusCore
```

We are done! Remember to go through the [contribution guidelines](CONTRIBUTING.md) for further guidance.
