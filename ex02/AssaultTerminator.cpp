# include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
    std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator& copy)
{
    (void)copy;
    std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout <<  "I’ll be back ..." << std::endl;
}

AssaultTerminator & AssaultTerminator::operator=(const AssaultTerminator& op)
{
    (void)op;
    return (*this);
}

 ISpaceMarine *AssaultTerminator::clone(void) const
 {
     AssaultTerminator *clone = new AssaultTerminator(*this);
     return (clone);
 }

 void AssaultTerminator::battleCry(void) const
 {
    std::cout <<  "This code is unclean. Purify it!" << std::endl;
 }

 void AssaultTerminator::rangedAttack(void) const
 {
     std::cout <<  "* does nothing *" << std::endl;
 }

 void AssaultTerminator::meleeAttack(void) const
 {
    std::cout <<  "* attaque with chainfists *" << std::endl;
 }