# include "AMateria.hpp"

AMateria::AMateria()
:
    _xp(0),
    _type("")
{}

AMateria::AMateria(std::string const & type)
:
    _xp(0),
    _type(type)
{}

AMateria::AMateria(AMateria const & copy)
:
    _xp(0),
    _type(copy._type)
{}

AMateria::~AMateria() {}

std::string const & AMateria::getType() const { return(this->_type); }

unsigned int AMateria::getXP() const { return(this->_xp); }


void AMateria::use(ICharacter& target)
{
    (void)target;
    this->_xp += 10;
}
