#pragma once

class Command
{
public:
	/** Constructor/Destructor **/
	Command();
	virtual ~Command();

	/** Pure virtual **/
	virtual void Execute(class AActor* actor) = 0;
	virtual void Undo(class AActor* actor) = 0;
	virtual void Redo(class AActor* actor) = 0;
};
