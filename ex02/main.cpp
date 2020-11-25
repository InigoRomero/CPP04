# include <iostream>
# include "Squad.hpp"
# include "TacticalMarine.hpp"
# include "AssaultTerminator.hpp"

int main()
{
    ISpaceMarine* bob = new TacticalMarine;
    ISpaceMarine* jim = new AssaultTerminator;

    ISquad* vlc = new Squad;
    vlc->push(bob);
    vlc->push(jim);
    
    for (int i = 0; i < vlc->getCount(); ++i)
    {
        ISpaceMarine* cur = vlc->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }
    delete vlc;

    std::cout << "----MAIN mandatory END----" << std::endl;

    Squad* pibardos = new Squad;
    std::cout << "numero de pibardos antes del bucle " << pibardos->getCount() << std::endl;
    for (int i = 0; i < 10; ++i)
    {
        if (i % 2 == 0)
            std::cout << pibardos->push(new TacticalMarine) << std::endl;
        else
            std::cout << pibardos->push(new AssaultTerminator) << std::endl;
        ISpaceMarine* cur = vlc->getUnit(i);
        cur->battleCry();
    }
    std::cout << "numero de pibardos después del bucle " << pibardos->getCount() << std::endl;
    delete pibardos;

    return 0;
}