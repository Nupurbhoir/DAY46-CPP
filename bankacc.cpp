#include <iostream>
#include <string>

class BankAccount {
private:
    std::string accountHolderName;
    std::string accountNumber;
    double balance;

public:
    // Constructor
    BankAccount(std::string name, std::string number) 
        : accountHolderName(name), accountNumber(number), balance(0.0) {}

    // Deposit function
    void credit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposited: Rs." << amount << "\n";
        } else {
            std::cout << "Invalid deposit amount.\n";
        }
    }

    // Withdraw function
    void debit(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            std::cout << "Withdrew: Rs." << amount << "\n";
        } else {
            std::cout << "Invalid withdraw amount.\n";
        }
    }

    // Function to display balance
    void displayBalance() const {
        std::cout << "Current balance: Rs." << balance << "\n";
    }
};
int main() {
    BankAccount account("nupur bhoir", "123456789");
    
    account.credit(500);
    account.displayBalance();
    
    account.debit(200);
    account.displayBalance();
    
    account.debit(400); 
    account.displayBalance();

    return 0;
}