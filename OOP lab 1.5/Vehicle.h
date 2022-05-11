#pragma once
#include <iostream>
namespace B {
	class Vehicle
	{
		int WheelRadius;
		int MaxSpeed;
		int Weight;
	public:

		virtual void Inform();


		int GetWheelRadius();
		int GetMaxSpeed();
		int GetWeight();
        
		void SetWheelRadius(const int&);
		void SetMaxSpeed(const int&);
		void SetWeight(const int&);
	};
}//namespace B;

