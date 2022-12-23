
#include <SFML/Window.hpp>
#include <iostream>
#include <SFML/Graphics.hpp>
#include "Globalvariable.h"
#include "Snake.hpp"
#include "SnakePart.hpp"
#include "Food.hpp"
using namespace sf;
int main()

{
    Food apple;
    apple.setRandomPos();

    RenderWindow window(sf::VideoMode(size * numGrid, size * numGrid), "snakeGame");

    Snake zhuyan(1);
    bool start = false;


    Clock clock;
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        if (Keyboard::isKeyPressed(Keyboard::S))
        {

            zhuyan.change_dir(DOWN);
        }

        if (Keyboard::isKeyPressed(Keyboard::D))
        {
            zhuyan.change_dir(RIGHT);
        }

        if (Keyboard::isKeyPressed(Keyboard::A))
        {
            zhuyan.change_dir(LEFT);
        }
        if (Keyboard::isKeyPressed(Keyboard::W))
        {
            zhuyan.change_dir(UP);
        }

        if (zhuyan.collideFood(apple))
        {

            zhuyan.grow();
            apple.setRandomPos();
            start = true;

        }




        window.clear();


        if (clock.getElapsedTime().asSeconds() > 0.2) {

            zhuyan.move();
            clock.restart();

        }

        window.draw(apple.m_rect);
        window.draw(zhuyan);

        window.display();





    }

}