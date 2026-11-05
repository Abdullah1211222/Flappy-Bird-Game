#include "pipe.h"
#include"Globals.h"
pipe::pipe(int y_pos)
{
	sprite_down.setTexture(texture_down);
	sprite_up.setTexture(texture_up);
	sprite_down.setScale(SCALE_FACTOR, SCALE_FACTOR);
	sprite_up.setScale(SCALE_FACTOR, SCALE_FACTOR);

	sprite_up.setPosition(WIN_WIDTH, y_pos);
	sprite_down.setPosition(WIN_WIDTH, y_pos - pipe_distance - sprite_up.getGlobalBounds().height);


}
void pipe::loadTextures()
{
	texture_down.loadFromFile("assets/pipedown.png");
	texture_up.loadFromFile("assets/pipe.png");
}
void pipe::update(sf::Time & dt)
{
	sprite_up.move(-move_speed * dt.asSeconds(), 0.f);
	sprite_down.move(-move_speed * dt.asSeconds(), 0.f);
	

	
}

float pipe::getRightBound() {
	return sprite_down.getGlobalBounds().left + sprite_down.getGlobalBounds().width;

}
 sf::Texture pipe::texture_down, pipe::texture_up;
 int pipe::pipe_distance = 170, pipe::move_speed = 500;
