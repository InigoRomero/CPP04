#include "Sorcerer.hpp"

Sorcerer::Sorcerer()
:
    _name(""),
    _title("")
{}

Sorcerer::Sorcerer(std::string name, std::string title)
:
    _name(name),
    _title(title)
{
    std::cout << name << ", " << title << ", is born!" << std::endl;
}


Sorcerer::Sorcerer(const Sorcerer& copy)
{
    *this = copy;
}

Sorcerer::~Sorcerer() 
{
    std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer &Sorcerer::operator=(const Sorcerer& op)
{
    if (this == &op)
        return (*this);
    this->_name = op._name;
    this->_title = op._title;
    return (*this);
}

void            Sorcerer::polymorph(Victim const & victim)
{
    victim.getPolymorphed();
}

std::ostream    &operator<<(std::ostream & out, const Sorcerer & sorcerer)
{
    out << "I am " << sorcerer.getName() << ", " << sorcerer.getTitle() << ", and I like ponies!" << std::endl;
    return (out);
}

// Getter - Setter
std::string Sorcerer::getName() const {return (this->_name);}
std::string Sorcerer::getTitle() const {return (this->_title);}

void Sorcerer::setName(std::string name) { this->_name = name; }
void Sorcerer::setTitle(std::string title) { this->_title = title; }