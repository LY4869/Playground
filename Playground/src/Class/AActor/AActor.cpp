#include "AActor.h"

#include <Controller/Controller.h>

AActor::AActor(std::string n, const FVector& f)
	: name(std::move(n)), location(f)
{
	controller = new Controller(this);
}

AActor::AActor()
	: AActor("Unkown")
{
}

AActor::~AActor()
{
	if (controller)
	{
		delete controller;
		controller = nullptr;
	}
}

Controller* AActor::GetController() const
{
	return controller;
}

const std::string& AActor::GetName() const
{
	return name;
}

void AActor::SetActorLocation(const FVector& f)
{
	location = f;
}

const FVector& AActor::GetActorLocation() const
{
	return location;
}