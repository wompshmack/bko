#include <SFML/Graphics.hpp>
//#include <SFML/Sprite.hpp>
//#include <SFML/Texture.hpp>

class Entity 
{
  int hp;
  int currenthp;
  int strength;
  int dexterity;
  int luck;
  int intelligence;
  int movespeed;
  int attackspeed;
  public:
  sf::Texture texture;
  sf::Sprite sprite;
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
  }
};
int main()
{
    sf::RenderWindow window(sf::VideoMode(640, 480), "Bunny Killer: Origins");
    
    Entity player;
    if (!player.texture.loadFromFile("moosh.png"))
    {
      return -1;
    }
    player.sprite.setTexture(player.texture);
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
	player.sprite.move(0,0.1);
        window.clear();
        window.draw(player.sprite);
        window.display();
    }

    return 0;
}
