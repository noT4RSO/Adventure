#include "io.h"
#include <iostream>
#include<string>

std::string doAction(std::string action)
{
    if (action == "exit")
        return "exit";
    return "";
}

int main()
{
    //Game Loop
    bool exit {false};

    while (not exit)
    {
        std::string last_action{};
        std::string text_input = getTextInput();

        if (validInput(text_input))
        {
            outputText(text_input);
            last_action = text_input;
        }
        else
        {
            outputText("Invalid Input");
        }
        if (last_action == "exit") exit = true;


    }

    return 0;
}