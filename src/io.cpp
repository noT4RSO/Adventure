#include "io.h"
#include<iostream>

std::string getTextInput()
{
    std::cout << "Que quieres hacer?" << "\n";
    std::string input{};
    std::getline(std::cin, input);
    return input;
}

void outputText(std::string input)
{
    std::cout << input << "\n";
}

bool validInput(std::string input)
{
    if (input == "exit" || input == "look" || input == "pick")
    {
        return true;
    }
    else
    {
        return false;
    }
    {

    }
}