
#include "input.hpp"
#include <iostream>

namespace ConsoleLib
{
    std::string inputString()
    {
        std::string text;
        std::cin >> text;
        return static_cast<std::string>("Hello " + text);
    }


} // namespace ConsoleLib