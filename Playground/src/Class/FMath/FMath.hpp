#pragma once

namespace FMath {
	template<typename T>
	T Clamp(T x, T min, T max) { return x > max ? max : x < min ? min : x; }
}