#if !defined(DAY_VIRTUAL)
#define DAY_VIRTUAL

#include <string>

class Day {
public:
    virtual const std::string part1(const std::string& input) const = 0;
    virtual const std::string part2(const std::string& input) const = 0;
    virtual const std::string getInput(int part) const = 0;
};

#endif // DAY_VIRTUAL