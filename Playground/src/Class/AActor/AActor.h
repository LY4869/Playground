#pragma once

#include <string>
#include <FVector/FVector.h>

class AActor
{
	std::string name;
	
	FVector location;

public:
	/** Constructor/Destructor **/
	explicit AActor(std::string n, const FVector& f = FVector());
	AActor();
	virtual ~AActor();

	/** Return name **/
	const std::string& GetName() const;

	/** Return current location **/
	const FVector& GetActorLocation() const;
};


