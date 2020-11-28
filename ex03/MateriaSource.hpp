#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <string>
# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
    public:
        MateriaSource();
        MateriaSource(MateriaSource const &copy);
        virtual ~MateriaSource();
        MateriaSource &operator=(MateriaSource const &op);

        void learnMateria(AMateria *m);
        AMateria* createMateria(std::string const &type);
    private:
        int _amount;
        AMateria *_sources[4];
};

#endif