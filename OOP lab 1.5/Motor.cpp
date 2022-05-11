#include "Motor.h"
#include "Vehicle.h"
using namespace D2;
using namespace B;

void Motor::Inform()
{
	std::cout << __FUNCSIG__ << std::endl << "Contains information about the type of motor, structure, size and number of cylinders" << std::endl;
}

Motor::Motor(): typemotor(TypeMotor::DIESEL), structure(Structure::H), Size(0), NumberOfCylinders(0)
{
}


Motor::Motor(const TypeMotor& typemotor, const Structure& structure, const int& Size, const int& NumberOfCylinders):
	typemotor(typemotor), structure(structure),Size(Size),NumberOfCylinders(NumberOfCylinders)
{
}

Motor::TypeMotor Motor::GetTypeMotor()
{
	return typemotor;
}

Motor::Structure Motor::GetStructure()
{
	return structure;
}

int Motor::GetSize()
{
	return Size;
}

int Motor::GetNumberOfCylinders()
{
	return NumberOfCylinders;
}

int Motor::GetWheelRadius()
{
	return GetWheelRadius();;
}

int Motor::GetMaxSpeed()
{
	return GetMaxSpeed();;
}

int Motor::GetWeight()
{
	return GetWeight();
}


