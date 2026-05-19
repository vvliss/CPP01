#include "Harl.hpp"

int main()
{
    Harl harl;
    
    std::cout << "DEBUG level" << std::endl;
    harl.complain("DEBUG");
    
    std::cout << "Testing INFO level" << std::endl;
    harl.complain("INFO");
    
    std::cout << "Testing WARNING level" << std::endl;
    harl.complain("WARNING");
    
    std::cout << "Testing ERROR level" << std::endl;
    harl.complain("ERROR");
    
    return 0;
}