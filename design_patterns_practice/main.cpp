#include <iostream>
#include "InputHandler.h"

int main()
{
    InputHandler* inputHandler = new InputHandler();

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

        inputHandler->handleInput();
    }

    delete inputHandler;
    return 0;
}

