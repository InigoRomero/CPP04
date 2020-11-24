#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
:
    _name(name),
    _apcost(apcost),
    _damage(damage)
{}

AWeapon::AWeapon(const AWeapon& copy)
:
    _name(copy._name),
    _apcost(copy._apcost),
    _damage(copy._damage)
{}

AWeapon::~AWeapon() {}

AWeapon & AWeapon::operator=(const AWeapon& op)
{
    if (this == &op)
        return (*this);
    this->_name = op.getName();
    this->_apcost = op.getApCost();
    this->_damage = op.getDamage();
    return (*this);
}

// GETTER - SETTER 

std::string AWeapon::getName() const { return (this->_name); }
int         AWeapon::getApCost() const { return (this->_apcost); }
int         AWeapon::getDamage() const { return (this->_damage); }
