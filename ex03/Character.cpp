# include "Character.hpp"

Character::Character(std::string const &_name)
:
	_name(_name), 
    _count(0)
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = nullptr;
}

Character::Character(Character const &copy)
:
	_name(copy._name), 
    _count(0)
{
	for (int i = 0; i < copy._count; i++)
		this->equip(copy._inventory[i]->clone());
	for (int i = this->_count; i < 4; i++)
		this->_inventory[i] = nullptr;
}

Character::~Character()
{
    for (int i = 0; i < this->_count; i++)
		delete this->_inventory[i];
}

 Character &Character::operator=(Character const &op)
 {
     if (this == &op)
        return (*this);
    this->_name = op._name;
    for (int i = 0; i < this->_count; i++)
		delete this->_inventory[i];
    this->_count = op._count;
    for (int i = 0; i < op._count; i++)
		this->equip(op._inventory[i]->clone());
	for (int i = this->_count; i < 4; i++)
		this->_inventory[i] = nullptr;
	return (*this);
 }

std::string const &Character::getName(void) const { return(this->_name); }

void Character::equip(AMateria *m)
{
    if (this->_count == 4 || !m)
    {
        std::cout << "an error ocurred while equiping" <<  std::endl;
        return ;
    }
    for (int i = 0; i < this->_count; i++)
		if (this->_inventory[i] == m)
			return ;
	this->_inventory[this->_count++] = m;
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx >= this->_count || this->_inventory[idx] == nullptr || idx > 3)
    {
        std::cout << "an error ocurred while unequiping" <<  std::endl;
        return ;
    }
    for (int i = idx; i < 3; i++)
	{
		this->_inventory[i] = this->_inventory[i + 1];
		this->_inventory[i + 1] = nullptr;
	}
	this->_count--;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx >= this->_count || this->_inventory[idx] == nullptr)
		return ;
	this->_inventory[idx]->use(target);
}