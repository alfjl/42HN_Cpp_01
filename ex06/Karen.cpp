#include "Karen.hpp"

Karen::Karen() {}

Karen::~Karen() {}

void    Karen::debug( void )
{
    std::cerr << "[ DEBUG ]\n"
    << "I love having extra bacon for my 7XL-double-cheese"
    "-triple-pickle-special-ketchup burger. I really do!\n" << std::endl;
}

void    Karen::info( void )
{
    std::cerr << "[ INFO ]\n"
    << "I cannot believe adding extra bacon costs more money.\n"
    "You didn’t put enough bacon in my burger!\nIf you did, "
    "I wouldn’t be asking for more!\n" << std::endl;
}

void    Karen::warning( void )
{
    std::cerr << "[ WARNING ]\n"
    << "I think I deserve to have some extra bacon for free.\n"
    "I’ve been coming for years whereas you started working here "
    "since last month.\n" << std::endl;
}

void    Karen::error( void )
{
    std::cerr << "[ ERROR ]\n"
    << "This is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

void    Karen::complain( std::string level )
{
    int         count;
    void        (Karen::*pt2PrivateMemberFunc[])( void ) = { &Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
    std::string complains[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
    
    count = 0;
    for ( ; count < 4; count++)
    {
        if (complains[count] == level)
            break;
    }
    
    switch (count)
    {
        case 0:
            (this->*pt2PrivateMemberFunc[0])();
        case 1:
            (this->*pt2PrivateMemberFunc[1])();
        case 2:
            (this->*pt2PrivateMemberFunc[2])();
        case 3:
            (this->*pt2PrivateMemberFunc[3])();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}
