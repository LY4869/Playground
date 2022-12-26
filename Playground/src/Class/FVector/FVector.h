#pragma once
#include <iostream>

struct FVector
{
	/** Constructor **/
	FVector(int x, int y);
	explicit FVector(int n);
	FVector();

	int x;
	int y;

	/** Operator **/
	auto operator <=>(const FVector& f) const = default;
	friend std::ostream& operator <<(std::ostream& os, const FVector& f);

	/** Function **/
	static float Distance(const FVector& f1, const FVector& f2);
};