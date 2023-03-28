#include <iostream>
#include "day0.h"
#include "advent_general.h"

int main(int argc, char const *argv[])
{
    const std::string input = adventGeneral::getFileContents(adventGeneral::getFilePath(0,1));

    const std::string output = day0::part1(input);
    return 0;
}
