/*************************************
 * Mansi Saini
 * 912556936
 * msaini@mail.sfsu.edu
 * Dev-C++ 5.9.2
 *************************************/
#ifndef budget_application__H
#define budget_application__H

#include "budget.h"
#include "menu.h"
#include "envelope.h"
#include "account.h"
#include "budget.h"
#include <fstream>
#include <iostream>

class Budget_Application
{

private:
    Budget budget;
    Menu menu;
    int get_account();
    double add_to_account();
    double spend_from_account();
    void process_menu_selection();

public:
    Budget_Application();
    ~Budget_Application();
    bool is_running();
    void prompt_loop();
    

};

#endif /* defined(budgetapplication__H) */

