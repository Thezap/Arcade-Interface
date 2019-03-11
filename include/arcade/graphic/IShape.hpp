//
// Created by syl on 06/03/2019.
//

#pragma once

#include "IVector2d.hpp"

namespace arcade::graphic
{

class IShape
{
public:
  virtual ~IShape() = default;
  virtual std::size_t getPointCount() const = 0;
  virtual Vector2iPtr getPoint(std::size_t index) = 0;
};

using ShapePtr = std::shared_ptr<IShape>;

}