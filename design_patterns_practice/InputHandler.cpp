#include "InputHandler.h"

Command* InputHandler::handleInput()
{
    if (isPressed(Input::BUTTON_X)) return buttonX_;
    if (isPressed(Input::BUTTON_Y)) return buttonY_;
    if (isPressed(Input::BUTTON_A)) return buttonA_;
    if (isPressed(Input::BUTTON_B)) return buttonB_;

    return nullptr;
}

bool InputHandler::isPressed(Input input)
{
    return input == currentInput;
}
