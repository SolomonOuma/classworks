#include<iostream>
using namespace std;
//define a base class AccountHolder
class AccountHolder{
    protected:
    string name;
    
    public:
    void setName(string n){name=n;}
    string getName(){return name;}  
};
//define a derived class BankAccount that inherits AccountHolder
class BankAccount: public AccountHolder{
    private:
    int accountNumber;
    double balance;
    
    public:
    //create a constructor to initialize name ,accountNumber and balance by calling the base class constructor
    BankAccount(string n, int accN, double bal): AccountHolder(), accountNumber(accN), balance(bal){setName(n);}
    int getAccountNumber(){return accountNumber;}
    double getBalance(){return balance;}

    
};
class SavingsAccount: public BankAccount{ //initializes name accountNumber balance and interstRate by calling appropriate constructors
    private:
    double interestRate;
    public:
    SavingsAccount(string n, int accN, double bal, double intR):BankAccount(n,accN,bal), interestRate(intR){
        //since you called other constructor you dont need to 
        //name=n;
        //accountNumber=accN;
        //balance=bal;
        //interestRate=intR;

    }
    double getInterestRate(){return interestRate;}    
};
int main(){
    //create an object with constructor parameters
    SavingsAccount sa("Solomon", 325356, 50000.0, 0.25);
    cout << "Name: " << sa.getName() << endl;
    cout << "Account Number: " << sa.getAccountNumber() << endl;
    cout << "Balance: $" << sa.getBalance() << endl;
    cout << "Interest Rate: " << sa.getInterestRate() * 100 << "%" << endl;
    
    return 0;

}