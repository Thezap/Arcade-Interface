#pragma once

#include "IVector2d.hpp"

namespace arcade::interface::graphic
{

class IDrawable
{
public:
  /**
   * Destructor
   */
  virtual ~IDrawable() = default;

  /**
   * Set the text's position
   * @param vec Position to apply to vector
   */
  virtual void setPosition(Vector2fPtr vec) = 0;

  /**
   * Set the text's position
   * @param x X axis
   * @param y Y axis
   */
  virtual void setPosition(float x, float y) = 0;

  /**
   * Get the text's position
   * @return Position of the text
   */
  virtual Vector2fPtr getPosition() const = 0;

  /**
   * Move the sprite by a given offset
   * @param xOff X axis offset
   * @param yOff Y axis offset
   */
  virtual void move(float xOff, float yOff) = 0;

  /**
   * Move the sprite by a given offset
   * @param xOff X axis offset
   * @param yOff Y axis offset
   */
  virtual void move(Vector2fPtr vec) = 0;

  /**
   * Change the orientation of the current displayed text
   * @param angle The orientation angle between [0, 360]
   */
  virtual void setRotation(float angle) = 0;

  /**
   * Get the current orientation angle of the displayed text
   * @return The sprite's angle between [0, 360]
   */
  virtual float getRotation() const = 0;

  /**
  * Set the global color of the sprite
  * @param color Color to apply
  */
  virtual void setColor(ColorPtr color) = 0;

  /**
  * Get the global color of the sprite
  * @return Return the sprite's color
  */
  virtual ColorPtr getColor() const = 0;
};

} // namespace arcade::graphic
