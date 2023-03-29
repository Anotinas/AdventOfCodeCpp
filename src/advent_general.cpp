#include "advent_general.h"
#include "day0.h"

#include <optional>
#include <iostream>
#include <string>

    //Everytime a functionality for a new day is added, it needs to be added here
    const void adventGeneral::runAllDays(int part, bool isTestingEnabled) {
        runPart(DayZero(), part, isTestingEnabled);
    }

    //TODO, Add Test running
    const std::string adventGeneral::runPart(const Day& day, int part, bool isTestingEnabled) {
            std::string output = "";
            if (part == 1 || part == -1)
            {
                std::cout << "Output for part 1\n" << day.part1(day.getInput(1)) << "\n";
            }
            if (part == 2 || part == -1) 
            {
                std::cout << "Output for part 2\n" << day.part2(day.getInput(2)) << "\n";
            }

            return output;
    }

    const void adventGeneral::runDay(int day, int part, bool isTestingEnabled){

        switch (day)
        {
        case -1: //Run all days
            runAllDays(part, isTestingEnabled);
            break;
        case 0:
            runPart(DayZero(), part, isTestingEnabled);
            break;
        case 3:
            //TODO
            break;
        default:
            std::cout << "Functionality for day:%x has not been added\n";
            break;
        }
    }