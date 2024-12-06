
# Tyre Grip Simulator

A C++ application designed to simulate realistic tyre behavior on various surfaces, and under various conditions. The program is ideal for enthusiasts or anyone interested in the workings of a tyre.

> [!IMPORTANT]
> This program is a simulation and should not be used as a subsitute for real world testing or vehicle handling analysis. I, or any contributer, is not responsible for any consequences, damages, or accidents that may occur as a result of using this software inappropriately or as a replacement for real-world data and testing. 

## Installation

You can download the latest version from the releases [here](https://github.com/JellyPumps/tyre-grip-simulation/releases)

OR

If you prefer to build from source, or the binary for system isn't available:

### Prerequisites

Before installing make sure the following are installed on your system.

- CMAKE (minimum version 3.10)
- A C++ compiler
- Build tools (make, ninja, etc.)

### UNIX based systems (Linux, Macos)

1: Clone the project
```
git clone https://github.com/JellyPumps/tyre-grip-simulation.git
cd tyre-grip-simulation/
```

2: Generate build files
```
mkdir build
cd build
cmake ..
```

3: Build and install
```
make
(sudo) make install
```

The project will be installed to `/usr/local/bin/` by default (or the path specified by CMAKE_INSTALL_PREFIX)

## Windows

This program *should* be cross-platform, but I do not use, or have access to a windows system. I will update this section in the future. Contributions to update this section are welcome.
## License

[GPL V3.0](https://choosealicense.com/licenses/gpl-3.0/)