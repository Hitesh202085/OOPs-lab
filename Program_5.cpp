#include <iostream> 
using namespace std;

class Account {
    private:           // private members (only accessed by class methods)
    int Acc_no;
    string name;
    float balance;
    float Interest;
    
    public: 
    // Default constructor initializes basic details
    Account (){
        cout <<endl << "----Congratulations your account is successfully created----" << endl;
        Acc_no = 234545;
        name = "Hitesh Berwal";
        balance = 0;
        // Interest given by bank
        Interest = 0.06;   // 6% = 0.06 
    }

    void checkDetails (){
        cout << "Name : " << name << endl;
        cout << "Account no. : " << Acc_no << endl;
        cout << "Current balance : " << balance << endl;
    }
    // function to deposit money
    void depositMoney (){
        float amount;
        cout << endl << "Enter the amount you want to deposit " << endl;
        cin >> amount;
        balance += amount; 
        cout << "Your current balance is : " << balance << endl;
    }
    // function to withdraw money
    void withdrawMoney (){
        int amount;
        cout << endl << "Enter the amount you want to withdraw " << endl;
        cin >> amount;
        balance -= amount;
        // Diplay a message if balance is insuffucient
        if (balance < 1000){
            cout << "-----Your balance is low------ " << endl;
        }
        cout << "Your current balance is : " << balance << endl;
    }
    // This function calculates interest
    float calcInterest (){
        int time;
        cout << endl << "Enter the time(in years) for which you want to calculate Interest " << endl;
        cin >> time;
        float simpleInterest;
        simpleInterest = balance*Interest*time;

        cout << "Interest earned in " << time << " years is: " << simpleInterest << endl;
        cout << "Total balance after adding interest: " << (balance+simpleInterest) << endl;
    }
};

int main(){
    Account acc;
    acc.checkDetails();
    acc.depositMoney();
    acc.withdrawMoney();
    acc.calcInterest();
    return 0;
}