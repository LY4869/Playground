#pragma once

#include <Core.h>

class AActor
{
	std::string name;

	FVector location;

	class Controller* controller;

public:
	/** Constructor/Destructor **/
	explicit AActor(std::string n, const FVector& f = FVector());
	AActor();
	virtual ~AActor();

	/** Get controller **/
	class Controller* GetController() const;

	/** Return name **/
	const std::string& GetName() const;

	/** Set actor's location **/
	void SetActorLocation(const FVector& f);

	/** Return current location **/
	const FVector& GetActorLocation() const;
};
