#include<iostream>
using namespace std;

class Time{
   int seconds;
     public :
       void minute (int a){
       a = seconds;
       }
       void getData (){
      
       }
    
};

int main(){
cout<<"From Seconds to HH:MM:SS" << endl;

int sec;
 cout << "Enter seconds : ";
 cin >> sec;

 int h;
  h = sec / 3600 ;

  int m;
  m = (sec % 3600) / 60 ;

  int s;
  s = ( sec % 60) ;

  cout << h << ":" << m << ":" << s << endl; 

cout<<"From HH:MM:SS to Seconds" << endl;
int hour;
 cout << "Enter hour : ";
 cin >> hour;

 int minute;
 cout << "Enter minute : ";
 cin >> minute;

  int second;
 cout << "Enter seconds : ";
 cin >> second;

int a = hour * 3600;
int b = minute * 60;

cout << "Total second " << a + b + second ;





}
      