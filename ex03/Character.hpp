#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character;

class Character: public ICharacter
{
private:
	Character();

	std::string _name;
	int _count;
	AMateria *_inventory[4];
public:
	Character(std::string const &name);
	Character(Character const &copy);
	virtual ~Character();
    Character &operator=(Character const &op);
    //getter - setter
	std::string const &getName(void) const;

	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter &target);
};

#endif