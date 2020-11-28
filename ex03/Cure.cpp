# include "Cure.hpp"

Cure::Cure()
:
	AMateria("cure")
{}

Cure::Cure(Cure const &copy)
:
	AMateria("cure")
{
	this->_xp = copy._xp;
}

Cure &Cure::operator=(Cure const &op)
{
	this->_xp = op._xp;
	return (*this);
}

Cure::~Cure(){}

AMateria *Cure::clone(void) const
{
    AMateria* clone = new Cure((*this));
    return (clone);
}

void Cure::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}