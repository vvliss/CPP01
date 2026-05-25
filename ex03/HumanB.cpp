#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(nullptr) {

}

HumanB::~HumanB() {

}

void HumanB::setWeapon(Weapon& weapon) {
    this->weapon = &weapon;
}

std::string HumanB::attack() {
    if (this->weapon == nullptr)
        return (this->name + " has no weapon!");
    return(this->name + " attacks with their " + this->weapon->getType());
}