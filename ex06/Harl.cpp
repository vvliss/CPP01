#include "Harl.hpp"

Harl::Harl() {
}

Harl::~Harl() {
}

void Harl::debug(void) {
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void) {
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning(void) {
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error(void) {
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

Harl::Level Harl::getLevel(std::string level) {
    if (level == "DEBUG")
        return DEBUG;
    else if (level == "INFO")
        return INFO;
    else if (level == "WARNING")
        return WARNING;
    else if (level == "ERROR")
        return ERROR;
    return UNKNOWN;
}

void Harl::complain(std::string level) {
    Level currentLevel = getLevel(level);
    
    switch (currentLevel) {
        case DEBUG:
            debug();
            std::cout << std::endl;
        case INFO:
            info();
            std::cout << std::endl;
        case WARNING:
            warning();
            std::cout << std::endl;
        case ERROR:
            error();
            std::cout << std::endl;
            break;
        case UNKNOWN:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
    }
}
