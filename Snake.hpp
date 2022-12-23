
#ifndef Snake_hpp
#define Snake_hpp
#include "Food.hpp"
#include "Snake.hpp"
#include "Globalvariable.h"
#include "SnakePart.hpp"
#include <SFML/Graphics.hpp>

using namespace sf;

class Snake : public sf::Drawable {
private:
    Direction dir = RIGHT;
    int num;
    virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;

public:

    std::vector<SnakePart> m_snake;
    void change_dir(Direction a);
    void move(); 
    bool collideFood(Food& a);

    void grow(); 
    Snake(int x);
    void printinfo();
    bool isdead(); 
};

#endif