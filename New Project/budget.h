/*************************************
 * Mansi Saini
 * 912556936
 * msaini@mail.sfsu.edu
 * Dev-C++ 5.9.2
 *************************************/
#ifndef Budget__H
#define Budget__H

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <vector>

#include "account.h"
#include "envelope.h"


using namespace std;

class Budget
{

public:
    string user_name;
    string title;
    string account_title;
    int account_id;
    double amount;
    int month;
    int year;
    //using Account/Envelope as a data type
    vector<Account> accounts;
    vector<Envelope> envelopes;
    int acc_counter = 0, env_counter = 0;
    // Default Constructor
    Budget();
    void show_budget();
    void account_transaction(int,double);
  

   friend ifstream& operator >> (ifstream&, Budget&);
   friend ofstream& operator << (ofstream&, const Budget&);
   friend ostream& operator << (ostream&, const Budget&);

   void show_envelopes();
   void add_account(int account_id, string account_title);

   void set_current_date(int month, int year);

};

#endif /* defined(Budget__H) */


