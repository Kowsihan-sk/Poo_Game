#include "Box.h"

Box::Box(float in_x, float in_y)
{
	x = in_x;
	y = in_y;
	
}

void Box::Draw(Graphics& gfx) const
{
	gfx.DrawRectDim(int(x), int(y), int(dimension), int(dimension), c);
}

bool Box::BoxCollected(const Dude& dude)
{
    const float duderight = dude.Getx() + dude.GetWidth();
    const float dudebottom = dude.Gety() + dude.GetHeight();
    const float boxright = x +  dimension;
    const float boxbottom = y + dimension;

    return duderight >= x &&
           dude.Getx() <= boxright &&
           dudebottom >= y &&
           dude.Gety() <= boxbottom;
       

}


void Box::Respawn(float in_x, float in_y)
{
    x = in_x;
    y = in_y;
}

void Box::UpdateColor()
{
    if (IncreasingColor) {
        if (c.GetR() >= 251) {
            IncreasingColor = false; 
            
        }
        else {
            c = Color(c.GetR() + 2, c.GetG() + 4, c.GetB() + 4);
        }
    }

    else {
        if (c.GetR() <= 127) {
            IncreasingColor = true;
        }
        else {
            c = Color(c.GetR() - 2, c.GetG() - 4, c.GetB() - 4);
        }
    }
}


