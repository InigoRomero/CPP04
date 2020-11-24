# include "Character.hpp"
# include "Enemy.hpp"
# include "RadScorpion.hpp"
# include "PlasmaRifle.hpp"
# include "SuperMutant.hpp"
# include "PowerFist.hpp"

int main()
{
    Character* moi = new Character("moi");
    std::cout << *moi;
    Enemy* b = new RadScorpion();
    Enemy* s = new SuperMutant();
    AWeapon* pr = new PlasmaRifle();
    AWeapon* pf = new PowerFist();
    moi->equip(pr);
    std::cout << *moi;
    moi->equip(pf);
    moi->attack(b);
    std::cout << *moi;
    moi->equip(pr);
    std::cout << *moi;
    moi->attack(b);
    std::cout << *moi;
    moi->attack(b);
    std::cout << *moi;
    moi->attack(b);
    moi->attack(s);
    moi->attack(s);
    moi->attack(s);
    moi->attack(s);
    moi->attack(s);
    moi->attack(s);
    std::cout << *moi;
    moi->recoverAP();
    std::cout << *moi;
    std::cout << s->getType() << " has " << s->getHP() <<  " HP"<<std::endl;
    moi->attack(s);
    std::cout << s->getType() << " has " << s->getHP() <<  " HP"<<std::endl;
    moi->attack(s);
    moi->recoverAP();
    moi->recoverAP();
    moi->recoverAP();
    std::cout << *moi;
    moi->equip(pf);
    std::cout << *moi;
    std::cout << s->getType() << " has " << s->getHP() <<  " HP"<<std::endl;
    moi->attack(s);
    std::cout << s->getType() << " has " << s->getHP() <<  " HP"<<std::endl;
    moi->attack(s);
    moi->attack(s);
    delete moi;
    delete pr;
    delete pf;
    return 0;
}