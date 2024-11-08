#include "Input.hpp"

#include <iostream>
#include "Output.hpp"

namespace ConsoleLibrary
{
    std::string getString()
    {
        std::string str;
        std::cin >> str;
        return str;
    }

    std::string prompt(std::string question)
    {
        writeString(question);
        return getString();
    }


} // namespace ConsoleLibrary
