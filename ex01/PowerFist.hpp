#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include "AWeapon.hpp"

class PowerFist;

class PowerFist : public AWeapon
{
    public:
        PowerFist();
        PowerFist(const PowerFist & copy);
        virtual ~PowerFist();
        PowerFist &operator=(const PowerFist& op);
        
        void    attack() const;
};

#endif