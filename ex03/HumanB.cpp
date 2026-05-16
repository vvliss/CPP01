#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name) {

}

HumanB::~HumanB() {

}

void HumanB::setWeapon(Weapon& weapon) {
    this->weapon = &weapon;
}

std::string HumanB::attack() {
    return(this->name + " attacks with their " + (*this->weapon).getType());
}