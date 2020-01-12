#pragma once

#include "Graphics.h"

class Meter {

	public:
		Meter(int x, int y)
			:
			x(x),
			y(y)

		{}
		void Draw(Graphics& gfx);
		void IncreaseLevel();
		int GetLevel() const;

	private:
		static constexpr Color c = Colors::Blue;
		static constexpr int thickness = 12;
		static constexpr int scale = 4;
		int level = 0;
		int x;
		int y;
};