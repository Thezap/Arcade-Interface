/*
** EPITECH PROJECT, 2018
** arcade
** File description:
** $Description$
*/

#pragma once

#include "ResourceAllocator.hpp"

namespace arcade
{

class IGame {
public:
  virtual ~IGame();
  void init(const ResourceAllocator &manager);
  void refresh();
};

}