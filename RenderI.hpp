/*
** EPITECH PROJECT, 2022
** OOP_arcade_2018
** File description:
** RenderI.hpp
*/

#ifndef OOP_ARCADE_2018_RENDERI_HPP
#define OOP_ARCADE_2018_RENDERI_HPP

#include <cstdint>
#include <string>

namespace Arcade {

    namespace Graphic {

        class IVertex {
        public:
            virtual ~IVertex() = default;
            virtual void copy(const IVertex &window) = 0;

            virtual int64_t getX() const = 0;
            virtual int64_t getY() const = 0;
            virtual void setX(const int64_t &X) = 0;
            virtual void setY(const int64_t &Y) = 0;
        };

        class IColor {
        public:
            virtual ~IColor() = default;
            virtual void copy(const IColor &window) = 0;

            virtual uint32_t getColor() const = 0;
            virtual uint8_t getRed() const = 0;
            virtual uint8_t getGreen() const = 0;
            virtual uint8_t getBlue() const = 0;
            virtual uint8_t getAlpha() const = 0;
            virtual void setColor(uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha) = 0;
            virtual void setColor(uint32_t color) = 0;
        };

        class IFont {
        public:
            virtual ~IFont() = default;
        };

        class IText {
        public:
            virtual ~IText() = default;
        };

        class ITexture {
        public:
            virtual ~ITexture() = default;
        };

        class ISprite {
        public:
            virtual ~ISprite() = default;

            virtual void setTexture(const ITexture &texture) = 0;
            virtual void setTexture(const ITexture &texture, const IVertex &vertex) = 0;
            virtual const ITexture &getTexture() const = 0;
        };

        class IShape {
        public:
            virtual ~IShape() = default;
        };

        class IWindow {
        public:
            virtual ~IWindow() = default;
            virtual void copy(const IWindow &window) = 0;

            virtual const std::string &getName() = 0;
            virtual void setName(const std::string &name) = 0;

            virtual const IVertex &getSize() const = 0;
            virtual void setSize(const IVertex &size) = 0;

            virtual const bool hasFocus() const = 0;

            virtual const bool cursorIsVisible() const = 0;
            virtual void setCursorState(bool state) = 0;

            virtual void draw(const IShape &shape) = 0;
            virtual void draw(const IText &text) = 0;
            virtual void draw(const ISprite &sprite) = 0;

        };


    };
}

#endif //OOP_ARCADE_2018_RENDERI_HPP
