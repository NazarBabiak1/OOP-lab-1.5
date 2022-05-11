#pragma once
#include "Brend.h"
#include "Motor.h"
namespace D3 {

	enum TypePassenger { SEDAN, SUV, LIMUSINE, CABRIOLET };

	class Passenger: private D1::Brend, public D2::Motor
	{
		TypePassenger typepassenger;
		int NumberOfSeats;
	public:

		void Inform() override;

		Passenger();
		Passenger(const TypePassenger&, const int&,/**/const int&, const int&, const int&,const std::string&, const std::string&,const TypeMotor& typemotor,const Structure& structure,
			const int& Size,const int& NumberOfCylinders);


		TypePassenger GetTypePassenger();
		int GetNumberOfSeats();

	};
}//namespace D3

