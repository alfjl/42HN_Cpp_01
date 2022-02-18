#include "Karen.hpp"

int main(int argc, char *argv[])
{
    Karen   yelling_karen;

    if (argc != 2)
    {
        std::cout << "Error: Only 1 argument allowed" << std::endl;
        return (false);
    }

    yelling_karen.complain(argv[1]);

    return (0);
}
