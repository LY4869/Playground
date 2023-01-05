#pragma once

#include "Observer.h"

class Achievement : public Observer
{
public:
	/** Constructor/Destructor **/
	Achievement() = default;
	virtual ~Achievement() = default;

	/** Override **/
	virtual void OnNotify(class AActor* actor, Event event) override;

	void Unlock(Event event);
};
