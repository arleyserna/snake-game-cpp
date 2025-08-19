#include "include/Game.hpp"
#include "include/Snake.hpp"
#include "include/Meal.hpp"
#include "include/Board.hpp"



Game::Game(int height, int width)
{
        
        this->board = new Board(height, width);
        this->snake = new Snake(10,10,0,100);
        this->meal = new Meal({9,13});
        this->gameIsActive = true;
}

Game::~Game()
{
}

void Game::setGameSpeed(int speed){}
void Game::initialize(){}
void Game::start(){}
void Game::run(){
        
    while(gameIsActive){
    
        board->clear();
        board->processBorders(*snake);
        board->snakeHasEaten(*snake, *meal);
        snake->move();
        board->draw(*snake, *meal);
        snake->getResults();
        board->setRefreshRate(snake->getSpeed());
        checkStatus();
    }

}

void Game::checkStatus(){
    
    if(snake->hasCrashed()){
    
        std::cout<<"GAME OVER!! :( | *** Your Final Score: ["<<snake->getScore()<<"] ***\n";
        
        this->gameIsActive = false;
        
    }
}

void Game::end(){}