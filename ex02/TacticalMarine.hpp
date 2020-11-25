#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include "ISpaceMarine.hpp"
# include <iostream>
class TacticalMarine: public ISpaceMarine
{
    public:
        TacticalMarine();
        TacticalMarine(TacticalMarine const &other);
        virtual ~TacticalMarine();

        TacticalMarine &operator=(TacticalMarine const &other);

        ISpaceMarine *clone(void) const;
        void battleCry(void) const;
        void rangedAttack(void) const;
        void meleeAttack(void) const;
};

#endif