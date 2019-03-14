//
// Created by syl on 06/03/2019.
//

#pragma once

#include <cstdint>
#include <memory>

namespace arcade::graphic
{

class IRectangle
{
  virtual ~IRectangle() = 0;

  /**
   * Check if a point is inside the rectangle's area
   * @param x x coordinate
   * @param y y coordinate
   * @return true if the point is inside or false if not
   */
  virtual bool contains(int64_t x, int64_t y) const noexcept = 0;

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
   * Copy assignment operator
   * @param other Rectangle data to assign to this rectangle
   * @return IRectangle ref
   */
  virtual IRectangle &operator=(const IRectangle &other) = 0;

  /**
   * Return the left coord of the rectangle
   * @return Left coordinate of rectangle as int64_t
   */
  virtual int64_t getLeft() const = 0;

  /**
   * Set the left coord of the rectangle
   * @param leftCoord Left coordinate as int64_t to apply to rectangle
   */
  virtual void setLeft(int64_t leftCoord) = 0;

  /**
   * Return the top coord of the rectangle
   * @return Top coordinate of rectangle as int64_t
   */
  virtual int64_t getTop() const = 0;

  /**
   * Set the top coord of the rectangle
   * @param topCoord Top coordinate as int64_t to apply to rectangle
   */
  virtual void setTop(int64_t topCoord) = 0;

  /**
   * Return the rectangle current width
   * @return Rectangle width as int64_t
   */
  virtual int64_t getWidth() const = 0;

  /**
   * Set the rectangle width
   * @param width Width as int64_t to apply to rectangle
   */
  virtual void setWidth(int64_t width) = 0;

  /**
   * Get the rectangle height
   * @return Rectangle height as int64_t
   */
  virtual int64_t getHeight() const = 0;

  /**
   * Set the rectangle height
   * @param height Height as int64_t to apply to rectangle
   */
  virtual void setHeight(int64_t height) = 0;
};

using RectanglePtr = std::shared_ptr<IRectangle>;
}
