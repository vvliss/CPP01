#include <string>
#include <iostream>

int main() {
    std::string hi = "HI THIS IS BRAIN";
    std::string* stringPTR = &hi;
    std::string& stringREF = hi;

    std::cout << "memory address of the string variable: " << &hi << std::endl;
    std::cout << "memory address held by stringPTR: " << stringPTR << std::endl;
    std::cout << "memory address held by stringREF: " << &stringREF << std::endl;

    std::cout << "value of the string: " << hi << std::endl;
    std::cout << "value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << "value pointed to by stringREF: " << stringREF << std::endl;

    return(0);
}