//
// Created by syl on 06/03/2019.
//

#pragma once

namespace arcade::graphic
{
class IFont {
public:
  virtual ~IFont() = default;
};

using FontPtr = std::shared_ptr<IFont>;
}