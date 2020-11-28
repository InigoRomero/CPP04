# include "Ice.hpp"

Ice::Ice()
:
	AMateria("ice")
{}

Ice::Ice(Ice const &copy)
:
	AMateria("ice")
{
	this->_xp = copy._xp;
}

Ice &Ice::operator=(Ice const &op)
{
	this->_xp = op._xp;
	return (*this);
}

Ice::~Ice(){}

AMateria *Ice::clone(void) const
{
    AMateria* clone = new Ice((*this));
    return (clone);
}

void Ice::use(ICharacter &target)
{
	AMateria::use(target);
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}