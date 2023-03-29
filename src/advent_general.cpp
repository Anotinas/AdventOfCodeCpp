#include "advent_general.h"
#include "day0.h"

#include <fstream>
#include <optional>
#include <iostream>
#include <string>


    const std::string adventGeneral::getFileContents(const std::string& filePath) {
        std::ifstream ifs(filePath);
        return std::string( (std::istreambuf_iterator<char>(ifs)),
                            (std::istreambuf_iterator<char>()));
    }

    const std::string adventGeneral::getFilePath(int day, int part) {
        return "../input/day" + std::to_string(day) + "/part_" + std::to_string(part) +".txt";
    }

    const void adventGeneral::runAllDays(int part) {
        runPart(DayZero(), part, adventGeneral::getFileContents(adventGeneral::getFilePath(0, -1)));
    }

    const std::string adventGeneral::runPart(const Day& day, int part, const std::string& input) {
            std::string output = "";
            if (part == 1 || part == -1)
            {
                std::cout << "Output for part 1\n" << day.part1(input) << "\n";
            }
            if (part == 2 || part == -1) 
            {
                std::cout << "Output for part 2\n" << day.part2(input) << "\n";
            }
            return output;
    }

    const std::string adventGeneral::runDay(int day, int part){
        //TODO have a pointer/optional for Day and then set that depending on dayNmbr
        const std::string input = adventGeneral::getFileContents(adventGeneral::getFilePath(day, part));

        std::string output = "";

        switch (day)
        {
        case -1: //Run all days

            break;
        case 0:
            runPart(DayZero(), part, input);
            break;
        case 3:
            //TODO
            break;
        default:
            std::cout << "Functionality for day:%x has not been added\n";
            break;
        }
        return output;
    }