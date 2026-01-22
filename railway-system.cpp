#include <iostream>
using namespace std;

class Trainclass
{
private:
    int trainnumber;
    char trainName[50];
    char source[50];
    char destination[50];
    char traintime[10];

public:
    Trainclass(){
        cout << "--- Railway Reservation System Menu --- " << endl;
        cout << "1. Add New Train Record" << endl;
        cout << "2. Display All Train Records" << endl;
        cout << "3. Search Train by Number" << endl;
        cout << "4. Exit" << endl;
    };

    void class1(){
        cout << "Enter trainnumber : ";
        cin >> trainnumber;

        cout << "Enter trainName : ";
        cin >> trainName;

        cout << "Enter source : ";
        cin >> source;

        cout << "Enter destination : ";
        cin >> destination;

        cout << "Enter traintime : ";
        cin >> traintime;
    }

    void class2(){
        cout << "Enter trainnumber : " << trainnumber << endl;
        cout << "Enter trainName : " << trainName << endl;
        cout << "Enter source : " << source << endl;
        cout << "Enter destination : " << destination << endl;
        cout << "Enter traintime : " << traintime << endl;
    }

    void class3(){
        int a;
        cout << "Enter Train Number to search  : ";
        cin >> a;

        if (a == trainnumber)
        {
            cout << "Train with number " << trainnumber << "is found" << endl;
        }
        else
        {
            cout << "Train with number " << trainnumber << "is not found" << endl;
        }
    }

    void class4()
    {
        cout << "Exiting the system. Goodbye! " << endl;
    }
};

int main(){

    int choice;

    // Trainclass s;

    // while (choice)
    // {
    //     switch (choice)
    //     {
    //     case 1:
    //         s.class1();
    //         break;
    //     case 2:
    //         s.class2();
    //         break;
    //     case 3:
    //         s.class3();
    //         break;
    //     case 4:
    //         s.class4();
    //         break;
    //     }

    // }
    Trainclass s1;
    cout << "Enter your choice: ";
    cin >> choice;
   if(choice <= 4){
        while (choice != 4){
             Trainclass s1;
    cout << "Enter your choice: ";
    cin >> choice;
        if (choice == 1){
            s1.class1();
        }
        else if (choice == 2){
            s1.class2();
        }
        else if (choice == 3){
          s1.class3();
        }
         else if (choice == 4){
          s1.class4();
        }
    }
   }else{
       cout<<"Wrong choice entered";
   }
    
    // do{
    //      cout << "Enter your choice: ";
    //     cin >> choice;
    //     if (choice == 1)
    //     {
    //         s1.class1();
    //     }
    //     else if (choice == 2)
    //     {
    //         s1.class2();
    //     }
    //     else if (choice == 3)
    //     {
    //      s1.class3();
    //     }
    //      else if (choice == 4)
    //     {
    //       s1.class4();
    //     }
    // }while(choice != 4);
}
