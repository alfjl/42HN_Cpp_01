#include <iostream>
#include "Zombie.hpp"

int main()
{
    Zombie  *heap_zombie1 = newZombie("ARRGGHH....");
    Zombie  *heap_zombie2 = newZombie("BPPPFFFLWWW....");
    Zombie  *heap_zombie3 = newZombie("CWWAAARRRRR....");
    
    randomChump("Mr. Macky, the friendly neighbour");

    heap_zombie1->announce();
    heap_zombie2->announce();
    heap_zombie3->announce();

    delete heap_zombie1;
    delete heap_zombie2;
    delete heap_zombie3;

    std::cout << "### END OF MAIN ###" << std::endl;
    return (0);
}

