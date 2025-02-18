# LAB-4 Documentation

## Table of Contents
1. [Introduction](#introduction)
2. [Project Structure](#project-structure)
3. [Build and Run Instructions](#build-and-run-instructions)
4. [File Overview](#file-overview)
    - [CMakeLists.txt](#cmakeliststxt)
    - [CMakePresets.json](#cmakepresetsjson)
    - [Header Files](#header-files)
    - [Source Files](#source-files)
5. [Usage](#usage)
6. [Author](#author)

## Introduction
This project is designed for educational purposes and demonstrates the computation of grades using C++. The software is intended to run on Linux platforms and may not be compatible with Windows NT platforms. Currently, it is only available for UNIX-based systems.

## Project Structure
```
LAB-4/
├── include/
│   ├── base
│   └── kaviyes/
│       ├── kaviyes.cpp
│       └── std
├── src/
│   └── main.cpp
├── CMakeLists.txt
├── CMakePresets.json
└── README.md
```

## Build and Run Instructions
### Prerequisites
- CMake 3.10 or higher
- g++ compiler
- Ninja build system

### Steps
1. **Configure the project:**
    ```sh
    cmake --preset app
    ```

2. **Build the project:**
    ```sh
    cmake --build out/build/app
    ```

3. **Run the executable:**
    ```sh
    ./out/build/app/app
    ```

## File Overview
### CMakeLists.txt
The `CMakeLists.txt` file sets up the project, specifies the C++ standard, and defines the executable target.

### CMakePresets.json
The `CMakePresets.json` file configures the build system using the Ninja generator.

### Header Files
#### include/base
Contains common includes and definitions.

#### include/kaviyes/std
Defines constants and declares functions for grade computation.

### Source Files
#### include/kaviyes/kaviyes.cpp
Implements the functions declared in `std`.

#### src/main.cpp
Main entry point of the application.

## Usage
Run the application and follow the prompts to input the scores for various exams and activities. The program will compute the average grade and provide remarks based on the computed grade.

## Author
Karl Vince Reyes, 2025 - Educational Purposes Only
- GitHub: [karlwizkrafte](https://github.com/karlwizkrafte)
- For Laboratory Exercise No: 4

<br>
<br>
<br>
<br>

<p align="center">
  <a href="https://github.com/Kaviyes/">
    <img src="https://raw.githubusercontent.com/Kaviyes/kaviyesutil/main/Kaviyes-Text.png" alt="KAVIYES" width="500"/>
  </a>
</p>

<br>

