#include "include/Utils.hpp"
#include <windows.h>
#include <iostream>
#include <sstream>


Utils::Utils()
{
}

Utils::~Utils()
{
}


char Utils::getKey() {
    
    if (GetAsyncKeyState(VK_UP) & 0x8000) return 'U';
    if (GetAsyncKeyState(VK_DOWN) & 0x8000) return 'D';
    if (GetAsyncKeyState(VK_LEFT) & 0x8000) return 'L';
    if (GetAsyncKeyState(VK_RIGHT) & 0x8000) return 'R';
    if (GetAsyncKeyState('Q') & 0x8000) return 'Q';
    return '\0'; // ninguna tecla presionada
}


void Utils::setMeal(meal& m, int jWidth, int iHeight){
    
    srand(static_cast<unsigned int>(time(nullptr)));
    m.x = (rand() % iHeight) + 1;
    m.y = (rand() % jWidth) + 1;
    
    std::cout<<"x="<<m.x<<" y="<<m.y<<"\n";
    
}


void Utils::resetCursorPosition(int x, int y){
    
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos = { static_cast<SHORT>(x), static_cast<SHORT>(y) };
    SetConsoleCursorPosition(hConsole, pos);    
}

void Utils::hideCursor(){
    
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cursorInfo;
    GetConsoleCursorInfo(consoleHandle, &cursorInfo); // Obtener config actual
    cursorInfo.bVisible = FALSE;                      // Ocultar
    SetConsoleCursorInfo(consoleHandle, &cursorInfo); // Aplicar cambio
    
}

void Utils::appendColorChar(std::ostringstream& buffer, char c, int colorCode){
    
    buffer << "\033[" << colorCode << "m" << c << "\033[0m";

}
                            