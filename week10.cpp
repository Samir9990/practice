#include <iostream>
#include <cstring>
using namespace std;
class BankAccount{
private:
    string accountNumber;
    double balance;
public:

    BankAccount(const string  accNum , double initialBalance): accountNumber(accNum),
    balance(initialBalance){}

    void deposit(double amount){
        balance += amount;
     cout<<"Deposit secceSsfull . Current balance: " << balance << endl;
    }
     void withdraw(double amount){
        if(amount <= balance){
            balance -= amount;
            cout<< "Withdrawall successful . Current balance: "<< balance << endl;
        }
        else{
            cout<< "Insufficient balance. Cannot withdraw. " << endl;
        }
     }
};
int main(){
    string orient = ("SB-777");
    double Opening_balance, deposit_amt, withdrawall_amt;
    Opening_balance = 1000;
    cout << "A/c. No. "<< orient <<"Balance: "<<Opening_balance<< endl;

    BankAccount account(orient, 1000.0);
    deposit_amt = 1500;

    withdrawall_amt = 750;
    cout<<"Withdrawl Amount:" <<withdrawall_amt << endl;
    account.withdraw(withdrawall_amt);

    withdrawall_amt = 1800;
    cout<<"Attempt to withdrawl Amount:" << withdrawall_amt<< endl;
    account.withdraw(withdrawall_amt);

    return 0 ;
}

