#pragma once
#include <SFML/Graphics.hpp>
#include"Bird.h"
#include<vector>
#include"pipe.h"
#include<random>
class Game {
public:
    explicit Game(sf::RenderWindow&);
    void startGameLoop();  

    sf::RenderWindow& win;
private:
     sf::Texture bg_texture,ground_texture;
     sf::Sprite bg_sprite,ground_sprite1, ground_sprite2;
     Bird bird;
     bool is_enter_pressed, run_game, start_monitoring;
     const int move_speed = 270;
     void draw();
     void moveGround(sf::Time&);
     void doProcessing(sf::Time& dt);
     void CheckCollisions();
     void restartGame();
     void CheckScore();
     std::string toString(int);
     int pipe_counter, pipe_spawn_time, score;
     std::vector<pipe> pipes;
     std::random_device rd;
     std::uniform_int_distribution<int>dist{ 250,550 };
     sf::Font font;
     sf::Text restart_text, score_text;

     

};
