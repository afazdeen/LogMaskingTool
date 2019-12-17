#include <map>
#include <string>
#include <iostream>
#include "CPlusPlusEntry.h"
#include <thread>

#include <iostream>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include "MemMan.h"
#include "Node.h"
#include "MetaData.h"
#include "ExecutionTemplateList.h"
#include "ExecutionContext.h"
#include "Int.h"
#include <iostream>
#include <memory>
#include <pthread.h>

using namespace std;

void ExecuteLDEL()
{
    CPlusPlusEntry cppEntry;
    cppEntry.RunDefault();
}


int main(int argc, const char * argv[])
{
    ExecuteLDEL();
    //system("pause");
    //system("start D:/99xProjects/Masktool/LogMaskingTool/LDAL/cmake-build-debug/FlexibleComputerLanguage1.exe")
    return 0;
}