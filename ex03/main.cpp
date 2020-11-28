#include <iostream>
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"


int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    
    ICharacter* moi = new Character("moi");
    
    AMateria* tmp = NULL;
    AMateria* tmp2 = NULL;
    tmp = src->createMateria("ice");
    moi->equip(tmp);
    std::cout << tmp->getType() << std::endl;
    
    tmp2 = src->createMateria("cure");
    moi->equip(tmp2);
    std::cout << tmp2->getType() << std::endl;
    
    ICharacter* bob = new Character("bob");

    moi->use(-1, *bob);
    moi->use(0, *bob);
    moi->use(0, *bob);
    moi->use(0, *bob);
    moi->use(1, *bob);
    moi->use(2, *bob);
    std::cout << tmp->getType() << " xp = " << tmp->getXP() << std::endl;
    std::cout <<  tmp2->getType() << " xp = " << tmp2->getXP() << std::endl;
    moi->unequip(0);
    moi->use(0, *bob);
    moi->use(1, *bob);
    std::cout <<  tmp2->getType() << " xp = " << tmp2->getXP() << std::endl;
    
    delete bob;
    delete moi;
    delete src;
    
    return 0;
}