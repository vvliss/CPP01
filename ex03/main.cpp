#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    {
        Weapon club = Weapon("crude spiked club");
        
        HumanA bob("Bob", club);
        std::cout << bob.attack() << std::endl;
        club.setType("some other type of club");
        std::cout << bob.attack() << std::endl;    
    }
    {
        Weapon club = Weapon("crude spiked club");

        HumanB jim("Jim");
        jim.setWeapon(club);
        std::cout << jim.attack() << std::endl;
        club.setType("some other type of club");
        std::cout << jim.attack() << std::endl;
    }

    return 0;
}