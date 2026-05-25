#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type) {

}

Weapon::~Weapon() {
    
}

const std::string& Weapon::getType() const {
    return(this->type);
}

bool Weapon::setType(std::string type) {
    this->type = type;
    return(true); 
}