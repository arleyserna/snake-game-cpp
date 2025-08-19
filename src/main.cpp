#include <iostream>
#include <windows.h>
#include <sstream>
#include <cmath>
#include "include/GameBoard.hpp"
#include "include/Snake.hpp"
#include "include/Meal.hpp"
#include "include/Utils.hpp"

#define HEIGHT 20
#define WIDTH  80

using namespace std;

 GameBoard* G = new GameBoard(HEIGHT,WIDTH);

int main(){
    
    
    Snake* snake = new Snake(10,10,0,100);
    Meal*  meal = new Meal({9,13});
    
    
    while(true){
    
        
        Utils::resetCursorPosition(0,0);
        Utils::hideCursor();
        
        G->clearBoard();
        G->processBorders(*snake);
        G->snakeHasEaten(*snake, *meal);
        snake->move();
        G->drawBoard(*snake, *meal);
        
        
        string mach_speed = std::to_string(snake->getSpeedMach());
        
        snake->gameStatus();
        
        if(snake->hasCrashed()){
            
            cout<<"GAME OVER!! :( | *** Your Final Score: ["<<snake->getScore()<<"] ***\n";
            
            break;
        }
        
        std::cout<<"\nScore > : "<<snake->getScore()<<" Speed: "<<mach_speed.substr(0,4)<<"x Size: "<<snake->getPositions().size()<<endl;
        
        Sleep(snake->getSpeed());
    }
    
    system("pause");

    return 0;
}