//
// Created by syl on 06/03/2019.
//

#pragma once

#include <memory>

#include "IRectangle.hpp"
#include "IVector2d.hpp"
#include "IColor.hpp"
#include "ITexture.hpp"
#include "IDrawable.hpp"

namespace arcade::interface::graphic
{

class ISprite : public IDrawable
{
public:
  virtual ~ISprite() = default;

  /**
   * Set the global color of the sprite
   * @param color Color to apply
   */
  virtual void setColor(const IColor &color) = 0;

  /**
   * Get the global color of the sprite
   * @return Return the sprite's color
   */
  virtual ColorPtr getColor() const = 0;

  /**
   * Set sprite's texture
   * @param texture Sprite's texture used to render
   */
  virtual void setTexture(TexturePtr texture) = 0;

  /**
   * Get sprite's texture
   * @return The texture held by the sprite
   */
  virtual const TexturePtr getTexture() const = 0;

  /**
   * Set the area of the texture the sprite should use
   * @param rect The area represented by a IRectangle
   */
  virtual void setTextureRect(const IRectangle &rect) = 0;

  /**
   * Get the sprite position
   * @return The position where the sprite will be rendered
   */
  virtual Vector2fPtr getPosition() const = 0;
};

using SpritePtr = std::shared_ptr<ISprite>;

} // namespace arcade::interface::graphic
