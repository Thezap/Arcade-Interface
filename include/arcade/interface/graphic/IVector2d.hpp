//
// Created by codelax on 3/6/19.
//

#pragma once

#include <cstdint>
#include <memory>

namespace arcade::interface::graphic
{
/**
 * Vector of int
 * Has two int : X and Y
 */
class IVector2i
{
public:
  /**
   * Default desctructor
   */
  virtual ~IVector2i() = default;
  /**
   * Get X from vector as int
   * @return X
   */
  virtual int32_t getX() const = 0;
  /**
   * Set a new X int value in vector
   * @param x new X value
   */
  virtual void setX(int32_t x) = 0;
  /**
   * Get Y from vector as int
   * @return Y
   */
  virtual int32_t getY() const = 0;
  /**
   * Set a new Y int value in vector
   * @param y new Y value
   */
  virtual void setY(int32_t y) = 0;
};
    using Vector2iPtr = std::shared_ptr<IVector2i>;

/**
 * Vector of float
 * Has two float : X and Y
 */
class IVector2f
{
public:
  /**
   * Default desctructor
   */
  virtual ~IVector2f() = default;
  /**
   * Get X from vector as float
   * @return X
   */
  virtual float getX() const = 0;
  /**
   * Set a new X float value in vector
   * @param x new X value
   */
  virtual void setX(float x) = 0;
  /**
   * Get Y from vector as float
   * @return Y
   */
  virtual float getY() const = 0;
  /**
   * Set a new Y float value in vector
   * @param y new Y value
   */
  virtual void setY(float y) = 0;
};

using Vector2iPtr = std::shared_ptr<IVector2i>;
using Vector2fPtr = std::shared_ptr<IVector2f>;
}

