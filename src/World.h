#ifndef WORLD_H
#define WORLD_H

#include <vector>
#include <SFML/Graphics.hpp>

#include "Entity.h"
#include "Cube.h"
#include "WorldSpawn.h"
#include "Camera.h"
#include "StaticShader.h"

class World
{
private:
    std::vector<std::unique_ptr<Entity>> worldEntities;

    Camera m_camera;
    StaticShader m_staticShader;
    sf::RenderWindow* m_window;

    sf::Font font_GoldenRatio;
    sf::Text text_MouseControl;
    sf::Text text_FPS;

public:
    World();

    void initWorld(sf::RenderWindow& window);
    void updateWorld(float deltaTime);
    void renderWorld();

    void insertEntity(std::unique_ptr<Entity> entity);
};

#endif // WORLD_H
