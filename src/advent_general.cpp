#include "advent_general.h"
#include <fstream>

    const std::string adventGeneral::getFileContents(const std::string& filePath) {
        std::ifstream ifs(filePath);
        return std::string( (std::istreambuf_iterator<char>(ifs)),
                            (std::istreambuf_iterator<char>()));
    }
    const std::string adventGeneral::getFilePath(int day, int part) {
        return "input/day" + std::to_string(day) + "/part_" + std::to_string(part) +".txt";
    }