#include "Position.hpp"
#include "Meal.hpp"
#include <iostream>
#include <vector>

#pragma once

class Snake{
    
    public:
        Snake(int pos_x, int pos_y, int score, int speed);
        ~Snake();
        
        std::vector<Position>& getPositions();
        Position& getHead();
        
        bool getHasEaten();
        bool hasCrashed();
        void setHasEaten(bool val);
        void grow(int x,int y);
        void move();
        void moveForward();
        void updateDirection();
        void increaseScore();
        void speedUp();
        void gameStatus();
        void getResults();
        char getSnakeDirection();
        
        float getSpeedMach();
    
        int getScore();
        int getSpeed();

    private:
        
        std::vector<Position> segments;
        int score;
        int speed;
        bool hasEaten;
};

