#pragma once

#include "Graphics.h"
#include "Dude.h"

class Box {
	public:
		Box(int in_x, int in_y);
		void Draw(Graphics& gfx) const;
		bool BoxCollected(const Dude& dude);
		void Respawn(int in_x, int in_y);
		void UpdateColor();
		

	private:
		static constexpr int dimension = 20;
		Color c = { 0,127,0 };
		int x;
		int y;
		bool IncreasingColor = true;
		
};


