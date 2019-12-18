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
    cout<<"\n\nPress Enter To Exit";
    std::getchar();

    //system("pause");
    return 0;
}