#pragma once

#include <Core.h>

class Controller
{
	/** Actor that controller control **/
	class AActor* owner;

	/** Command current index **/
	int command_idx;

	/** Commands history **/
	std::vector<class Command*> commands;

public:
	/** Constructor **/
	Controller(class AActor* actor);
	virtual ~Controller();

	/** Set/Get controller's owner **/
	class AActor* GetOwner() const;
	void SetOwner(class AActor* actor);

	/** Command function **/
	void ExecuteCommand(class Command* command);
	void UndoCommand();
	void RedoCommand();
};
