//
// Created by syl on 06/03/2019.
//

#pragma once

#include <memory>
#include "IVector2d.hpp"

namespace arcade::interface::graphic
{

class ITexture
{
public:
  /**
   * Virtual destructor
   */
  virtual ~ITexture() = default;

  /**
   * Create a texture
   * @param width 8 bytes width
   * @param height 8 bytes height
   * @return true if creation was successful
   */
  virtual bool createTexture(uint64_t width, uint64_t height) = 0;

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
   * Return the size of the texture
   * @return size in pixel as a vector
   */
  virtual Vector2iPtr getSize() const = 0;

  /**
   * Return the path to the texture
   * @return return the path to the texture
   */
  virtual std::string getTexturePath() const = 0;
};

using TexturePtr = std::shared_ptr<ITexture>;

} // namespace arcade::graphic
