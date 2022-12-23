
#ifndef SnakePart_hpp
#define SnakePart_hpp
#include <SFML/Graphics.hpp>
#include "Globalvariable.h"
using namespace sf;
#include <stdio.h>
class SnakePart {
private:
    Direction currentdir;
    Direction nextdir;
    Vector2f m_position;





public:
    RectangleShape m_rect;
    SnakePart(Vector2f temp);
    void printInfo();
    SnakePart();
    SnakePart(int x, int y);

    void setposition(int x, int y);  

    void follow1();
    


    void follow2(SnakePart& thepreviouspart);
    void setnextdir(Direction dir);
    Direction getcurrentdir();
    void setcurrentdir(Direction dir);
    void setbothDirection(Direction dir);

    void move();    
    Vector2f getCoordinate();



};
#endif 
