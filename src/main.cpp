#include <iostream>
#include "Log.cpp"

int main()
{
    Log log;
    log.SetLevel(Log::LevelWarning);
    log.Info("this is some info");
    log.Warn("this is a warning");
    log.Error("this is an error");
    
    return 0;
}
