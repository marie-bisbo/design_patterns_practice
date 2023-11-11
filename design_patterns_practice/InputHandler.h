#pragma once

#include "Command.h"

enum class Input
{
	BUTTON_X,
	BUTTON_Y,
	BUTTON_A,
	BUTTON_B,
	NUM_INPUT
};

class InputHandler
{
public:
	Command* handleInput();
	bool isPressed(Input input);

	Input currentInput = Input::NUM_INPUT;

private:
    Command* buttonX_ = new JumpCommand();
    Command* buttonY_ = new FireCommand();
    Command* buttonA_ = new SwapWeaponCommand();
    Command* buttonB_ = new LurchIneffectivelyCommand();
};

