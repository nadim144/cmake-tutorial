
#include <iostream>
#include "ConsoleLib.hpp"

int main()
{
    ConsoleLibrary::writeString("Hello World...!");
    std::cout<<ConsoleLibrary::getString()<<std::endl;
    return 0;
}