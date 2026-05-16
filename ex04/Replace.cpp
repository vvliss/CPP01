#include "Replace.hpp"
#include <fstream>
#include <iostream>

Replace::Replace(std::string filename, std::string s1, std::string s2)
    : filename(filename), s1(s1), s2(s2) {}

void Replace::execute() {
    std::ifstream inFile(filename);
    if (!inFile.is_open()) {
        std::cerr << "Error: Cannot open file " << filename << std::endl;
        return;
    }

    std::string content((std::istreambuf_iterator<char>(inFile)),
                        std::istreambuf_iterator<char>());
    inFile.close();

    std::string result;
    size_t pos = 0;
    size_t found;

    while ((found = content.find(s1, pos)) != std::string::npos) {
        result += content.substr(pos, found - pos);
        result += s2;
        pos = found + s1.length();
    }
    result += content.substr(pos);

    std::ofstream outFile(filename + ".replace");
    if (!outFile.is_open()) {
        std::cerr << "Error: Cannot create file " << filename << ".replace" << std::endl;
        return;
    }
    outFile << result;
    outFile.close();
}