#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type)
:
    _hp(hp),
    _type(type)
{}

Enemy::Enemy(const Enemy& copy)
:
    _hp(copy._hp),
    _type(copy._type)
{}

Enemy::~Enemy() {}

Enemy & Enemy::operator=(const Enemy& op)
{
    if (this == &op)
        return (*this);
    this->_hp = op.getHP();
    this->_type = op.getType();
    return (*this);
}

// Getter - Setter
int             Enemy::getHP(void) const { return (this->_hp); }
std::string     Enemy::getType(void) const { return (this->_type); }

void    Enemy::takeDamage(int amount)
{
    if (amount < 0)
        amount = 0;
    if (this->_hp - amount <= 0)
        amount = this->_hp;
    this->_hp -= amount;
}