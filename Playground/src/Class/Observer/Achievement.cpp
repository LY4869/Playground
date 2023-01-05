#include "Achievement.h"

void Achievement::OnNotify(AActor* actor, Event event)
{
	switch (event)
	{
	case Event::FirstStart:
		log("Welcome to C++!");
	default:
		break;
	}
	Unlock(event);
}

void Achievement::Unlock(Event event)
{
	log("Unlock achievment: first start");
}