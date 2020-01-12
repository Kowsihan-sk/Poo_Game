#include "Box.h"

Box::Box(int in_x, int in_y)
{
	x = in_x;
	y = in_y;
	
}

void Box::Draw(Graphics& gfx) const
{
	gfx.DrawRectDim(x, y, dimension, dimension, c);
}

bool Box::BoxCollected(const Dude& dude)
{
    const int duderight = dude.Getx() + dude.GetWidth();
    const int dudebottom = dude.Gety() + dude.GetHeight();
    const int boxright = x +  dimension;
    const int boxbottom = y + dimension;

    return duderight >= x &&
           dude.Getx() <= boxright &&
           dudebottom >= y &&
           dude.Gety() <= boxbottom;
       

}


void Box::Respawn(int in_x, int in_y)
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


