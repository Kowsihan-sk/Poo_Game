#pragma once

#include "Graphics.h"
#include "Dude.h"

class Box {
	public:
		Box(float in_x, float in_y);
		void Draw(Graphics& gfx) const;
		bool BoxCollected(const Dude& dude);
		void Respawn(float in_x, float in_y);
		void UpdateColor();
		

	private:
		static constexpr float dimension = 20;
		Color c = { 0,127,0 };
		float x;
		float y;
		bool IncreasingColor = true;
		
};


