#include "Truck.h"
#include "Brend.h"
#include "Motor.h"
using namespace D4;

void Truck::Inform()
{
	std::cout << __FUNCSIG__ << std::endl << "Contains information about the type of truck and payload" << std::endl;
}

Truck::Truck(): typetruck(TypeTruck::CARTRANSPORTERS), Payload(0)
{
	Brend::Brend();
	Motor::Motor();
}

Truck::Truck(const TypeTruck& typetruck, const int& Payload, const int& WheelRadius, const int& MaxSpeed, const int& Weight, const std::string& Name, const std::string& Country, const TypeMotor& typemotor, const Structure& structure, const int& Size, const int& NumberOfCylinders) :
	typetruck(typetruck), Payload(Payload)
{
	Brend::Brend(Name, Country, WheelRadius, MaxSpeed, Weight);
	Motor::Motor(typemotor, structure, Size, NumberOfCylinders);
}


TypeTruck Truck::GetTypeTruck()
{
	return typetruck;
}

int Truck::GetPayload()
{
	return Payload;
}

