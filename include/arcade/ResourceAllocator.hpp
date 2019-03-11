//
// Created by syl on 06/03/2019.
//

#pragma once

#include "graphic/Graphic.hpp"
#include <list>

namespace arcade
{
class ResourceAllocator {
public:
  arcade::graphic::ColorPtr createColor();
  arcade::graphic::WindowPtr createWindow();
  arcade::graphic::ShapePtr createShape();
  arcade::graphic::SpritePtr createSprite();
  arcade::graphic::TexturePtr createTexture();
  arcade::graphic::TextPtr createText();
  arcade::graphic::FontPtr createFont();

  void copy(const ResourceAllocator &other);
private:
  graphic::GLibPtr _gLib;
  std::list<graphic::WindowPtr> _windows;
  std::list<graphic::TexturePtr> _textures;
  std::list<graphic::SpritePtr> _sprites;
  std::list<graphic::IColor> _colors;
  std::list<graphic::FontPtr> _fonts;
  std::list<graphic::TextPtr> _texts;
  std::list<graphic::ShapePtr> _shapes;
};
}