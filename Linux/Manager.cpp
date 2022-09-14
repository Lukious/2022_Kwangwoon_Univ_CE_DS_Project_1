#include "Manager.h"
#include <cstring>

Manager::~Manager()
{
    if (fout.is_open())
        fout.close();

    if (ferr.is_open())
        ferr.close();
}

void Manager::Run(const char* filepath)
{
    fout.open(RESULT_LOG_PATH);
    ferr.open(ERROR_LOG_PATH);

    // TODO: implement
}
void Manager::PrintError(Result result)
{
    ferr << "Error code: " << result << std::endl;
}


Result Manager::Load(const char* filepath)
{
    // TODO: implement
}

Result Manager::Print()
{
    // TODO: implement
}