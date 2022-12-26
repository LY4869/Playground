#include "FVector.h"
#include <cmath>
#include <format>

FVector::FVector(int x, int y)
	: x(x), y(y)
{
}

FVector::FVector(int n)
	: FVector(n, n)
{
}

FVector::FVector()
	: FVector(0, 0)
{
}

std::ostream& operator<<(std::ostream& os, const FVector& f)
{
	return os << std::format("x: {} y: {}", f.x, f.y);
}

float FVector::Distance(const FVector& f1, const FVector& f2)
{
	return static_cast<float>(std::sqrt(std::pow(f1.x - f2.x, 2) + std::pow(f1.y - f2.y, 2)));
}