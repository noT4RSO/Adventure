#include "io.h"
#include<iostream>

std::string getTextInput()
{
    std::cout << "Que quieres hacer?" << "\n";
    std::string input{};
    std::getline(std::cin, input);
    return input;
}

void outputText(std::string text)
{
    std::cout << text << "\n";
}
