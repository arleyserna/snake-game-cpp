#pragma once

class Snake;
struct Meal;


class GameBoard{

    public:
        
        GameBoard(int, int);
        ~GameBoard();
        
        void drawBoard(Snake& snake, Meal& meal);
        void processBorders(Snake& snake);
        void snakeHasEaten(Snake& snake, Meal& meal);
        void clearBoard();
    
    private: 
        
        int board_width, board_height;
        std::ostringstream buffer;
};

