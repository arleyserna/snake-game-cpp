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
        void feed(Meal meal);
        bool getHasEaten();
        void setHasEaten(bool val);
        char getSnakeDirection();
        Position& getHead();
        void crecer(int,int);
        void move();
        void moveForward();
        void updateDirection();
        int  getScore();
        float   getSpeedMach();
        int   getSpeed();
        bool hasCrashed();
        void increaseScore();
        void speedUp();
        void gameStatus();

    private:
        
        std::vector<Position> segments;
        int score;
        int speed;
        bool hasEaten;
};

