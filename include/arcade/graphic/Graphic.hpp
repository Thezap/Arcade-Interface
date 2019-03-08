//
// Created by syl on 06/03/2019.
//

#pragma once

#include "IColor.hpp"
#include "IFont.hpp"
#include "IRectangle.hpp"
#include "IShape.hpp"
#include "ISprite.hpp"
#include "IText.hpp"
#include "ITexture.hpp"
#include "IVertex.hpp"
#include "IWindow.hpp"

namespace arcade::graphic
{

class IGraphicalLibrary {
public:
  virtual WindowPtr createWindow() = 0;
  virtual TexturePtr createTexture() = 0;
  virtual TexturePtr createTexture(const std::string &path) = 0;
  virtual SpritePtr createSprite() = 0;
  virtual SpritePtr createSprite(std::shared_ptr<ITexture> texture) = 0;
  virtual IVertex createVertex(int64_t x, int64_t y) = 0;
  virtual IColor createColor(uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha) = 0;
  virtual IColor createColor(uint32_t color) = 0;
  virtual FontPtr createFont(const std::string &path) = 0;
  virtual TextPtr createText() = 0;
  virtual TextPtr createText(std::shared_ptr<IFont> font) = 0;
  virtual ShapePtr createShape() = 0;
};

using GLibPtr = std::unique_ptr<arcade::graphic::IGraphicalLibrary>;
}

extern "C" {
arcade::graphic::GLibPtr getGraphicalLibrary();
}