
#include <iostream>
#include<string>


using namespace std;


class BankAccount{
    public:
    string name;
    int balance;
    void withdraw (int amount){
        balance -= amount;
    }
    private:
    

};