#define _CRT_SECURE_NO_WARNINGS
#ifndef SOLUTION_H
#define SOLUTION_H

#include "Result.h"
#include <fstream>

class Manager
{
private:
    // the filepath for the result log
    const char* RESULT_LOG_PATH = "log.txt";
    

    std::ofstream fout;


public:
    ~Manager();
    void Run(const char* filepath);
    void PrintError(Result result);

private:
    Result Load(const char* filepath);

};

#endif
