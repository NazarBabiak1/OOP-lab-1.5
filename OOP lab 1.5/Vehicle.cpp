#include "Vehicle.h"
using namespace B;


void Vehicle::Inform()
{
		std::cout << __FUNCSIG__ << std::endl << "Contains wheel radius, maximum speed and weight" << std::endl;
}


int Vehicle::GetWheelRadius()
{
	return WheelRadius;
}

int Vehicle::GetMaxSpeed()
{
	return MaxSpeed;
}

int Vehicle::GetWeight()
{
	return Weight;
}

void Vehicle::SetWheelRadius(const int& whellradius)
{
	this->WheelRadius = whellradius;
}

void Vehicle::SetMaxSpeed(const int& maxspeed)
{
	this->MaxSpeed = maxspeed;
}

void Vehicle::SetWeight(const int& weight)
{
	this->Weight = weight;
}



