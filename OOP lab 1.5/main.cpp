#include <iostream>
#include "Brend.h"
#include "Motor.h"
#include "Passenger.h"
#include "Truck.h"
using namespace std;

typedef unsigned short int uint;

void UseTruck(const int& Amount){
    D4::Truck *truck = new D4::Truck[Amount];

    uint temp;
    int Payload, WheelRadius, MaxSpeed, Weight,Size,NumberOfCylinders;
        string Name, Country;
    for (int i = 0; i < Amount; i++) {

        cout << "Account №" << i + 1 << ":\n\n";
        cout << "Enter the type of truck:\n(0)Tipper\n(1)Car transporter\n(2)Truck mixer\n(3)Tanker";
        cin >> temp;

        D4::TypeTruck typetruck;

        switch (temp)
        {
        case 0:
            typetruck = D4::TypeTruck::TIPPER;
            break;
        case 1:
            typetruck = D4::TypeTruck::CARTRANSPORTERS;
            break;
        case 2:
            typetruck = D4::TypeTruck::TRACKMIXERS;
            break;
        default:
            typetruck = D4::TypeTruck::TANKERS;
            break;
        }

        cout << "Enter a payload: ";
        cin >> Payload;
        cout << "Enter the wheel radius: ";
        cin >> WheelRadius;
        cout << "Enter the maximum speed: ";
        cin >> MaxSpeed;
        cout << "Enter the weight: ";
        cin >> Weight;
        cout << "Enter the name of the brand: ";
        cin >> Name;
        cout << "Enter the country: ";
        cin >> Country;

        cout << "Enter the type of motor:\n(0)DIESEL\n(1)GASOLINE\n(2)GAS\n(3)ELECTRIC";
        cin >> temp;

        D2::Motor::TypeMotor typemotor;
        switch (temp)
        {
        case 0:
            typemotor = D2::Motor::TypeMotor::DIESEL;
            break;
        case 1:
            typemotor = D2::Motor::TypeMotor::GASOLINE;
            break;
        case 2:
            typemotor = D2::Motor::TypeMotor::GAS;
            break;
        default:
            typemotor = D2::Motor::TypeMotor::ELECTRIC;
            break;
        }

        cout << "Enter the type of structure:\n(0)V\n(1)W\n(2)X\n(3)H";
        cin >> temp;

        D2::Motor::Structure structure;
        switch (temp)
        {
        case 0:
            structure = D2::Motor::Structure::V;
            break;
        case 1:
            structure = D2::Motor::Structure::W;
            break;
        case 2:
            structure = D2::Motor::Structure::X;
            break;
        default:
            structure = D2::Motor::Structure::H;
            break;
        }

        cout << "Enter the size of the motor: ";
        cin >> Size;
        cout << "Enter the number of cylinders: ";
            cin >> NumberOfCylinders;

            //D4::Truck temptruck(typetruck, Payload, WheelRadius, MaxSpeed, Weight, Name, Country, typemotor, structure, Size, NumberOfCylinders);
            truck[i] = *new D4::Truck(typetruck, Payload, WheelRadius, MaxSpeed, Weight, Name, Country, typemotor, structure, Size, NumberOfCylinders);

        system("pause");
        system("cls");
    }

    delete[] truck;
}

void UsePassenger(const int& Amount) {
    
}

int main()
{
    bool mode;
    int Amount;
    cout << "Work with a passenger(0) car or truck(1): ";
    cin >> mode;
    cout << "Enter the number of accounts: ;";
    cin >> Amount;
    system("cls");
    if (mode)
        UsePassenger(Amount);
    else
        UseTruck(Amount);
    return 0;
}
