//
// Created by syl on 06/03/2019.
//

#pragma once

#include "graphic/Graphic.hpp"
#include <list>

namespace arcade
{
class ResourceAllocator
{
public:
  ResourceAllocator() {};
  ResourceAllocator(ResourceAllocator const &) {};

  void setGLib(graphic::GLibPtr gLib) 
  {
    _gLib = std::move(gLib);
  };

  graphic::ColorPtr createColor()
  {
    graphic::ColorPtr colorptr = _gLib->createColor();
    _colors.push_back(colorptr);
    return (colorptr);
  };


  graphic::ColorPtr createColor(uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha)
  {
    graphic::ColorPtr colorptr = _gLib->createColor(red, green, blue, alpha);
    _colors.push_back(colorptr);
    return (colorptr);
  };

  graphic::ColorPtr createColor(uint32_t color)
  {
    graphic::ColorPtr colorptr = _gLib->createColor(color);
    _colors.push_back(colorptr);
    return (colorptr);
  };

  graphic::WindowPtr createWindow()
  {
    graphic::WindowPtr windowptr = _gLib->createWindow();
    _windows.push_back(windowptr);
    return (windowptr);
  };

  graphic::SpritePtr createSprite(graphic::TexturePtr texture)
  {
    graphic::SpritePtr spriteptr = _gLib->createSprite(texture);
    _sprites.push_back(spriteptr);
    return (spriteptr);
  };

  graphic::TexturePtr createTexture()
  {
    graphic::TexturePtr textureptr = _gLib->createTexture();
    _textures.push_back(textureptr);
    return (textureptr);
  };

  graphic::TexturePtr createTexture(const std::string &path)
  {
    graphic::TexturePtr textureptr = _gLib->createTexture(path);
    _textures.push_back(textureptr);
    return (textureptr);
  };

  graphic::TextPtr createText()
  {
    graphic::TextPtr textptr = _gLib->createText();
    _texts.push_back(textptr);
    return (textptr);
  };

  graphic::TextPtr createText(graphic::FontPtr font)
  {
    graphic::TextPtr textptr = _gLib->createText(font);
    _texts.push_back(textptr);
    return (textptr);
  };

  graphic::FontPtr createFont(const std::string &path)
  {
    graphic::FontPtr fontptr = _gLib->createFont(path);
    _fonts.push_back(fontptr);
    return (fontptr);
  };

  ~ResourceAllocator() {};

  void copy(const ResourceAllocator &other) {};

private:
  graphic::GLibPtr _gLib;
  std::list<graphic::WindowPtr> _windows;
  std::list<graphic::TexturePtr> _textures;
  std::list<graphic::SpritePtr> _sprites;
  std::list<graphic::ColorPtr> _colors;
  std::list<graphic::FontPtr> _fonts;
  std::list<graphic::TextPtr> _texts;
};
}