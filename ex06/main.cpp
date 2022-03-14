#include "Harl.hpp"

int main(int argc, char *argv[])
{
    Harl   yelling_harl;

    if (argc != 2)
    {
        std::cout << "Error: Only 1 argument allowed" << std::endl;
        return (false);
    }

    yelling_harl.complain(argv[1]);

    return (0);
}
