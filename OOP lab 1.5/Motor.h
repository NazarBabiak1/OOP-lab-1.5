#pragma once
#include "Vehicle.h"
namespace D2 {

	class Motor: virtual private B::Vehicle
	{    
	public:

		enum TypeMotor { DIESEL, GASOLINE, GAS, ELECTRIC };
		enum Structure { V, W, X, H };

		void Inform() override;

		Motor();
		Motor(const TypeMotor&, const Structure&, const int&, const int&);

		TypeMotor GetTypeMotor();
		Structure GetStructure();
		int GetSize();
		int GetNumberOfCylinders();
		
		int GetWheelRadius();
		int GetMaxSpeed();
		int GetWeight();

	private:

		TypeMotor typemotor;
		Structure structure;
		int Size;
		int NumberOfCylinders;

	};
}//namespace D2

