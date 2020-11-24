#include "PowerFist.hpp"

PowerFist::PowerFist()
:
    AWeapon(
        "Power Fist",
        8,
        50
    )
{}

PowerFist::PowerFist(const PowerFist & copy)
:
    AWeapon(
        copy
    )
{}

PowerFist::~PowerFist() {}

PowerFist & PowerFist::operator=(const PowerFist& op)
{
    if (this == &op)
        return (*this);
    AWeapon::operator=(op);
    return (*this);
}

void    PowerFist::attack() const
{
    std::cout << "* pschhh... SBAM! *" << std::endl;
}