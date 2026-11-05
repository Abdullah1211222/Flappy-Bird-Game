#include <SFML/Graphics.hpp>
#include "class.h"

int main() {
    sf::RenderWindow window(sf::VideoMode(600, 777), "Flappy Bird");
    Game game(window);
    game.startGameLoop();
    return 0;
}
