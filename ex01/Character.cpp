#include "Character.hpp"

Character::Character(std::string const & name)
:
    _name(name),
    _ap(40),
    _has_equiped_weapon(0)
{}

Character::Character(const Character& copy)
:
    _name(copy._name),
    _ap(copy._ap),
    _has_equiped_weapon(copy._has_equiped_weapon)
{}

Character::~Character() {}

Character & Character::operator=(const Character& op)
{
    if (this == &op)
        return (*this);
    this->_name = op.getName();
    this->_ap = op.getAP();
    this->_has_equiped_weapon = op._has_equiped_weapon;
    if (op.getHasEquipedWeapon())
        this->_equiped_weapon = op.getWeapon();
    return (*this);
}

// Getter - Setter
std::string const      &Character::getName(void) const { return (this->_name); }
int                    Character::getAP(void) const { return (this->_ap); }
AWeapon*            Character::getWeapon(void) const { return (this->_equiped_weapon); }
int                 Character::getHasEquipedWeapon(void) const { return (this->_has_equiped_weapon); }

void            Character::recoverAP(void)
{
    int     ap_recovered = 10;

    if (this->_ap + 10 > 40)
        ap_recovered = 40 - this->_ap;
    this->_ap += ap_recovered;
}

void            Character::equip(AWeapon* weapon)
{
    this->_has_equiped_weapon = 1;
    this->_equiped_weapon = weapon;
}

void            Character::attack(Enemy* enemy)
{
    if (this->_ap < this->_equiped_weapon->getApCost())
        std::cout << "Need more AP for use this weapon" << std::endl;
    else if (enemy->getHP() <= 0)
        std::cout << "Alredy dead, let him go pls :(" << std::endl;
    else if (this->_equiped_weapon)
    {
        std::cout << this->_name << " atack to " << enemy->getType() << " with ";
        std::cout << this->_equiped_weapon->getName() << std::endl;

        enemy->takeDamage(this->_equiped_weapon->getDamage());
        this->_equiped_weapon->attack();
        this->_ap -= this->_equiped_weapon->getApCost();

        if (enemy->getHP() <= 0)
            delete enemy;
    }
}

std::ostream    &operator<<(std::ostream & out, const Character & charater)
{
    if (charater.getHasEquipedWeapon())
        out << charater.getName() << " has " << charater.getAP() << " AP and carries a " << charater.getWeapon()->getName() << std::endl;
    else
        out << charater.getName() << " has " << charater.getAP() << " AP and is unarmed" << std::endl;
    return (out);
}