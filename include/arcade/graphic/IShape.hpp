//
// Created by syl on 06/03/2019.
//

#pragma once

namespace arcade::graphic
{

class IShape
{
public:
  virtual ~IShape() = default;
  virtual std:size_t getPointCount() const;
  virtual IVector getPoint(std:size_t index);
};

using ShapePtr = std::shared_ptr<IShape>;

}