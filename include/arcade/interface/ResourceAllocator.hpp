//
// Created by syl on 06/03/2019.
//

#pragma once

#include <list>
#include <future>
#include <mutex>

#include "graphic/Graphic.hpp"

namespace arcade::interface
{
/**
 *  Singleton class
 *  Its main goal is to call a dynamic multimedia library functions which follows
 *  each interface specified by this API
 */
class ResourceAllocator
{
private:
  /**
   * Constructor: do not allow to be called from outside of the class
   * to respect the Singleton principe
   */
  ResourceAllocator() = default;
  /**
   * Destructor
   */
  ~ResourceAllocator() = default;

public:
  /**
   * Do not allow copy constructor
   */
  ResourceAllocator(const ResourceAllocator &) = delete;

  /**
   * Do not allow assignation operator
   * @return nothing
   */
  ResourceAllocator &operator=(const ResourceAllocator &) = delete;

public:
  /**
   * Get singleton instance
   * This implementation is thread-safe using C++11 memory model
   * @return A ResourceAllocator raw pointer to the current instance
   */
  static ResourceAllocator *instance()
  {
    static std::mutex mInstanceMutex;
    static ResourceAllocator *mInstance{nullptr};
    std::lock_guard<std::mutex> lock(mInstanceMutex);

    if (!mInstance) {
      mInstance = new ResourceAllocator();
    }

    return mInstance;
  }

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

  graphic::RectanglePtr createRectangle()
  {
    graphic::RectanglePtr rectanglePtr = _gLib->createRectangle();
    _rects.push_back(rectanglePtr);
    return rectanglePtr;
  }
  graphic::RectanglePtr createRectangle(int top, int left, int width, int height)
  {
    graphic::RectanglePtr rectanglePtr = _gLib->createRectangle(top, left, width, height);
    _rects.push_back(rectanglePtr);
    return rectanglePtr;
  }

  graphic::Vector2iPtr createVector2i()
  {
    graphic::Vector2iPtr vec = _gLib->createVector2i();
    _vec2i.push_back(vec);
    return vec;
  }
  graphic::Vector2iPtr createVector2i(int x, int y)
  {
    graphic::Vector2iPtr vec = _gLib->createVector2i(x, y);
    _vec2i.push_back(vec);
    return vec;
  }

  graphic::Vector2fPtr createVector2f()
  {
    graphic::Vector2fPtr vec = _gLib->createVector2f();
    _vec2f.push_back(vec);
    return vec;
  }
  graphic::Vector2fPtr createVector2f(float x, float y)
  {
    graphic::Vector2fPtr vec = _gLib->createVector2f(x, y);
    _vec2f.push_back(vec);
    return vec;
  }

  void copy(const ResourceAllocator &other) {};

private:
  graphic::GLibPtr _gLib;
  std::list<graphic::WindowPtr> _windows;
  std::list<graphic::TexturePtr> _textures;
  std::list<graphic::SpritePtr> _sprites;
  std::list<graphic::ColorPtr> _colors;
  std::list<graphic::FontPtr> _fonts;
  std::list<graphic::TextPtr> _texts;
  std::list<graphic::RectanglePtr> _rects;
  std::list<graphic::Vector2iPtr> _vec2i;
  std::list<graphic::Vector2fPtr> _vec2f;

  static ResourceAllocator *mInstance;
  static std::mutex mInstanceMutex;
};

}