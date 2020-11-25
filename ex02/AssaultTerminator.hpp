#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

# include "ISpaceMarine.hpp"
# include <iostream>
class AssaultTerminator: public ISpaceMarine
{
    public:
        AssaultTerminator();
        AssaultTerminator(AssaultTerminator const &other);
        virtual ~AssaultTerminator();

        AssaultTerminator &operator=(AssaultTerminator const &other);

        ISpaceMarine *clone(void) const;
        void battleCry(void) const;
        void rangedAttack(void) const;
        void meleeAttack(void) const;
};

#endif