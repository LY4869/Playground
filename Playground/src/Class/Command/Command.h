#pragma once

class Command
{
public:
	/** Constructor/Destructor **/
	Command();
	virtual ~Command();

	/** Pure virtual **/
	virtual void Execute(class AActor* actor) = 0;
};

