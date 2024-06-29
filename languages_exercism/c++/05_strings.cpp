#include <string>

namespace log_line {
    std::string message(std::string line) {
        size_t colon = line.find(": ");
        std::string message = line.substr(colon + 2);
        return message;
            
    }

    std::string log_level(std::string line) {
        size_t startBracket = line.find('[');
        size_t endBracket = line.find(']');
        std::string logLevel = line.substr(startBracket + 1, endBracket - startBracket - 1);
        return logLevel;
    }

    std::string reformat(std::string line) {
        size_t startBracket = line.find('[');
        size_t endBracket = line.find(']');
        size_t colon = line.find(": ");
        std::string logLevel = line.substr(startBracket + 1, endBracket - startBracket - 1);
        std::string message = line.substr(colon + 2);
        std::string reformattedLogLine = message + " (" + logLevel + ")";
        return reformattedLogLine;
    }
}
