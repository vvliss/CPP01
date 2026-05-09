#pragma once
#include <string>
#include <iostream>

class Zombie {
private:
    std::string name;
public:
    Zombie();
    Zombie(std::string name);
    ~Zombie();
    
    void announce(void);
    void setAname(std::string name);
};

Zombie* zombieHorde( int N, std::string name );