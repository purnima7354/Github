#include <iostream>
using namespace std;
class BankAccount {
private:
    string accountNumber;
    double balance;
    static int totalTransactions;

public:
    BankAccount(string accNumber , double initialBalance) : accountNumber(accNumber), balance(initialBalance) {}

    void deposit(double amount) {
        balance += amount;
        totalTransactions++;
    }

    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            totalTransactions++;
        } else {
            cout << "Insufficient funds!" << endl;
        }
    }

    double getBalance() const {
        return balance;
    }

    static int getTotalTransactions() {
    	
        return totalTransactions;
    
}
void display() const {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }

};

int BankAccount::totalTransactions = 0;

int main() {
    BankAccount acc1("743919578", 12000);
    BankAccount acc2("498756165", 800);
    BankAccount acc3("238755657", 944);
    BankAccount acc4("755756772", 8642);

    acc1.deposit(1000);
    acc2.withdraw(400);
    acc3.withdraw(300);
    acc4.withdraw(500);
    cout << "Total transactions: " << BankAccount::getTotalTransactions() << endl;

// Displaying account information

    acc1.display();
    acc2.display();
    acc3.display();
    acc4.display();
    return 0 ;
}

