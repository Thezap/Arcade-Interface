//
// Created by syl on 06/03/2019.
//

#pragma once

namespace arcade::graphic
{

class ITexture
{
public:
  virtual ~ITexture() = default;

  virtual bool createTexture(uint64_t width, uint64_t height) = 0;

};

using TexturePtr = std::shared_ptr<ITexture>;

}