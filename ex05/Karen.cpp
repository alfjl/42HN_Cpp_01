#include "Karen.hpp"

Karen::Karen() {}

Karen::~Karen() {}

void    Karen::debug( void )
{
    std::cerr << "I love having extra bacon for my 7XL-double-cheese"
    "-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void    Karen::info( void )
{
    std::cerr << "I cannot believe adding extra bacon costs more money."
    " You didn’t put enough bacon in my burger! If you did, "
    "I wouldn’t be asking for more!" << std::endl;
}

void    Karen::warning( void )
{
    std::cerr << "I think I deserve to have some extra bacon for free."
    " I’ve been coming for years whereas you started working here "
    "since last month." << std::endl;
}

void    Karen::error( void )
{
    std::cerr << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Karen::complain( std::string level )
{
    void    (Karen::*pt2PrivateMemberFunc[])( void ) = { &Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
    std::string complains[] = { "DEBUG", "INFO", "WARNING", "ERROR" };

    for (int i = 0; i < 4; i++)
    {
        if (complains[i] == level)
            (this->*pt2PrivateMemberFunc[i])();
    }
}
