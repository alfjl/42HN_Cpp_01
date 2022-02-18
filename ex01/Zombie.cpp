#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::Zombie( std::string name ) : name(name)
{}

Zombie::~Zombie()
{
    std::cout << "Zombie " << this->name << " destroyed" << std::endl;
}

void    Zombie::setname( std::string name)
{
    this->name = name;
}

void    Zombie::announce( void )
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
