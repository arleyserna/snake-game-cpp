#ifndef UTILS_H
#define UTILS_H

#include <sstream> 

typedef struct{
    
    int x,y;
    
}meal;


class Utils{

    public:

        Utils();
        ~Utils();

        static char getKey();
        static void setMeal(meal& m, int jWidth, int iHeight);
        static void resetCursorPosition(int, int);
        static void appendColorChar(std::ostringstream& buffer, char c, int colorCode);
        static void hideCursor();
    
};




#endif // UTILS_H
