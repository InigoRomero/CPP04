#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        Cure(Cure const &copy);
        virtual ~Cure();

        Cure &operator=(Cure const &op);

        AMateria *clone(void) const;
        void use(ICharacter &target);
};

#endif