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
  graphic::ColorPtr createColor(uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha);
  graphic::ColorPtr createColor(uint32_t color);
  graphic::WindowPtr createWindow();
  graphic::ShapePtr createShape();
  graphic::SpritePtr createSprite(graphic::TexturePtr texture);
  graphic::TexturePtr createTexture();
  graphic::TexturePtr createTexture(const std::string &path);
  graphic::TextPtr createText();
  graphic::TextPtr createText(graphic::FontPtr font);
  graphic::FontPtr createFont(const std::string &path);
  graphic::ShapePtr createShape();

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