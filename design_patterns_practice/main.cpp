#include <iostream>
#include "InputHandler.h"

int main()
{
    InputHandler* inputHandler = new InputHandler();
    Actor* actor = new Actor();

    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
        {
            inputHandler->currentInput = Input::BUTTON_X;
        }
        else
        {
            inputHandler->currentInput = Input::BUTTON_A;
        }

        Command* command = inputHandler->handleInput();
        if (command)
        {
            command->execute(*actor);
        }
    }

    delete inputHandler;
    return 0;
}

