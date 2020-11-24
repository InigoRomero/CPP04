#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle()
:
    AWeapon(
        "Plasma Rifle",
        5,
        21
    )
{}

PlasmaRifle::PlasmaRifle(const PlasmaRifle & copy)
:
    AWeapon(
        copy
    )
{}

PlasmaRifle::~PlasmaRifle() {}

PlasmaRifle & PlasmaRifle::operator=( const PlasmaRifle& op)
{
    if (this == &op)
        return (*this);
    AWeapon::operator=(op);
    return (*this);
}

void    PlasmaRifle::attack() const
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}