#include <SFML/Graphics.hpp>

class Entity {
  int hp;
  int currenthp;
  int strength;
  int dexterity;
  int luck;
  int intelligence;
  int movespeed;
  int attackspeed;
  //sprite placeholder
public:
  void update()
  {
    //state update(on the ground? etc)
    //move by speed
    //update sprite location
  }
  void damage(int)//probably float later
  {
    //hitstun
    //reduce hp by damage ammount

int main()
{
    sf::RenderWindow window(sf::VideoMode(640, 480), "Bunny Killer: Origins");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
	shape.move(0,0.1);
        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}
