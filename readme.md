# Snake Game in C++

This is a classic **Snake** game implemented in **C++** for the console, developed using **Code::Lite IDE**. The game uses **object-oriented programming**, vectors, references, and Windows console control.

## Features

- Dynamic board with configurable size.
- Snake moves and grows when eating food.
- Collision detection with itself.
- Border handling (wrap-around optional).
- Adjustable speed as the snake grows.
- Console rendering using ASCII characters and ANSI colors.
- Modular code with separation of responsibilities:
  - `Snake` → handles the snake.
  - `GameBoard` → handles board rendering.
  - `Utils` → utility functions like key input and colored output.

## Requirements

- **Code::Lite IDE** (or any C++ compiler compatible with your OS).  
- Windows (for console functions like `Sleep` and cursor control).  
- ANSI escape code support if you want colored output.

## Project Structure

Snake/
├── include/
│ ├── Snake.hpp
│ ├── GameBoard.hpp
│ ├── Meal.hpp
│ └── Utils.h
├── src/
│ ├── Snake.cpp
│ ├── GameBoard.cpp
│ ├── Meal.cpp
│ └── Utils.cpp
├── main.cpp
└── README.md

Or build directly inside Code::Lite by adding all .cpp and .hpp files to your project.

##How to Play

- Use keys U, L, D, R to move the snake (Up, Left, Down, Right).
- The snake grows when it eats the food (*).
- Avoid colliding with yourself.
- Your score increases with each food eaten.

##Possible Improvements

- Refactor with a GameController to separate game logic from board and snake.
- Cross-platform support (Linux/macOS).
- High-score tracking.
- Add difficulty levels and obstacles.

##Author

Hoover Serna