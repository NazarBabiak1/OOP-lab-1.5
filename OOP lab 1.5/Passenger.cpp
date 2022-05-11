#include "Passenger.h"
using namespace D3;

void Passenger::Inform()
{
	std::cout << __FUNCSIG__ << std::endl << "Contains information about the type of passenger car and the number of seats" << std::endl;
}

Passenger::Passenger(): typepassenger(TypePassenger::CABRIOLET),NumberOfSeats(0)
{
}

Passenger::Passenger(const TypePassenger& typepassenger, const int& NumberOfSeats, const int& WheelRadius, const int&MaxSpeed, const int&Weight, const std::string&Name, const std::string&Country, const TypeMotor& typemotor, const Structure& structure, const int& Size, const int& NumberOfCylinders):
	typepassenger(typepassenger), NumberOfSeats(NumberOfSeats)
{
	Brend::Brend(Name, Country, WheelRadius, MaxSpeed, Weight);
	Motor::Motor(typemotor, structure, Size, NumberOfCylinders);
}


TypePassenger Passenger::GetTypePassenger()
{
	return typepassenger;
}

int Passenger::GetNumberOfSeats()
{
	return NumberOfSeats;
}



