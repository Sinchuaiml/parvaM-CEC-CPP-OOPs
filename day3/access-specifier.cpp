#include<iostream>
using namespace std;

class Bank{
    private:
        int balance=0;
    public:
    //member data of the class
        string custName, custEmail;
        int acNumber;
    
        void createAccount(string cName , string cEmail){
            custName = cName;
            custEmail = cEmail;
        }

       void displayInfo(){
            cout << "customer Name:" << custName << endl;
            cout << " customer Email" << custEmail << endl;
        }

       void addBalance(int account, int amount){
            balance += amount;
            cout << " the amount has been deposited successfully!"<<endl;
        }
        void withdrawAmount(int account, int amount){
            balance -= amount;
            cout << " the amount has been withdrawn successfully!"<<endl;
        }
        void checkBalance(){
             cout << " Bank Balance: " << balance << endl;
        }
}; 

int main(){
    Bank cust1; //object declared
    string name , email;
    int acNum, amount;
    // cust1.balance = 8000; 

    cout << "enter your name:";
    cin >> name;
    cout << " enter your email id:";
    cin >> email;
    cout << "enter your account number:";
    cin >> acNum;
    cout << " enter the amout to be deposited:";
    cin >> amount;


    cust1.createAccount(name,email);
    cust1.displayInfo();
    cust1.addBalance(acNum, amount);
    cust1.checkBalance();

    cout << "enter the amount to be withdraw:";
    cin >> amount;
    cust1.withdrawAmount(acNum,amount);
    cust1.checkBalance();
}