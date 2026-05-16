#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type) {

}

Weapon::~Weapon() {
    
}

std::string& Weapon::getType() {
    return(this->type);
}

bool Weapon::setType(std::string type) {
    this->type = type;
    return(true); 
}