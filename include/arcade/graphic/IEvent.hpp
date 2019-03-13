//
// Created by syl on 13/03/2019.
//

#pragma once

#include <memory>

namespace arcade::graphic
{
class IEvent
{
public:
  /**
   * Enumeration which describes every handled event
   */
  enum EventType {
    None = -1,
    OnKeyPressed,
    OnKeyReleased,
    OnMousePressed,
    OnMouseReleased,
    OnMouseMotion,
    OnClosed,
    OnResize,
  };

public:
  /**
   * Virtual destructor
   */
  virtual ~IEvent() = default;

  /**
   * Get the type of event
   * @return The event type according to `EventType` enumeration
   */
  virtual EventType getType() = 0;
};

/**
 * Alias for std::shared_ptr<IEvent>
 */
using EventPtr = std::shared_ptr<IEvent>;
}