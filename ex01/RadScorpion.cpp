#include "RadScorpion.hpp"

RadScorpion::RadScorpion()
:
    Enemy(
        80,
        "RadScorpion"
    )
{
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion & copy)
:
    Enemy(
        copy.getHP(),
        copy.getType()
    )
{}

RadScorpion::~RadScorpion() {
    std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion & RadScorpion::operator=( const RadScorpion& op)
{
    if (this == &op)
        return (*this);
    Enemy::operator=(op);
    return (*this);
}

void    RadScorpion::takeDamage(int amount)
{
    amount -= 3;
    Enemy::takeDamage(amount);
}