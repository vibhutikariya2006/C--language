#include<iostream>
using namespace std;
// ------------Question-1-----------------//
class Student {
private:
   string name;
   int rollnumber;

   public:
      void studentdata(string names, int rollnum ){
        name = names;
        rollnumber = rollnum;
        cout << "---------Student---------"<< endl;
        cout << "Name : " << name << endl;
        cout << "Roll Number : " << rollnumber << endl;

      }
};

// ------------Question-2-----------------//
class Car{
private:
  string model;
  int year;
  int speed;

public:
   void setdata(string mod, int years, int speeds){
    model = mod;
    year = years;
    speed = speeds;
    cout << "---------Car---------"<< endl;
    cout << "Car Model : "<< model <<endl;
    cout << "Car Year : "<< year <<endl;
    cout << "Car speed : "<< speed <<"km/h"<<endl;
   }


};


  // ------------Question-3-----------------//
  class Device{
  protected:
   string brand;
   int powerconsumption;
  };

  class Laptop : public Device{
    public:
    void setlaptop(string brands, int power){
      brand = brands;
      powerconsumption = power;
      
      cout << "---------Laptop---------"<< endl;
      cout << "Laptop brand : "<< brand <<endl;
      cout << "Laptop power consumption : "<< powerconsumption  << "W" <<endl;

   

    } ;

       void Discount(){
     
      cout << " Laptop {" << brand <<"} :5% " << endl;
    };

   
  };

  class Smartphone : public Device{
    public:
    void setphone(string brands, int power){
      brand = brands;
      powerconsumption = power;
      
      cout << "---------Smartphone---------"<< endl;
      cout << "Smartphone brand : "<< brand <<endl;
      cout << "Smartphone power consumption : "<< powerconsumption << "W" <<endl;

    } 

    void calculateDiscount(){
     
      cout << " Smartphone {" << brand <<"} : 15% " << endl;
    }
  };

  // ------------Question-5-----------------//
  class Animal {
    protected:
       string sound;
       string move;
   public:
      void makeSound(string sounds){
        sound = sounds;
      };
      void makeMove(string moves){
        move = moves;
      };
     
  };

  class Lion : public Animal{
   public :
      void lion(){
        makeSound("roar");
        cout << "Lion(sound) : "  << sound << endl;
        makeMove("prawl");
        cout << "Lion(movement) : "  << move << endl;
      }
  };

    class Fish : public Animal{
   public :
      void fish(){
        makeSound("purrs");
        cout << "Fish(sound) : "  << sound << endl;
        makeMove("swim");
        cout << "Fish(movement) : "  << move << endl;
      }
  };

int main(){
  // ------------Question-1-----------------//
 Student s[4];
  s[0].studentdata("Vibhuti", 100);
  s[1].studentdata("Hemangi", 101);
  s[2].studentdata("Hiral", 102);
  s[3].studentdata("Reena", 103);
 cout << endl;

  // ------------Question-2-----------------//

 Car c[3];
 c[0].setdata("XUV ", 2024, 200);
 c[1].setdata("Alcazar ", 2022, 160);
 c[2].setdata("BMW ", 2020, 180);
cout << endl;

   // ------------Question-3-----------------//

   Laptop l[3];
   l[0].setlaptop("Apple ",25);
   l[1].setlaptop("Lenovo ",45);
   l[2].setlaptop("Dell ",50);
   cout << endl;


    Smartphone p[3];
   p[0].setphone("Samsung ",45);
   p[1].setphone("Vivo ",70);
   p[2].setphone("Oppo ",80);

    // ------------Question-4-----------------//
      cout << " Discount on Laptop " << endl;
   for (int i =0; i<3; i++ ){
    l[i].Discount();}

    cout<< endl << " Discount on Smartphone " << endl;
   for (int i =0; i<3; i++ ){
    p[i].calculateDiscount();
   }

   // ------------Question-5-----------------//
   Lion i;
   i.lion();
   cout << endl;
   Fish f;
   f.fish();

  };
