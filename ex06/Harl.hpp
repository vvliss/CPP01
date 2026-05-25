#pragma once
#include <string>
#include <iostream>

class Harl {
    private:
        enum Level {
            DEBUG,
            INFO,
            WARNING,
            ERROR,
            UNKNOWN
        };
        
        Level getLevel(std::string level);
        void debug();
        void info();
        void warning();
        void error();
        
    public:
        Harl();
        ~Harl();
        void complain(std::string level);
};
