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
  ResourceAllocator();
  ~ResourceAllocator();
  ResourceAllocator(ResourceAllocator const &) {};
  void setGLib(graphic::GLibPtr gLib);
  arcade::graphic::ColorPtr createColor(uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha);
  arcade::graphic::ColorPtr createColor(uint32_t color);
  arcade::graphic::WindowPtr createWindow();
  arcade::graphic::ShapePtr createShape();
  arcade::graphic::SpritePtr createSprite(arcade::graphic::TexturePtr texture);
  arcade::graphic::TexturePtr createTexture();
  arcade::graphic::TexturePtr createTexture(const std::string &path);
  arcade::graphic::TextPtr createText();
  arcade::graphic::TextPtr createText(arcade::graphic::FontPtr font);
  arcade::graphic::FontPtr createFont(const std::string &path);

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