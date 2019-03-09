//
// Created by syl on 06/03/2019.
//

#pragma once

namespace arcade::graphic
{

/**
 * Class composed of 4 elements
 * red color as 8-bits unsigned integer
 * green color as 8-bits unsigned integer
 * blue color as 8-bits unsigned integer
 * alpha as 8-bits unsigned integer
 * each in range [0, 255]
 */
class IColor
{
public:
  virtual ~IColor() = default;
  virtual void copy(const IColor &color) = 0;

  /**
   * Get Color as a 32-bits unsigned integer
   * color is given as [red, green, blue, alpha] each being 8-bits unsigned int in range [0, 255]
   * @return color stored in an unsigned integer
   */
  virtual uint32_t getColor() const = 0;

  /**
   * Get Red color in range [0, 255]
   * @eturn 8-bits unsigned int
   */
  virtual uint8_t getRed() const = 0;

  /**
   * Get Green color in range [0, 255]
   * @return 8-bits unsigned int
   */
  virtual uint8_t getGreen() const = 0;

  /**
   * Get Blue color in range [0, 255]
   * @return 8-bits unsigned int
   */
  virtual uint8_t getBlue() const = 0;

  /**
   * Get opacity level (alpha) in range [0, 255]
   * @return 8-bits unsigned int
   */
  virtual uint8_t getAlpha() const = 0;

  /**
   * Set color of class
   * @param red in range [0, 255]
   * @param green in range [0, 255]
   * @param blue in range [0, 255]
   * @param alpha in range [0, 255]
   */
  virtual void setColor(uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha) = 0;

  /**
   * Change color using a 32-bits unsigned integer
   * @param color RGBA levels in that order each in range [0, 255]
   */
  virtual void setColor(uint32_t color) = 0;
};

}