#include "Zombie.hpp"

int main() {
    randomChump("Randy");
    
    Zombie* norman = newZombie("Norman");
    norman->announce();
    delete norman;
    
    return 0;
}