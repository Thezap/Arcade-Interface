//
// Created by syl on 06/03/2019.
//

#pragma once

#include <memory>
#include "IVector2d.hpp"

namespace arcade::graphic
{

class IFont
{
public:
  /**
   * Virtual destructor
   */
  virtual ~IFont() = default;

  /**
   * Load a texture from file
   * @param filename path of the image file to load
   * @return true if loading was successful
   */
  virtual bool loadFromFile(const std::string &filename) = 0;

  /**
   * Load a texture from file
   * @param data pointer to the file data in memory
   * @param size of the data to load in bytes 
   * @return true if loading was successful
   */
  virtual bool loadFromMemory(const void *data, std::size_t size) = 0;

  /**
   * Overload of assignment operator
   * @param right instance to assign
   * @return reference to self
   */
  virtual IFont &operator=(const IFont &right) = 0;

};

using FontPtr = std::shared_ptr<IFont>;

} // namespace arcade::graphic
