#include <iostream>

class Log
{
    public:
    enum Level {
        LevelInfo = 0,
        LevelError = 1,
        LevelWarning = 2
    };
    
    private:
    Level m_LogLevel;
    
    public:
    void SetLevel(Level level)
    {
        m_LogLevel = level;
    }
    
    void Info(const char* message)
    {
        if (m_LogLevel >= LevelInfo)
            std::cout << "[INFO]: " << message << std::endl;
    }
    
    void Warn(const char* message)
    {
        if (m_LogLevel >= LevelWarning)
            std::cout << "[WARNING]: " << message << std::endl;
    }
    
    void Error(const char* message)
    {
        if (m_LogLevel >= LevelError)
            std::cout << "[ERROR]: " << message << std::endl;
    }
};
