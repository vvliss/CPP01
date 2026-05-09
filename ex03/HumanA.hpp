#pragma once
#include <string>
#include <iostream>
#include "Weapon.hpp"

//should use a referance weapon to assign with constructor and cannot be NULL

class HumanA {
    private:
        Weapon& weapon;
        std::string name;
    public:
        HumanA(std::string name, Weapon&);
        ~HumanA();
        std::string attack();
};