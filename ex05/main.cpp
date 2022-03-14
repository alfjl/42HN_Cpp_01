#include "Harl.hpp"

int main()
{
    Harl   yelling_harl;

    yelling_harl.complain("ERROR");
    std::cout << std::endl;
    yelling_harl.complain("WARNING");
    std::cout << std::endl;
    yelling_harl.complain("INFO");
    std::cout << std::endl;
    yelling_harl.complain("DEBUG");
    std::cout << std::endl;
    yelling_harl.complain("something else");

    return (0);
}
