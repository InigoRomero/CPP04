#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        Ice();
        Ice(Ice const &copy);
        virtual ~Ice();

        Ice &operator=(Ice const &op);

        AMateria *clone(void) const;
        void use(ICharacter &target);
};

#endif