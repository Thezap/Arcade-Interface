//
// Created by syl on 06/03/2019.
//

#pragma once

#include "graphic/Graphic.hpp"

namespace arcade
{
class ResourceAllocator {
public:
  IVertex createVertex();
  IColor createColor();
  WindowPtr createWindow();
  ShapePtr createShape();
  SpritePtr createSprite();
  TexturePtr createTexture();
  TextPtr createText();
  FontPtr createFont();

  void copy(const ResourceAllocator &other);
private:
  graphic::GLibPtr _gLib;
  std::list<graphic::WindowPtr> _windows;
  std::list<graphic::TexturePtr> _textures;
  std::list<graphic::SpritePtr> _sprites;
  std::list<graphic::IVertex> _vertexes;
  std::list<graphic::IColor> _colors;
  std::list<graphic::FontPtr> _fonts;
  std::list<graphic::TextPtr> _texts;
  std::list<graphic::ShapePtr> _shapes;
};
}