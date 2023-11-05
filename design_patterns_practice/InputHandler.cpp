#include "InputHandler.h"

#include <iostream>

void InputHandler::handleInput()
{
    if (isPressed(Input::BUTTON_X)) buttonX_->execute();
    else if (isPressed(Input::BUTTON_Y)) buttonY_->execute();
    else if (isPressed(Input::BUTTON_A)) buttonA_->execute();
    else if (isPressed(Input::BUTTON_B)) buttonB_->execute();
}

bool InputHandler::isPressed(Input input)
{
    return input == currentInput;
}
