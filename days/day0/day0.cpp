#include "day0.h"
#include <iostream>
#include <sstream>

const std::string day0::part1(const std::string& input){
    std::cout << "Part1\n";

    std::stringstream ss(input);
    std::string to;

    if (input != ""){
        while(std::getline(ss,to,'\n')){
          std::cout << to <<std::endl;
        }
    }
    return "bleh";
}

const std::string day0::part2(const std::string& input){
  return "blah";
}