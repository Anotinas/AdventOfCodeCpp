#if !defined(ADVENT_GENERAL)
#define ADVENT_GENERAL

#include "Day.h"

#include <string>
#include <optional>

namespace adventGeneral {
    const std::string getFileContents(const std::string& filePath);
    const std::string getFilePath(int day, int part);
    const std::string runDay(int day, int part);
    const void runAllDays(int part);
    const std::string runPart(const Day& day, int part, const std::string& input);

}

#endif //ADVENT_GENERAL