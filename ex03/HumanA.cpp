#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : weapon(weapon), name(name) {

}

HumanA::~HumanA() {

}

std::string HumanA::attack() {
    return(this->name + " attacks with their " + this->weapon.getType());
}