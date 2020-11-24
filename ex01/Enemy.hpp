#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>
# include <string>

class Enemy;

class Enemy
{
    private:
        int             _hp;
        std::string     _type;

    public:
        Enemy(int hp, std::string const & type);
        Enemy(const Enemy&);
        virtual ~Enemy();
        Enemy &operator=(const Enemy& op);

        // Getter - Setter
        std::string     getType() const;
        int             getHP() const;

        virtual void    takeDamage(int amount);
};

#endif