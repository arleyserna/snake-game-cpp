#include <iostream>
#include <windows.h>
#include <sstream>
#include <cmath>
#include "include/Board.hpp"
#include "include/Snake.hpp"
#include "include/Meal.hpp"
#include "include/Utils.hpp"
#include "include/Game.hpp"

#define HEIGHT 20
#define WIDTH  80


int main(){
    
    Game *Snake = new Game(HEIGHT, WIDTH);
    
    Snake->run();
    
    system("pause");

    return 0;
}