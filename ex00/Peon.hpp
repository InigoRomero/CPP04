#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"

class Peon;

class Peon : public Victim
{
    public:
        Peon();
        Peon(std::string name);
        Peon(const Peon& copy);
        virtual ~Peon();
        Peon &operator=(const Peon& op);
        void getPolymorphed() const;
};


#endif