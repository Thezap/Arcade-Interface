//
// Created by syl on 06/03/2019.
//

#pragma once

#include <cstdint>
#include <memory>

namespace arcade::interface::graphic
{

class IRectangle;

using RectanglePtr = std::shared_ptr<IRectangle>;

class IRectangle
{
public:
  virtual ~IRectangle() = default;

  /**
   * Check if a point is inside the rectangle's area
   * @param x x coordinate
   * @param y y coordinate
   * @return true if the point is inside or false if not
   */
  virtual bool contains(int32_t x, int32_t y) const noexcept = 0;

  /**
   * Check if a rectangle intersects this rectangle
   * @param other Other rectangle
   * @return true if the rectangle intersects this one or false if not
   */
  virtual bool intersects(const IRectangle &other) = 0;

  /**
   * Check if a rectangle equals another
   * @param other Other rectangle
   * @return true if the rectangle equals the other one or false if not
   */
  virtual bool operator==(const IRectangle &other) const = 0;
  /**
   * Check if a rectangle doest not equal another
   * @param other Other rectangle
   * @return true if the rectangle equals the other one or false if not
   */
  virtual bool operator!=(const IRectangle &other) const = 0;

  /**
   * Return the left coord of the rectangle
   * @return Left coordinate of rectangle as int32_t
   */
  virtual int32_t getLeft() const = 0;

  /**
   * Set the left coord of the rectangle
   * @param leftCoord Left coordinate as int32_t to apply to rectangle
   */
  virtual void setLeft(int32_t leftCoord) = 0;

  /**
   * Return the top coord of the rectangle
   * @return Top coordinate of rectangle as int32_t
   */
  virtual int32_t getTop() const = 0;

  /**
   * Set the top coord of the rectangle
   * @param topCoord Top coordinate as int32_t to apply to rectangle
   */
  virtual void setTop(int32_t topCoord) = 0;

  /**
   * Return the rectangle current width
   * @return Rectangle width as int32_t
   */
  virtual int32_t getWidth() const = 0;

  /**
   * Set the rectangle width
   * @param width Width as int32_t to apply to rectangle
   */
  virtual void setWidth(int32_t width) = 0;

  /**
   * Get the rectangle height
   * @return Rectangle height as int32_t
   */
  virtual int32_t getHeight() const = 0;

  /**
   * Set the rectangle height
   * @param height Height as int32_t to apply to rectangle
   */
  virtual void setHeight(int32_t height) = 0;
};

}
