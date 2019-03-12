/*
** EPITECH PROJECT, 2018
** arcade
** File description:
** $Description$
*/

#pragma once

#include "RessourceAllocator.hpp"

namespace arcade
{

class IGame {
public:
  virtual ~IGame();
  void init(const ResourceAllocator &manager);
  void refresh();
};

}