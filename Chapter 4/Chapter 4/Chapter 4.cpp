#include <iostream>
#include "Vehicle.h"

using namespace std;

class Vehicle {
	protected:
		string brand, model;
		int year, speed;

	public:
		Vehicle() {
			brand = "";
			model = "";
			year = 0;
			speed = 0;
		}

		Vehicle(string b, string m, int y, int s)
			: brand(b)
			, model(m)
			, year(y)
			, speed(s)
		{
		}

		virtual void Drive() {
			cout << "vroom vroom" << endl;
		}
};

class Boat : public Vehicle {
	public:
		void Drive() {

		}
};

int main() {

	return 9;
}