#pragma once

#include "Graphics.h"
#include "Keyboard.h"

class Dude
{
public:

    void ClampToScreen();
    void Draw(Graphics& gfx) const;
    void Update(const Keyboard& kbd);
    float Getx() const;
    float Gety() const;
    float GetWidth() const;
    float GetHeight() const;

private:
    float x = 375.0f;
    float y = 275.0f;
    static constexpr float speed = 2.0f;
    static constexpr float width = 20.0f;
    static constexpr float height = 20.0f;
};