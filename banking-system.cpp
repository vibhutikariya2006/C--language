# include <iostream>
#include<string>
using namespace std;

class BankAccount{
protected :
     int AccountNumber;
     string AccountHolderName;
     int amount;

public: 
    void account(int number, string name, int amounts){
        AccountNumber = number;
        AccountHolderName = name;
        amount = amounts;
    }

    void deposit(double balance){
        balance += amount;
        cout << "Amount added successfully!"<< endl;
    }

    // void withdraw(double withdrawamount){
    //     withdrawamount;
    //     withdrawamount -= amount;
    //     cout << "Amount withdraw successfully!"<< endl;
    // }

    void getbalance(){
        cout << "Balance : " << amount << endl;
    }

    void displayAccountInfo(){
        cout << "Account Number : " << AccountNumber << endl;
        cout << "Account Holder Name : " << AccountHolderName << endl;
        cout << "Account Balance : " << amount << endl;
    }  
};

class SavingAccount : public BankAccount {
    protected:
    int interestrate;
    
    public: 
    void saving(int number, string name, int amounts, int rate){
        account( number,  name, amounts);
        interestrate = rate;
    }

    void calculateInterest(){
        amount += amount * 5 / 100;
        cout << "Total Amount with interest : " << amount << endl;
    }
     void savedisplay(){
        displayAccountInfo();
        calculateInterest();
     }

};

class CheckingAccount : public BankAccount{
     protected:
    int overdraftlimit;

    public:
     void checking(int number, string name, int amounts, int limit){
        account( number,  name, amounts);
        overdraftlimit = limit;
     };

     
        void withdraw(double withdrawamount){
            if(withdrawamount <= amount + overdraftlimit){
               amount -= withdrawamount;
               cout << "Withdrawal Successful !"<< endl;
            }
            else{
                cout<<"Overdraft limit exceeded !" << endl;
            };
     }

     void checkoverdraft(){
        cout << "Over Draft Limit is : " << overdraftlimit << endl;
     }
      void checkdisplay(){
        displayAccountInfo();
        checkoverdraft();
     }

};

class FixedDepositAccount : public BankAccount{
protected :
int term;
  public:
     void fixeddeposit(int number, string name, int amounts, int terms){
        account( number,  name, amounts);
        term = terms;
     };

     void calculateInterest(){
        term = term/12;
        amount += amount * 7 * term / 100;
        cout << "Total Amount with interest : " << amount << endl;

     }
     void fixedisplay(){
        displayAccountInfo();
        calculateInterest();
     }
};

int main(){
       SavingAccount s;
       CheckingAccount c;
       FixedDepositAccount fd;
       int number;
      string name;
      int activeAccount;
      int amounts; int limit; int rate; int terms;
       
       int choice;
       do{
        cout << "------- Banking System -------"<< endl;
        cout << "1. Create Saving Account "<< endl;
        cout << "2. Create Checking Account "<< endl;
        cout << "3. Create Fixed Deposit Account "<< endl;
        cout << "4. For Deposit "<< endl;
        cout << "5. For Withdraw "<< endl;
        cout << "6. Display all details "<< endl;
        cout << "7. Exit "<< endl;

       cout << "Enter Your Choice : ";
       cin >> choice;

    
     
       if(choice == 1 ||choice == 2 || choice == 3 ) {
        cout << "Enter your account number :  ";
        cin >> number;

        cout << "Enter account holder name :  " ;
        cin >> name;

        cout << "Enter your balance :  " ;
        cin >> amounts;
          
        if(choice == 1){
        cout << "Enter interest rate :  ";
        cin >> rate;
         s.saving(number,name,amounts,rate);
        activeAccount =1;
        }
        else if(choice == 2){
        cout << "Enter Overdraft Limit :  " ;
        cin >> limit;
         c.checking(number,name,amounts,limit);
         activeAccount = 2;
        }
        else{
           cout << "Enter terms (in month)  ";
          cin >> terms;
         fd.fixeddeposit(number,name,amounts,terms);   
         activeAccount = 3;
        }
       }
       else if(choice == 4){
        double deposit;
          cout << "Enter amount to deposit  ";
          cin >> deposit;
          s.deposit(deposit); 
       }
       else if(choice == 5){
        double deposit;
          cout << "Enter amount to withdraw  ";
          cin >> deposit;
          c.withdraw(deposit); 
       }
    else if(choice == 6){
    if(activeAccount == 1){
        s.savedisplay();
    }
    else if(activeAccount == 2){
        c.checkdisplay();
    }
    else if(activeAccount == 3){
        fd.fixedisplay();
    }
    else{
        cout << "No account created yet!" << endl;
    }
}

       else if (choice == 7){
        cout << "Exited Successfully!"<< endl;
       }

        else{
            cout << " invalid choice " << endl;
        }
     

     
          
       }while(choice != 7);
}