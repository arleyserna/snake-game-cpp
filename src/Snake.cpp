#include "include/Snake.hpp"
#include "include/Meal.hpp"
#include "include/Position.hpp"
#include "include/Utils.h"
#include <iostream>
#include <algorithm>
#include <vector>



Snake::Snake(int x, int y, int score, int speed)
{

    Position pos;
    pos.y = y;
    pos.x = x;
    pos.dir = 'R';
    this->segments.push_back(pos);
    this->score = score;
    this->speed = speed;
}

Snake::~Snake()
{
    
}

std::vector<Position>& Snake::getPositions(){

    return segments;

}

Position& Snake::getHead(){
        
    return this->segments.at(0);
}

void Snake::feed(Meal M){
    
    this->segments.push_back(Position({M.x, M.y}));
}

void Snake::crecer(int x,int y){

    this->segments.push_back(Position({x,y}));
}


void Snake::move(){
    
    this->updateDirection();
    this->moveForward();

}

bool Snake::getHasEaten(){
    
    return this->hasEaten;
}


void Snake::setHasEaten(bool val){
    
    this->hasEaten = val;
}


char Snake::getSnakeDirection(){
    
    return this->segments.at(0).dir;

}

void Snake::updateDirection(){
    
    auto& snake_direction = this->segments.at(0).dir;
    
    char new_direction = Utils::getKey();
    
    if(new_direction != '\0' || new_direction !='Q'){
        
        if((new_direction == 'U' || new_direction == 'D') && (snake_direction == 'L' || snake_direction == 'R' )){
            
            this->segments.at(0).dir = new_direction;
            
        }
        
        if((new_direction == 'L' || new_direction == 'R') && (snake_direction == 'U' || snake_direction == 'D' )){
            
            this->segments.at(0).dir = new_direction;
            
        }
    }
}



void Snake::moveForward(){
    
    auto new_head = this->segments.at(0);
    
    switch(new_head.dir){
        
        case 'U':
        
            new_head.y -= 1;
            break;
            
        case 'D':
        
            new_head.y += 1;
            break;
            
        case 'L':
        
            new_head.x -= 1;
            break;
            
        case 'R':
        
            new_head.x += 1;
            break;
    }
  
    this->segments.insert(this->segments.begin(), new_head);
    this->segments.pop_back();
}


int Snake::getScore(){

    return this->score;
}


void Snake::increaseScore(){

    score += 1;
}


float Snake::getSpeedMach(){

   return 100.0f/speed; 
}

int Snake:: getSpeed(){

    return speed;
}

void Snake::speedUp(){
    
    if(speed >= 20){
            
        speed -=5;
    }
}


bool Snake::hasCrashed(){
    
    auto head = this->getHead();
    
    if(segments.size() < 2) return false;
    
    auto it = std::find(segments.begin()+1, segments.end(), head);
    
    return it != segments.end();
    
}

void Snake::gameStatus(){

    if(this->hasCrashed()){
     
        std::cout<<"GAME OVER!! :( | *** Your Final Score: ["<<this->getScore()<<"] ***\n";
        //break;
    }
        
}