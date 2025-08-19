#pragma once

// This struct will held the positition for every segment of the snake

struct Position{

        int x, y; 
        char dir; // Position and direction. 'U'P,'D'own,'R'ight,'L'eft
        
        bool operator == (const Position& other) const{
                
            return x == other.x && y == other.y;
        }
};