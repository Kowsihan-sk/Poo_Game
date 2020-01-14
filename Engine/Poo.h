#pragma once

#include "Graphics.h"
#include "Dude.h"

class Poo
{
public:
    void Init(float in_x, float in_y, float in_vx, float in_vy);
    void Update();
    void ProcessConsumption(const Dude& dude);
    void Draw(Graphics& gfx) const;
    bool IsEaten() const;

private:
    float x;
    float y ;
    float vx;
    float vy;
    static constexpr float width = 24.0f;
    static constexpr float height = 24.0f;
    bool isEaten = false;
    bool initialized = false;
};