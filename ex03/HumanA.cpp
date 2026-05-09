#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon&) : name(name), weapon(weapon) {

}

HumanA::~HumanA() {

}

std::string HumanA::attack() {
    return(this->name + " attacks with " + this->weapon.getType());
}