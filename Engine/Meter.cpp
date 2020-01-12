#include "Meter.h"

void Meter::Draw(Graphics& gfx)
{
	gfx.DrawRectDim(x, y, level * scale, thickness,c);
}

void Meter::IncreaseLevel()
{
	++level;
}

int Meter::GetLevel() const
{
	return level;
}
