#include "SuperMutant.hpp"

SuperMutant::SuperMutant()
:
    Enemy(
        170,
        "Super Mutant"
    )
{
    std::cout << "Gaaah. Break everything !" << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant & copy)
:
    Enemy(
        copy.getHP(),
        copy.getType()
    )
{}

SuperMutant::~SuperMutant() 
{
    std::cout << "aargh ..." << std::endl;
}

SuperMutant & SuperMutant::operator=( const SuperMutant& op)
{
    if (this == &op)
        return (*this);
    Enemy::operator=(op);
    return (*this);
}

void    SuperMutant::takeDamage(int amount)
{
    amount -= 3;
    Enemy::takeDamage(amount);
}