//
// Created by syl on 06/03/2019.
//

#pragma once

#include <string>

#include "IFont.hpp"
#include "IVector2d.hpp"
#include "IDrawable.hpp"

namespace arcade::interface::graphic
{

class IText : public IDrawable
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
   * Set the character size of the Text
   * @param size Size as unsigned integer
   */
  virtual void setCharacterSize(unsigned int size) = 0;

  /**
   * Get the character size
   * @return Return character size as unsigned int
   */
  virtual unsigned int getCharacterSize() const = 0;
};

/**
 * Text shared pointer alias
 */
using TextPtr = std::shared_ptr<IText>;

} // namespace arcade::interface::graphic