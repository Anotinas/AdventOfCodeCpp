#if !defined(DAY_ZERO)
#define DAY_ZERO

#include <string>
#include <vector>

#include "Day.h"

class DayZero : public virtual Day {
public:
  const std::string part1(const std::string& input) const;
  const std::string part2(const std::string& input) const;
  const std::string getInput(int part) const;
  //const std::vector<bool> runTests(int part) const;
};

#endif //DAYZERO