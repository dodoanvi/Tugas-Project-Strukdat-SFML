
#include "SnakePart.hpp"
#include <iostream>
SnakePart::SnakePart() {
    

}
SnakePart::SnakePart(int x, int y) {
    m_rect.setOutlineColor(Color::White);
    m_rect.setOutlineThickness(1);
    m_rect.setSize(Vector2f(size, size));
    m_rect.setFillColor(Color::Blue);
    m_rect.setPosition(x * size, y * size);
}

SnakePart::SnakePart(Vector2f temp) {
    m_rect.setOutlineColor(Color::White);
    m_rect.setOutlineThickness(1);
    m_rect.setSize(Vector2f(size, size));
    m_rect.setFillColor(Color::Blue);
    m_rect.setPosition(temp);
}


void SnakePart::setposition(int x, int y) {
    m_rect.setPosition(x * size, y * size);

}

void SnakePart::follow1() {
    currentdir = nextdir;

}

void SnakePart::follow2(SnakePart& previousone) {
    nextdir = previousone.currentdir;

}

void SnakePart::setnextdir(Direction a) {
    nextdir = a;
}
void SnakePart::setcurrentdir(Direction a) {
    currentdir = a;
}


void SnakePart::setbothDirection(Direction a)
{
    currentdir = a;
    nextdir = a;

}
void SnakePart::printInfo() {
    std::cout << "the red direction is" << currentdir;
    std::cout << "the green direction is" << nextdir;
    std::cout << "the current x position is" << m_rect.getPosition().x << std::endl;





}
void SnakePart::move() {
    if (currentdir == UP) {

        m_rect.move(0, -size);
        std::cout << "up,up __________________________";

    }
    if (currentdir == DOWN) {
        m_rect.move(0, size);
    }

    if (currentdir == LEFT) {
        m_rect.move(-size, 0);
    }

    if (currentdir == RIGHT) {
        m_rect.move(size, 0);
    }
    if (currentdir == STATIONARY) {
        m_rect.move(0, 0);
        std::cout << "hi i am not moving";

    }


}



Vector2f SnakePart::getCoordinate()
{
    return m_rect.getPosition();
}

Direction SnakePart::getcurrentdir()
{
    return currentdir;
}