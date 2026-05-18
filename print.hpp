#ifndef PRINT_HPP
#define PRINT_HPP

#include <iostream>
#include <fstream>
#include <string>

void print(const std::string& text, std::ostream& out = std::cout) {
    out << text;
}

void print(const std::string& text, std::ofstream& out) {
    out << text;
}

#endif
