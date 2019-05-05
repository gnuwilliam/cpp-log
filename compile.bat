@ECHO Cleaning files...
@rm -f bin/log.exe

@ECHO Compiling files...
@g++.exe -o bin/log src/*.cpp

@ECHO Finished compiling
