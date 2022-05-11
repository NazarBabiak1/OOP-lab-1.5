#pragma once
#include "Brend.h"
#include "Motor.h"

namespace D4 {

	enum TypeTruck { TIPPER, CARTRANSPORTERS, TRACKMIXERS, TANKERS };

	class Truck: private D1::Brend, public D2::Motor
	{
		TypeTruck typetruck;
		int Payload;
	public: 

		void Inform() override;

		Truck();
		Truck(const TypeTruck&, const int&, const int&, const int&, const int&, const std::string& , const std::string& , const TypeMotor&, const Structure&, const int&, const int&);

		TypeTruck GetTypeTruck();
		int GetPayload();


	};
}//namespace D4


