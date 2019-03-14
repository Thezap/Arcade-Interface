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
  virtual void init(const ResourceAllocator &manager) = 0;
  virtual void refresh() = 0;
};

}