#include "Victim.hpp"

Victim::Victim()
:
    _name("")
{}

Victim::Victim(std::string name)
:
    _name(name)
{
    std::cout << "Some random victim called " << name << " just appeared!" << std::endl;
}


Victim::Victim(const Victim& copy)
{
    *this = copy;
}

Victim::~Victim() 
{
       std::cout << "Victim " << this->_name << " just died for no apparent reasons!" << std::endl;
}

Victim &Victim::operator=(const Victim& op)
{
    if (this == &op)
        return (*this);
    this->_name = op._name;
    return (*this);
}

void            Victim::getPolymorphed(void) const
{
    std::cout << this->_name << " was just polymorphed in a cute little sheep!" << std::endl;
}

std::ostream    &operator<<(std::ostream & out, const Victim & Victim)
{
    out << "I'm " << Victim.getName() << " and I like otters!" << std::endl;
    return (out);
}

// Getter - Setter
std::string Victim::getName() const {return (this->_name);}

void Victim::setName(std::string name) { this->_name = name; }