#include "day0.h"
#include "advent_general.h"

#include <iostream>
#include <vector>

int main(int argc, char const *argv[])
{
    if( argc == 0){
        //Run all parts with tests
    }
    bool enable_tests = false;
    //-1 signifies that there is no chosen value for 
    int day = -1;
    int part = -1;
    for (size_t i = 0; i < argc; i++)
    {
        std::cout << "argument" << argv[i] << "\n";
        if (argv[i] == "t")
        {
           enable_tests = true;
           std::cout << "Testing has been enabled\n";
           continue;
        }

        if (day == -1)
        {
            day = std::atoi(argv[i]);
            std::cout << "Day:" << day << "\n";
            continue;
        }

        if (day != -1 && argv[i])
        {
            part = std::atoi(argv[i]);
            std::cout << "Part:" << part << "\n";
        }
    }

    adventGeneral::runDay(day, part);
    return 0;
}
