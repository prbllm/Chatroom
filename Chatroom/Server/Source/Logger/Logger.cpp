#include "Include/Logger/Logger.h"
#include <iostream>
#include <fstream>

namespace Logger
{
    Logger* Logger::Instance()
    {
        static Logger instance;
        return &instance;
    }

    void Logger::SetLoggerType(LoggerType type)
    {
        _type = type;
    }

    LoggerType Logger::GetLoggerType() const
    {
        return _type;
    }

    void Logger::WriteMessage(const String &message) const
    {
        if (_type == LoggerType::Console)
        {
            std::cout << STR(message) << std::endl;
            return;
        }

        if (_type == LoggerType::File)
        {
            return;
        }
    }

    Logger::Logger() = default;

    Logger::~Logger() = default;
}
