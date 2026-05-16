#pragma once
#include <string>
#include <iostream>

class Weapon {
    private:
        std::string type;
    public:
        Weapon(std::string type);
        ~Weapon();
        std::string& getType();
        bool setType(std::string type);
};