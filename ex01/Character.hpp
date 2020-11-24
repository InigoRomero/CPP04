#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character;

class Character
{
    private:
        std::string     _name;
        int             _ap;
        int             _has_equiped_weapon;
        AWeapon*        _equiped_weapon;

    public:
        Character(std::string const & name);
        Character(const Character&);
        virtual ~Character();
        Character &operator=(const Character& op);
        
        // Getter - Setter
        std::string const        &getName() const;
        int                 getAP() const;
        AWeapon*            getWeapon() const;
        int                 getHasEquipedWeapon() const;

        void            recoverAP();
        void            equip(AWeapon*);
        void            attack(Enemy*);
};

std::ostream    &operator<<(std::ostream & out, const Character & charater);

#endif