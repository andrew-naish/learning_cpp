#include <iostream>
#include "headers/account.hpp"
#include <vector>

using namespace std;

void ReportToConsole(vector<string> Input);

int main ()
{
    Account a1;

    a1.Deposit(90);
    cout << "After depositing 90cr " <<
        "balance is " << a1.GetBalance() << endl;
    ReportToConsole(a1.Report());

    a1.Withdraw(50);
    if (a1.Withdraw(100)){
        cout << "Withdraw 100 succeeds" << endl;
    }
    cout << "After withdrawing 50 then 100" << endl;
    ReportToConsole(a1.Report());
    
    return 0;
}

void ReportToConsole(vector<string> Input) {
    for (auto item:Input){
        cout << item << endl;
    }
}