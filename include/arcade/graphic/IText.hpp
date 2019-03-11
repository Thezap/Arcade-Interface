//
// Created by syl on 06/03/2019.
//

#pragma once

#include <string>

#include "IFont.hpp"
#include "IVector2d.hpp"

namespace arcade::graphic
{

class IText
{
public:
  /**
   * Default destructor
   */
  virtual ~IText() = default;

  /**
   * Set the text's string
   * @param string String to apply to text
   */
  virtual void setString(const std::string &string) = 0;

  /**
   * Get the text's string
   * @return Text's string
   */
  virtual const std::string &getString() const = 0;

  /**
   * Set the text's font
   * @param font Font to apply to text
   */
  virtual void setFont(FontPtr font) = 0;

  /**
   * Get the text's font
   * @return Text's font
   */
  virtual FontPtr getFont() = 0;

  /**
   * Set the text's position
   * @param vec Position to apply to vector
   */
  virtual void setPosition(const IVector2f &vec) = 0;

  /**
   * Get the text's position
   * @return Position of the text
   */
  virtual Vector2fPtr getPosition() const = 0;

  /**
   * Set the character size of the Text
   * @param size Size as unsigned integer
   */
  virtual void setCharacterSize(unsigned int size) = 0;

  /**
   * Get the character size
   * @return Return character size as unsigned int
   */
  virtual unsigned int getCharacterSize() const = 0;

  /**
 * Move the sprite by a given offset
 * @param xOff X axis offset
 * @param yOff Y axis offset
 */
  virtual void move(float xOff, float yOff) = 0;

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
};

/**
 * Text shared pointer alias
 */
using TextPtr = std::shared_ptr<IText>;

}