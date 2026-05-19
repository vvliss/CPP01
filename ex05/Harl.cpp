#include "Harl.hpp"

Harl::Harl() {

}

Harl::~Harl() {

}

void complain(std::string level) {
    using action = void(Harl::*)();
    std::pair<std::string, action>;
    
}