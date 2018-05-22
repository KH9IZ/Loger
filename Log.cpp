//
// Created by knyaz on 19.05.2018.
//

#include "Log.h"

class Log {
private:
    void info(std::string message);
    void debug(std::string message);
    void warn(std::string message);
    void crit(std::string message);
    Log(std::string name);
    ~Log();

private:
    std::string name;
};

Log::Log(std::string name) {
    this->name = name;
}

Log::~Log() {
    std::cout << "Log " << name << " destroyed" << std::endl;
}

void Log::info(std::string message) {
    std::cout << "Log " << name << " destroyed" << std::endl;
}

void Log::debug(std::string message) {

}

void Log::warn(std::string message) {

}

void Log::crit(std::string message) {

}
