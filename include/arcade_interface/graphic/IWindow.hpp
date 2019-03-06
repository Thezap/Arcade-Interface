//
// Created by syl on 06/03/2019.
//

#pragma once

#include "ISprite.hpp"
#include "IText.hpp"

namespace arcade::graphic
{
class IWindow
{
public:
  /**
   * Different possible cursor states
   */
  enum CursorState {
    UNKNOWN = -1,
    VISIBLE,
    INVISIBLE
  };

public:
  /**
   * Default destructor
   */
  virtual ~IWindow() = default;

  /**
   * Copy the window
   * @param window
   */
  virtual void copy(const IWindow &window) = 0;

  /**
   * Return the window name
   * @return Window's name as string
   */
  virtual const std::string &getName() const = 0;

  /**
   * Set the window name
   * @param name Name to apply to window
   */
  virtual void setName(const std::string &name) = 0;

  /**
   * Get the window size
   * @return The window size
   */
  virtual const IVector2i &getSize() const = 0;

  /**
   * Set the window size
   * @param size Size to apply to window
   */
  virtual void setSize(const IVector2i &size) = 0;

  /**
   * Tells if window is current focused by user
   * @return True if the window has focus, false if not
   */
  virtual const bool hasFocus() const = 0;

  /**
   * Tells if the cursor is currently visible
   * @return A CursorState digit
   */
  virtual const CursorState cursorIsVisible() const = 0;

  /**
   * Switch the cursor state using CursorState enumeration
   * @param state The state to apply to cursor
   */
  virtual void setCursorState(CursorState state) = 0;

  /**
   * Draw a text on the window
   * @param text The text to display
   */
  virtual void draw(const IText &text) = 0;

  /**
   * Draw a sprite on the window
   * @param sprite The sprite to display
   */
  virtual void draw(const ISprite &sprite) = 0;
};

using WindowPtr = std::shared_ptr<IWindow>;

}