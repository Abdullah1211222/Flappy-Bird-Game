# Flappy Bird Game (C++)

A 2D Flappy Bird game developed in **C++** using the **SFML 2.5.1** graphics library and **Visual Studio 2022**.

## Gameplay

Control the bird and navigate through obstacles. Avoid colliding with pipes or the ground, and try to achieve the highest score.

## Features

- 2D graphical gameplay
- Bird movement and flap controls
- Randomly positioned pipe obstacles
- Collision detection
- Score tracking
- Moving ground animation
- Game-over screen
- Restart functionality

## Controls

| Key / Action | Function |
|---|---|
| Enter | Start the game |
| Space | Make the bird flap |
| Left mouse click | Restart after game over |

## Technologies Used

- C++
- SFML 2.5.1
- Visual Studio 2022

## Project Structure

```text
Flappy-Bird-Game/
│
├── Test Project.sln
├── .gitignore
│
└── Test Project/
    ├── Assets/
    │   ├── bg.png
    │   ├── birddown.png
    │   ├── birdup.png
    │   ├── ground.png
    │   ├── pipe.png
    │   ├── pipedown.png
    │   └── arial (1).ttf
    │
    ├── Bird.cpp
    ├── Bird.h
    ├── Class.h
    ├── Game.cpp
    ├── Globals.h
    ├── pipe.cpp
    ├── pipe.h
    └── Source.cpp
```

## Requirements

- Windows 10/11
- Visual Studio 2022 with C++ development tools
- SFML 2.5.1

## Setup and Execution

1. Clone or download this repository.
2. Install SFML 2.5.1.
3. Open `Test Project.sln` in Visual Studio.
4. Configure the SFML include and library directories according to your local SFML installation.
5. Configure the required SFML libraries for Debug and Release builds.
6. Ensure the required SFML DLL files are available beside the compiled executable.
7. Build and run the project.

**Note:** The project currently contains SFML paths configured for the original development machine. You must update these paths to match your own SFML installation before building.

## Author

**Abdullah Farrukh**

- GitHub: [Abdullah1211222](https://github.com/Abdullah1211222)
- LinkedIn: [Abdullah Farrukh](https://linkedin.com/in/abdullahfarrukh1/)
