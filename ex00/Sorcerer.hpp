#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include <string.h>
# include "Victim.hpp"

class Sorcerer;

class Sorcerer
{
    public:
        Sorcerer(std::string name, std::string title);
        Sorcerer(const Sorcerer& copy);
        virtual ~Sorcerer();
        Sorcerer &operator=(const Sorcerer& op);
        void    polymorph(Victim const & victim);
		// Getter - Setter
        std::string getName(void) const;
        std::string getTitle(void) const;
        void setName(std::string name);
        void setTitle(std::string title);

    private:
        Sorcerer();
        std::string     _name;
        std::string     _title;
};

std::ostream    &operator<<(std::ostream & out, const Sorcerer & sorcerer);

#endif