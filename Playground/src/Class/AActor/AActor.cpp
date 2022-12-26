#include "AActor.h"

AActor::AActor(std::string n, const FVector& f)
	: name(std::move(n)), location(f)
{
}

AActor::AActor()
	: AActor("Unkown")
{
}

AActor::~AActor()
{
}

const std::string& AActor::GetName() const
{
	return name;
}

const FVector& AActor::GetActorLocation() const
{
	return location;
}
