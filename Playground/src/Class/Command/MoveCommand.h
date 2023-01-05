#pragma once
#include "Command.h"

enum class EDirection {
	Up, Down, Left, Right
};

class MoveCommand : public Command
{
	EDirection direction;
public:
	/** Constructor/Destructor **/
	explicit MoveCommand(EDirection direction);
	~MoveCommand() override = default;

	/** Override **/
	virtual void Execute(class AActor* actor) override;
	virtual void Undo(class AActor* actor) override;
	virtual void Redo(class AActor* actor) override;
};
