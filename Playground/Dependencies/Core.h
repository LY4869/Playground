#pragma once
#include <bits/bits-stdc++.h>
#include <FMath/FMath.hpp>
#include <FVector/FVector.h>

#define log(x) std::cout << x << std::endl

class AActor;
class Controller;
class Command;
class MoveCommand;

template<typename T, size_t size = 0>
class TArray
{
	/** Container **/
	std::vector<T> v = std::vector<T>(size);

public:
	/** Add **/
	void Add(const T& element) { v.push_back(element); }

	/** Return size of vector **/
	size_t Num() const { return v.size(); }

	/** Return idx-th element **/
	T& operator [](const int& idx) { return v[idx]; }
};

template<typename T>
using UniquePtr = std::unique_ptr<T>;

template<typename T>
using SharedPtr = std::shared_ptr<T>;

template<typename T, typename ...Ts>
UniquePtr<T> MakeUnique(Ts ...ts) { return std::make_unique<T>(ts...); }

template<typename T, typename ...Ts>
SharedPtr<T> MakeShared(Ts ...ts) { return std::make_shared<T>(ts...); }