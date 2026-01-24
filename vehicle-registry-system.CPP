#include <iostream>
#include <string>
using namespace std;

class Vehicle {
protected:
    int vehicleID;
    string manufacture;
    string model;
    int year;
    string fueltype;
    int batterycapacity;
    int topspeed;
    int flightrange;
public:
    void setVehicle(int id, string manu, string mod, int y) {
        vehicleID = id;
        manufacture = manu;
        model = mod;
        year = y;
    }

    int getID() {
        return vehicleID;
    }

    void displayVehicle() {
        cout << "Vehicle ID: " << vehicleID << endl;
        cout << "Manufacturer: " << manufacture << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }

    void getdata(){
          int id, year,battery;
            string manu, model, fuel;
            cout << "Enter Vehicle ID: ";
            cin >> id;
            cout << "Enter Manufacturer: ";
            cin >> manu;
            cout << "Enter Model: ";
            cin >> model;
            cout << "Enter Year: ";
            cin >> year;
    }
};

class Car : public Vehicle {
public:
    void setCar(int id, string manu, string mod, int y, string fuel) {
        setVehicle(id, manu, mod, y);
        fueltype = fuel;
    }

    void displayCar() {
        displayVehicle();
        cout << "Fuel Type: " << fueltype << endl;
    }

    
};
class ElectricCar : public Car {
public:
    void electriccar(int id, string manu, string mod, int y, string fuel, int battery) {
        setCar(id, manu, mod, y,fuel);
        batterycapacity=battery;
    }

    void displayelectriccar() {
          cout << "Electric Car " << endl;
        displayCar();
        cout << "Battery Capacity is : " << batterycapacity << "kWh" << endl;
    }
};



class Sportscar : public ElectricCar {
public:
    void sportscar(int id, string manu, string mod, int y, string fuel, int battery, int speed) {
         electriccar(id, manu, mod, y, fuel, battery);
        topspeed=speed;
    }

    void displaysportscar() {
        cout << "Sports Car " << endl;
        displayelectriccar();
        cout << "Top Speed is :  " << topspeed << "km/h" << endl;
    }
};



class Sedan : public Car {
public:
    void sedancar(int id, string manu, string mod, int y, string fuel) {
        setCar(id, manu, mod, y,fuel);

    }

    void displaysedan() {
          cout << "Sedan Car " << endl;
        displayCar();
    }
};


class Suv : public Car {
public:
    void suvcar(int id, string manu, string mod, int y, string fuel) {
        setCar(id, manu, mod, y,fuel);

    }

    void displaysuv() {
        cout << "SUV Car " << endl;
        displayCar();
    }
};


class Aircraft : public Vehicle {
public:
    void aircraft(int id, string manu, string mod, int y, string fuel, int range) {
        setVehicle(id, manu, mod, y);
        flightrange = range;
    }

    void displayaircraft() {
        displayVehicle();
        cout << "Flight range is : " << flightrange << endl;
    }
};


int main() {
    ElectricCar cars[100];     // ARRAY OF OBJECTS
    Sportscar car[100];     // ARRAY OF OBJECTS
    Sedan car1[100];     // ARRAY OF OBJECTS
    Suv car2[100]; 
    Aircraft craft[100];  
    int carscount = 0, carcount = 0, car1count = 0, car2count = 0 , craftcount = 0;
    int choice;
    int count;

 
cars[carscount++].electriccar(101, "Tesla", "Model3", 2022, "Electric", 75);
car[carcount++].sportscar(201, "Porsche", "Taycan", 2023, "Electric", 93, 260);
car1[car1count++].sedancar(301, "Toyota", "Camry", 2021, "Petrol");


    do {
        cout << "\n===== VEHICLE MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Electric Car\n";
        cout << "2. Add Electric Sports Car\n";
        cout << "3. Add Sedan Car\n";
        cout << "4. Add SUV Car\n";
        cout << "5. Add Aircraft\n";
        cout << "6. View All Vehicles\n";
        cout << "7. Search Vehicle by ID\n";
        cout << "8. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            int id, year,battery;
            string manu, model, fuel;
            cars->getdata();
            cout << "Enter Fuel Type: ";
            cin >> fuel;
            cout << "Enter Battery Capacity: ";
            cin >> battery;
        
            cars[carscount].electriccar(id, manu, model, year, fuel, battery);
            carscount++;

            cout << "Vehicle added successfully!\n";
            break;
        }

        case 2: {
            int id, year,battery,speed;
            string manu, model, fuel;
            car->getdata();
            cout << "Enter Fuel Type: ";
            cin >> fuel;
            cout << "Enter Battery Capacity: ";
            cin >> battery;
            cout << "Enter Top Speed: ";
            cin >> speed;

            car[carcount].sportscar(id, manu, model, year, fuel, battery,speed);
            carcount++;

            cout << "Vehicle added successfully!\n";
            break;
        }

        case 3: {
            int id, year;
            string manu, model, fuel;
            car1->getdata();
            cout << "Enter Fuel Type: ";
            cin >> fuel;

            car1[car1count].sedancar(id, manu, model, year, fuel);
            car1count++;

            cout << "Vehicle added successfully!\n";
            break;
        }

           case 4: {
            int id, year;
            string manu, model, fuel;
            car2->getdata();
            cout << "Enter Fuel Type: ";
            cin >> fuel;

            car2[car2count].suvcar(id, manu, model, year, fuel);
            car2count++;

            cout << "Vehicle added successfully!\n";
            break;
        }

           case 5: {
            int id, year, range;
            string manu, model, fuel;
            craft->getdata();
            cout << "Enter Fuel Type: ";
            cin >> fuel;
            cout << "Enter flight range : ";
            cin >> range;

            craft[craftcount].aircraft(id, manu, model, year, fuel,range);
            craftcount++;

            cout << "Vehicle added successfully!\n";
            break;
        }

        case 6:
        count = carscount + carcount + car1count + car2count + craftcount;
            if (count == 0) {
                cout << "No vehicles available.\n";
            } 
            
            else {

        for (int i = 0; i < carscount; i++) {
             cout << "\n--- Electric Car " << i + 1 <<"---\n";
            cars[i].displayelectriccar();
        }

        for (int i = 0; i < carcount; i++) {
                cout << "\n--- Sports Car " << i + 1 <<"---\n";
            car[i].displaysportscar();
        }

        for (int i = 0; i < car1count; i++) {
            cout << "\n--- Sedan Car " << i + 1 <<"---\n";
            car1[i].displaysedan();
        }

        for (int i = 0; i < car2count; i++) {
                cout << "\n--- SUV Car " << i + 1 <<"---\n";
            car2[i].displaysuv();
        }

        for (int i = 0; i < craftcount; i++) {
            cout << "\n--- Aircraft " << i + 1 <<"---\n";
            craft[i].displayaircraft();
        }}
            break;


        case 7: {
            int searchID;
            bool found = false;

            cout << "Enter Vehicle ID to search: ";
            cin >> searchID;


                for (int i = 0; i < carscount; i++){
                  if (cars[i].getID() == searchID) {
                    cout << "\nVehicle Found:\n";
                    cars[i].displayelectriccar();
                    found = true;
                    break;
                }}

                for (int i = 0; i < carcount; i++){
                  if (car[i].getID() == searchID) {
                    cout << "\nVehicle Found:\n";
                    car[i].displaysportscar();
                    found = true;
                    break;
                }}
                for (int i = 0; i < car1count; i++){
                  if (car1[i].getID() == searchID) {
                    cout << "\nVehicle Found:\n";
                    car1[i].displaysedan();
                    found = true;
                    break;
                }}
                for (int i = 0; i < car2count; i++){
                  if (car2[i].getID() == searchID) {
                    cout << "\nVehicle Found:\n";
                    car2[i].displaysuv();
                    found = true;
                    break;
                }}
               for (int i = 0; i < craftcount; i++){
                  if (craft[i].getID() == searchID) {
                    cout << "\nVehicle Found:\n";
                    craft[i].displayaircraft();
                    found = true;
                    break;
                }}

           

            if (!found) {
                cout << "Vehicle not found!\n";
            }
            break;
        }

        case 8:
            cout << "Exited successfully.\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 8);

    return 0;
}
