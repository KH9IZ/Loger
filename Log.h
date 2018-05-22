#include <string>
#include <iostream>

class Log {
private:
    void info(std::string message);
    void debug(std::string message);
    void warn(std::string message);
    void crit(std::string message);
};


