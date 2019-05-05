#include <iostream>

class Log
{
    public:
    const int LogLevelInfo = 0;
    const int LogLevelError = 1;
    const int LogLevelWarning = 2;
    
    private:
    int m_LogLevel;
    
    public:
    void SetLevel(int level)
    {
        m_LogLevel = level;
    }
    
    void Info(const char* message)
    {
        if (LogLevelInfo >= 0)
            std::cout << "[INFO]: " << message << std::endl;
    }
    
    void Warn(const char* message)
    {
        if (LogLevelWarning >= 0)
            std::cout << "[WARNING]: " << message << std::endl;
    }
    
    void Error(const char* message)
    {
        if (LogLevelError >= 0)
            std::cout << "[ERROR]: " << message << std::endl;
    }
};
