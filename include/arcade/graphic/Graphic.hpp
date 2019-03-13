//
// Created by syl on 06/03/2019.
//

#pragma once

#include "IColor.hpp"
#include "IFont.hpp"
#include "IRectangle.hpp"
#include "ISprite.hpp"
#include "IFont.hpp"
#include "IText.hpp"
#include "ITexture.hpp"
#include "IVector2d.hpp"
#include "IWindow.hpp"
#include "IEvent.hpp"

namespace arcade::graphic
{

/**
 * Class representing a shared multimedia library, like SFML or SDL
 */
class IGraphicalLibrary {
public:

  /**
   * Tells multimedia library to instantiate a window
   * @return A new window stored inside a WindowPtr
   */
  virtual WindowPtr createWindow() = 0;

  /**
   * Tells multimedia library to instantiate a new texture
   * @return A new texture wrapped inside a TexturePtr
   */
  virtual TexturePtr createTexture() = 0;

  /**
   * Tells multimedia library to instantiate a new texture according to a path
   * @param path Path where the texture is located
   * @return A new texture wrapped inside a TexturePtr
   */
  virtual TexturePtr createTexture(const std::string &path) = 0;

  /**
   * Tells multimedia library to instantiate a new sprite
   * @return A new sprite wrapped inside a SpritePtr
   */
  virtual SpritePtr createSprite() = 0;

  /**
   * Tells multimedia library to instantiate a new sprite according to a texture (stored as TexturePtr)
   * @param texture Texture to apply to the new sprite
   * @return A new sprite wrapped inside a SpritePtr
   */
  virtual SpritePtr createSprite(TexturePtr texture) = 0;

  /**
   * Tells multimedia library to instantiate a new color
   * @return A new IColor wrapped inside a ColorPtr
   */
  virtual ColorPtr createColor() = 0;

  /**
   * Tells multimedia library to create a new color
   * @param red Red component between [0, 255]
   * @param green Green component between [0, 255]
   * @param blue Blue component between [0, 255]
   * @param alpha Alpha component between [0, 255]
   * @return A new IColor wrapped inside a ColorPtr
   */
  virtual ColorPtr createColor(uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha) = 0;

  /**
   * Tells multimedia library to create a new color
   * @param color Color value inside an unsigned 4 bytes integer
   * @return A new IColor wrapped inside a ColorPtr
   */
  virtual ColorPtr createColor(uint32_t color) = 0;

  /**
   * Tells multimedia library to instantiate a new font
   * @param path Path where the font is located
   * @return A new IFont wrapped inside a FontPtr
   */
  virtual FontPtr createFont(const std::string &path) = 0;

  /**
   * Tells multimedia library to instantiate a new text
   * @return A new IText wrapped inside a TextPtr
   */
  virtual TextPtr createText() = 0;

  /**
   * Tells multimedia library to instantiate a new text
   * @param font Font to apply to the new text
   * @return A new IText wrapped inside a TextPtr
   */
  virtual TextPtr createText(FontPtr font) = 0;

  /**
   * Tells multimedia library to instantiate a new rectangle
   * @return A new IRectangle wrapped inside a RectanglePtr
   */
  virtual RectanglePtr createRectangle() = 0;

  /**
   * Tells multimedia library to instantiate a new vector of 2 ints
   * @return A new IVector2i wrapped inside a Vector2iPtr
   */
  virtual Vector2iPtr createVector2i() = 0;

  /**
   * Tells multimedia library to instantiate a new vector of 2 floats
   * @return A new IVector2i wrapped inside a Vector2fPtr
   */
  virtual Vector2fPtr createVector2f() = 0;
};

/**
 * Shared pointer alias of IGraphicalLibrary
 */
using GLibPtr = std::unique_ptr<arcade::graphic::IGraphicalLibrary>;
}

extern "C" {
  arcade::graphic::GLibPtr getGraphicalLibrary();
}