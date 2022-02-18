#include "Karen.hpp"

int main()
{
    Karen   yelling_karen;

    yelling_karen.complain("ERROR");
    std::cout << std::endl;
    yelling_karen.complain("WARNING");
    std::cout << std::endl;
    yelling_karen.complain("INFO");
    std::cout << std::endl;
    yelling_karen.complain("DEBUG");
    std::cout << std::endl;
    yelling_karen.complain("something else");

    return (0);
}
