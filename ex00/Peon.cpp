#include "Peon.hpp"

Peon::Peon()
:
Victim()
{}

Peon::Peon(std::string name)
:
    Victim(name)
{
    std::cout << "Zog zog." << std::endl;
}


Peon::Peon(const Peon& copy)
{
    *this = copy;
}

Peon::~Peon() 
{
       std::cout << "Bleuark..." << std::endl;
}

Peon &Peon::operator=(const Peon& op)
{
    if (this == &op)
        return (*this);
    return (*this);
}

void            Peon::getPolymorphed(void) const
{
    std::cout << this->_name << " has been turned into a pink pony!" << std::endl;
}

