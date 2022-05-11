#pragma once
#include "Vehicle.h"

namespace D1 {
	class Brend : virtual public B::Vehicle
	{
		std::string Name;
		std::string Country;
	public:

		void Inform() override;

		Brend();
		Brend(const std::string&, const std::string&,const int&, const int&, const int&);
		
		std::string GetName();
		std::string GetCountry();


	};
}//namespace D1

