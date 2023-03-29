#include "day0.h"
#include <iostream>
#include <sstream>

const std::string DayZero::part1(const std::string& input) const{

    std::stringstream ss(input);
    std::string to;
    int total = 0;
    if (input != ""){
        while(std::getline(ss,to,'\n')){
          total += std::stoi(to);
        }
    }
    return std::to_string(total);
}

const std::string DayZero::part2(const std::string& input) const{
    std::stringstream ss(input);
    std::string to;
    int total = 0;
    if (input != ""){
        while(std::getline(ss,to,'\n')){
          total += std::stoi(to);
        }
    }
    return std::to_string(total);
}