#pragma once
#include <string>

class Replace {
    private:
        std::string filename;
        std::string s1;
        std::string s2;
    public:
        Replace(std::string filename, std::string s1, std::string s2);
        void execute();
};