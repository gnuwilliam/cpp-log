#include <iostream>
#include "Log.cpp"

int main()
{
    std::cout << "hello, cpp" << std::endl;
   
    Log log;
    // log.SetLevel(log.LogLevelWarning);
    log.Warn("hello!");
    log.Info("this is info");
    log.Error("this is an error");
    
    return 0;
}
