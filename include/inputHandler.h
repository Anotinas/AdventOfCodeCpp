#if !defined(INPUT_HANDLER)
#define INPUT_HANDLER

#include <string>

const std::string getFileContents(const std::string& filePath);
const std::string getFilePath(int day, int part);

#endif // INPUT_HANDLER