#include <iostream>
#include <SFML/Graphics.hpp>

#include "container.h"
#include "card.h"


void drawContainer(sf::RenderWindow& window, Container& container);


int main(int argc, char* argv[])
{

    Container c;
    Card card1(1, Card::SUIT::diamonds);
    Card card2(1, Card::SUIT::clubs);
    c.push(card1);
    c.push(card2);
    c.push(card1);
    c.push(card2);
    c.push(card1);
    c.push(card2);
    c.push(card1);
    c.push(card2);
    

    sf::RenderWindow window(sf::VideoMode(900, 900), "");
    window.setFramerateLimit(30);
    
    while (window.isOpen())
    {
        window.clear(sf::Color::White);

        sf::Event event;
        sf::Vector2i position = sf::Mouse::getPosition(window);

        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
            if (event.type == sf::Event::KeyPressed)
            {
                if (event.key.code == sf::Keyboard::Escape) window.close();             
            }
            if (event.type == sf::Event::MouseButtonPressed) 
            {
            }
            if (event.type == sf::Event::MouseButtonReleased)
            {
            }
        }

        drawContainer(window, c);

        window.display();
    }

    return 0;
}

void drawContainer(sf::RenderWindow& window, Container& container)
{
    sf::RectangleShape rectangle;
    rectangle.setSize(sf::Vector2f(100, 50));
    sf::Vector2f pos = {10, 10};
    for (const auto& c : container.getCards())
    {
        rectangle.setPosition(pos);
        rectangle.setFillColor(c.isBlack() ? sf::Color::Black : sf::Color::Red);
        window.draw(rectangle);
        pos.y += 10;
    }
}

