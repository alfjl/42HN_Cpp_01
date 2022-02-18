#include <iostream>
#include "Zombie.hpp"

int main()
{
    int n;

    n = 24;
    Zombie  *my_horde = zombieHorde(n ,"ARRGGHH....");
    
    for (int i = 0; i < n; i++)
    {
        std::cout << i << " says: ";
        my_horde[i].announce();
    }
    delete[] my_horde;

    std::cout << "### END OF MAIN ###" << std::endl;
    return (0);
}

