#include "State_Menu.h"

namespace State
{
    State_Menu::State_Menu(sf::RenderWindow* window)
    : State_Base(window)
    {
        glEnable(GL_DEPTH_TEST);

        m_background = std::make_unique<MenuBackground>();
        m_background->initMenu(*window);
    }

    void State_Menu::input()
    {

    }

    void State_Menu::update(const float dt)
    {
        m_background->updateMenu(dt);
    }

    void State_Menu::render()
    {
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );
        glClearColor(2.f/255, 119.f/255, 189.f/255, 1.0f);

        m_background->renderMenu();
    }
}
