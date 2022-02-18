#include <string>
#include <iostream>
#include <memory>

int main()
{
    std::string hi = "HI THIS IS BRAIN";
    std::string *stringPTR = &hi;
    std::string &stringREF = hi;

    // Print memory address of hi,
    // memory address held by stringPTR,
    // and memory address held by stringREF
    std::cout
    << &hi << " : "
    << stringPTR << " : "
    << &stringREF
    << std::endl;

    // Print value of hi,
    // value pointed to by stringREF,
    // and value pointed to by stringREF
    std::cout
    << hi << " : "
    << *stringPTR << " : "
    << stringREF
    << std::endl;
    

    return (0);
}
