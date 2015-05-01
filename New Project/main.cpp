/*************************************
 * Mansi Saini
 * 912556936
 * msaini@mail.sfsu.edu
 * Dev-C++ 5.9.2
 *************************************/
#include "budget_application.h"

int main(int argc, const char * argv[])
{
    Budget_Application app;

    while(app.is_running())
    {
        app.prompt_loop();
    }

    return 0;
}


