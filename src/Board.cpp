#include <iostream>
#include <sstream>
#include <windows.h>
#include <string>
#include "include/Board.hpp"
#include "include/Utils.hpp"
#include "include/Snake.hpp"
#include "include/Meal.hpp"

Board::Board(int height, int width){
    
    
    this->board_height = height;
    this->board_width = width;
    this->isActive = true;
}

Board::~Board(){

}

// Clears the board game


void Board::clear(){
    
    Utils::resetCursorPosition(0,0);
    Utils::hideCursor();
    this->buffer.str("");
}


// Draw Board + Snake and Meals positions

void Board::draw(Snake& snake, Meal& meal){
    
        char border_char = 219;
        char snake_char = 219;
        char meal_char = '*';
        
        bool flag = false;

        for(int i=0; i<= this->board_height; i++){
            
            
            for(int j=0; j<= this->board_width; j++){
                
                // Draw Upper and Lower Borders
                
                if(i == 0 || i == this->board_height){
                    
                    this->buffer<<border_char;
                    
                }
                
                else{
                    
                    // Draw side borders
                    
                    if(j == 0 || j == this->board_width){
                        
                        this->buffer<<border_char;
                    }
                    else{
                        
                        
                    
                        for(auto snake_pos : snake.getPositions()){
                            
                            if(i == snake_pos.y && j == snake_pos.x){
                                
                                flag = true;
                                
                                break;
                                
                            }
                        }
                            
                        if(flag){
                            
                            Utils::appendColorChar(this->buffer, snake_char, 92);
                            
                            flag = false;
                        }
                        else{
                            
                                if(meal.x == j && meal.y == i){
                                    
                                   Utils::appendColorChar(this->buffer, meal_char, 33);
                                }
                                else{
                                
                                    this->buffer<<' ';
                                }
                        }
                    }
                }
            }
        
            this->buffer<<'\n';
        }
        
        std::cout<<buffer.str();
}


// Moves Snake between borders as required.


void Board::processBorders(Snake& snake){

    auto& head = snake.getHead();
    
    if(head.y == 0){
    
        head.y = this->board_height;
    
    }else if(head.y >= this->board_height){
    
        head.y = 1;
    }
    
    if(head.x == 0){
    
        head.x = this->board_width;
    
    }else if(head.x >= this->board_width){
    
        head.x = 1;
    }
    
}

// Make the Snake grow 

void Board::snakeHasEaten(Snake& snake, Meal& meal){
    
    auto pos = snake.getPositions().back();
    
    if(snake.getHead().x == meal.x && snake.getHead().y == meal.y){
        
        meal.x = std::rand() % (this->board_width-1) +1;
        meal.y = std::rand() % (this->board_height-1) +1;
        snake.move();
        snake.grow(pos.x,pos.y);
        snake.increaseScore();
        snake.speedUp();
        
    } 
}


void Board::setRefreshRate(const int &speed){
    
    Sleep(speed);
}