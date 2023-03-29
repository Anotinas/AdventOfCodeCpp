#include "day0.h"
#include "advent_general.h"

#include <iostream>
#include <vector>

int main(int argc, char const *argv[])
{
    bool enable_tests = false;
    //-1 signifies that there is no chosen value for 
    int day = -1;
    int part = -1;

    if (day == -1 && argc > 1)
    {
        day = std::atoi(argv[1]);
        std::cout << "Day:" << day << "\n";
    }

    if (day != -1 && argc > 2)
    {
        part = std::atoi(argv[2]);
        std::cout << "Part:" << part << "\n";
    }

    adventGeneral::runDay(day, part, enable_tests);
    return 0;
}
