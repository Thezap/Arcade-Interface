//
// Created by syl on 06/03/2019.
//

#pragma once

#include <memory>

#include "IRectangle.hpp"
#include "IVector2d.hpp"
#include "IColor.hpp"
#include "ITexture.hpp"

namespace arcade::graphic
{

class ISprite
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
  virtual IColor getColor() const = 0;

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
   * Change the sprite position
   * @param position The position where the sprite will be rendered
   */
  virtual void setPosition(const IVector2f &position) = 0;

  /**
   * Move the sprite by a given offset
   * @param xOff X axis offset
   * @param yOff Y axis offset
   */
  virtual void move(float xOff, float yOff) = 0;

  /**
   * Get the sprite position
   * @return The position where the sprite will be rendered
   */
  virtual IVector2f getPosition() const = 0;

  /**
   * Change the orientation of the current displayed sprite
   * @param angle The orientation angle between [0, 360]
   */
  virtual void setRotation(float angle) = 0;

  /**
   * Get the current orientation angle of the displayed sprite
   * @return The sprite's angle between [0, 360]
   */
  virtual float getRotation() const = 0;
};

using SpritePtr = std::shared_ptr<ISprite>;

}