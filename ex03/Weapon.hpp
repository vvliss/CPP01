#pragma once
#include <string>
#include <iostream>

class Weapon {
    private:
        std::string type;
    public:
        std::string& getType();
        bool setType(std::string type);
};