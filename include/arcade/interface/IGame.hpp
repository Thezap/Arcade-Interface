/*
** EPITECH PROJECT, 2018
** arcade
** File description:
** $Description$
*/

#pragma once

#include "ResourceAllocator.hpp"

namespace arcade::interface
{

class IGame {
public:
  virtual ~IGame() = default;
  virtual void init(ResourceAllocator *manager, const graphic::WindowPtr &window) = 0;
  virtual void refresh() = 0;
};

/**
 * Shared pointer alias of IGame
 */
using GamePtr = std::unique_ptr<IGame>;

}

extern "C" {
  arcade::interface::GamePtr getGameLibrary();
}