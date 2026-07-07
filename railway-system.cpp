#include <iostream>
using namespace std;

class Trainclass
{
private:
    int trainnumber;
    char trainName[50];
    char source[100];
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
        
        cout << "Train Added Successfully!" << endl;

    }

    void class2(){
        cout<< endl<<"---Train Details---"<<endl;
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

        cout<< endl<<"---Train Details---"<<endl;
        cout << "Enter trainnumber : " << trainnumber << endl;
        cout << "Enter trainName : " << trainName << endl;
        cout << "Enter source : " << source << endl;
        cout << "Enter destination : " << destination << endl;
        cout << "Enter traintime : " << traintime << endl;
        }
        else
        {
            cout << "Train with number " << a << " is not found" << endl;
        }
    }

    void class4()
    {
        cout << "Exiting the system. Thank You! " << endl;
    }
};

int main(){

    int choice;
    Trainclass s1;
    do{
         cout << "Enter your choice: ";
        cin >> choice;
        if (choice == 1)
        {
            s1.class1();
        }
        else if (choice == 2)
        {
            s1.class2();
        }
        else if (choice == 3)
        {
         s1.class3();
        }
         else if (choice == 4)
        {
          s1.class4();
        }
        else
		{
			cout << "Wrong choice entered." << endl;
		}
    }while(choice != 4);
return 0;
}
