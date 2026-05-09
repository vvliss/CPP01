#pragma once
#include <string>
#include <iostream>
#include "Weapon.hpp"

//should use a pointer to a weapon && assign with setWeapon() and can be NULL

class HumanB {
    private:
        Weapon* Weapon;
        std::string name;
    public:
        HumanB(std::string name, Weapon*);
        ~HumanB();
        void setWeapon(Weapon& weapon);
        std::string attack();
};