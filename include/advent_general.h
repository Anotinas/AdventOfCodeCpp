#if !defined(ADVENT_GENERAL)
#define ADVENT_GENERAL

#include "Day.h"

#include <string>
#include <optional>

namespace adventGeneral {
    const void runDay(int day, int part, bool isTestingEnabled);
    const void runAllDays(int part, bool isTestingEnabled);
    const std::string runPart(const Day& day, int part, bool isTestingEnabled);
}

#endif //ADVENT_GENERAL