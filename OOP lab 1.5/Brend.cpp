#include "Brend.h"

using namespace D1;
void Brend::Inform()
{
	std::cout << __FUNCSIG__ << std::endl << "Contains the name of the brand and the country in which this brand is produced" << std::endl;
}

Brend::Brend(): Name("None"), Country("None")
{
	Brend::Vehicle::SetWheelRadius(0);
	Brend::Vehicle::SetMaxSpeed(0);
	Brend::Vehicle::SetWeight(0);
}

Brend::Brend(const std::string& Name, const std::string& Country, const int&WheelRadius, const int&MaxSpeed, const int&Weight):Name(Name), Country(Country)
{
	Brend::Vehicle::SetWheelRadius(WheelRadius);
	Brend::Vehicle::SetMaxSpeed(MaxSpeed);
	Brend::Vehicle::SetWeight(Weight);
}

std::string Brend::GetName()
{
	return Name;
}

std::string Brend::GetCountry()
{
	return Country;
}

