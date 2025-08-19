#include <sstream>

#pragma once

class Snake;
struct Meal;


class Board{

    public:
        
        Board(int, int);
        ~Board();
        
        void draw(Snake& snake, Meal& meal);
        void processBorders(Snake& snake);
        void snakeHasEaten(Snake& snake, Meal& meal);
        void setRefreshRate(const int &speed);
        void clear();
    
    private: 
        
        int board_width, board_height;
        std::ostringstream buffer;
        bool isActive;
};

