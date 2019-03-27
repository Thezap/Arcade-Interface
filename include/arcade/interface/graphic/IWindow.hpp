//
// Created by syl on 06/03/2019.
//

#pragma once

#include <memory>

#include "ISprite.hpp"
#include "IText.hpp"
#include "IVector2d.hpp"
#include "IEvent.hpp"

namespace arcade::interface::graphic
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
   * Tells if the window is open
   * @return True if the window is open
   */
  virtual bool isOpen() const = 0;

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
  virtual Vector2iPtr getSize() const = 0;

  /**
   * Set the window size
   * @param size Size to apply to window
   */
  virtual void setSize(const Vector2iPtr size) = 0;

  /**
   * Tells if window is current focused by user
   * @return True if the window has focus, false if not
   */
  virtual bool hasFocus() const = 0;

  /**
   * Tells if the cursor is currently visible
   * @return A CursorState digit
   */
  virtual CursorState cursorIsVisible() const = 0;

  /**
   * Switch the cursor state using CursorState enumeration
   * @param state The state to apply to cursor
   */
  virtual void setCursorState(CursorState state) = 0;

  /**
   * Draw a text on the window
   * @param text The text to display
   */
  virtual void draw(const TextPtr text) = 0;

  /**
   * Draw a sprite on the window
   * @param sprite The sprite to display
   */
  virtual void draw(const SpritePtr sprite) = 0;

  /**
   * Clear the window
   */
  virtual void clear() = 0;

  /**
   * Display the window
   */
  virtual void display() = 0;


  /**
   * Process window event
   * @return The current event handled by the window
   */
  virtual EventPtr processEvent() = 0;

  /**
   * Get last event processed
   * @return The last event of the window
   */
  virtual EventPtr getCurrentEvent() = 0;
};

using WindowPtr = std::shared_ptr<IWindow>;

}