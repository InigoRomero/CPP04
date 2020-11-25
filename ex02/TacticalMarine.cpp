# include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
    std::cout << "Tactical Marine ready for action!" << std::endl;
}

TacticalMarine::TacticalMarine(const TacticalMarine& copy)
{
    (void)copy;
    std::cout << "Tactical Marine ready for action!" << std::endl;
}

TacticalMarine::~TacticalMarine()
{
	std::cout <<  "aargh ..." << std::endl;
}

TacticalMarine & TacticalMarine::operator=(const TacticalMarine& op)
{
    (void)op;
    return (*this);
}

 ISpaceMarine *TacticalMarine::clone(void) const
 {
     TacticalMarine *clone = new TacticalMarine(*this);
     return (clone);
 }

 void TacticalMarine::battleCry(void) const
 {
    std::cout <<  "For the Holy PLOT!" << std::endl;
 }

 void TacticalMarine::rangedAttack(void) const
 {
     std::cout <<  "* attacks with a bolter *" << std::endl;
 }

 void TacticalMarine::meleeAttack(void) const
 {
    std::cout <<  "* attacks with a chainsword *" << std::endl;
 }