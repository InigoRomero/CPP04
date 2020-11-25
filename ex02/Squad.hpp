#ifndef SQUAD_HPP
# define SQUAD_HPP

# include <iostream>
# include "ISpaceMarine.hpp"
# include "ISquad.hpp"

class Squad;

class Squad: public ISquad
{
    public:
        Squad();
        Squad(const Squad&);
        virtual ~Squad();
        Squad &operator=(const Squad& op);

        // Getter - Setter
        int                     getCount() const;
        ISpaceMarine*           getUnit(int index) const;

        int                     push(ISpaceMarine*);
    
    private:
        int            _units_count;
        ISpaceMarine** _units_list;

};

#endif