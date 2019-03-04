/*
** EPITECH PROJECT, 2018
** arcade
** File description:
** $Description$
*/

#ifndef ARCADE_CORE_HH
#define ARCADE_CORE_HH

#include <memory>
#include "IGraphic.hpp"

namespace Arcade {
    namespace Core {
        class EntityManager {
        public:
            std::shared_ptr<Arcade::Graphic::IVertex> createVertex();
            std::shared_ptr<Arcade::Graphic::IColor> createColor();
            std::shared_ptr<Arcade::Graphic::IWindow> createWindow();
            std::shared_ptr<Arcade::Graphic::IShape> createShape();
            std::shared_ptr<Arcade::Graphic::ISprite> createSprite();
            std::shared_ptr<Arcade::Graphic::ITexture> createTexture();
            std::shared_ptr<Arcade::Graphic::IText> createText();
            std::shared_ptr<Arcade::Graphic::IFont> createFont();

            void copy(const EntityManager &other);

        private:
            std::list<std::shared_ptr<Arcade::Graphic::IGraphicalElement *>> _elements;
        };
    }
}

#endif //ARCADE_CORE_HH
