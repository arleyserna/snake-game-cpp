#include "Meal.hpp"
#include "Snake.hpp"
#include "Board.hpp"
#include <iostream>
#include <sstream>


#pragma once

class Game{
    
    public:
        Game(int height, int width);
        ~Game();
        
        void setGameSpeed(int speed);
        void checkStatus();
        void initialize();
        void start();
        void run();
        void end();
        
    private:
        
        Board *board;
        Snake *snake;
        Meal  *meal;
        bool gameIsActive;
};

