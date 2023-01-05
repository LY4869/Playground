#pragma once

#include <Core.h>

enum class Event {
	FirstStart
};

class Observer
{
public:
	/** Constructor/Destructor **/
	Observer() = default;
	virtual ~Observer() = default;

	virtual void OnNotify(class AActor* actor, Event event) = 0;
};
