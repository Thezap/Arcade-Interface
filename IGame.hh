/*
** EPITECH PROJECT, 2018
** arcade
** File description:
** $Description$
*/

#ifndef ARCADE_IGAME_HH
#define ARCADE_IGAME_HH

#include "Core.hh"
namespace Arcade {
    namespace Game {
        class IGame {
        public:
            virtual ~IGame();
            void init(const Arcade::Core::EntityManager &manager);
            void refresh();
        };
    }
}

#endif //ARCADE_IGAME_HH
