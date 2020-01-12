#pragma once

#include "Graphics.h"
#include "Keyboard.h"

class Dude
{
public:

    void ClampToScreen();
    void Draw(Graphics& gfx) const;
    void Update(const Keyboard& kbd);
    int Getx() const;
    int Gety() const;
    int GetWidth() const;
    int GetHeight() const;

private:
    int x = 375;
    int y = 275;
    static constexpr int speed = 1;
    static constexpr int width = 20;
    static constexpr int height = 20;
};