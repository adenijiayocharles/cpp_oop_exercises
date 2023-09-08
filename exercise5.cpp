// Write a C++ program to implement a class called BankAccount that has private member variables for account number and balance. Include member functions to deposit and withdraw money from the account.

#include <iostream>

class BankAccount
{
private:
    std::string accountNumber;
    double balance;

public:
    BankAccount(std::string accountNo, double money)
    {
        accountNumber = accountNo;
        balance = money;
        std::cout << "========================================================" << std::endl;
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Current Balance: " << balance << std::endl;
    }

    void depositMoney(double money)
    {
        std::cout << "========================================================" << std::endl;
        balance = balance + money;
        std::cout << "Money deposited successfully" << std::endl;
        std::cout << "Current Balance: " << balance << std::endl;
    }

    void checkAccountBalance()
    {
        std::cout << "========================================================" << std::endl;
        std::cout << "Current Balance: " << balance << std::endl;
    }

    void withdrawMoney(double money)
    {
        std::cout << "========================================================" << std::endl;
        if (balance >= money)
        {
            balance = balance - money;
            std::cout << "Amount withdrawn: " << money << std::endl;
            std::cout << "Your current balacnce is: " << balance << std::endl;
        }
        else
        {
            std::cout << "Unable to withdraw \nInsufficient balance: " << balance << std::endl;
        }
    }
};

int main()
{
    BankAccount bankAccount("0153115359", 30000);

    // deposit money into account
    bankAccount.depositMoney(4500);
    bankAccount.depositMoney(600);

    // check balance
    bankAccount.checkAccountBalance();

    // withdraw
    bankAccount.withdrawMoney(20000);

    // withdraw
    bankAccount.withdrawMoney(20000);

    return 0;
}