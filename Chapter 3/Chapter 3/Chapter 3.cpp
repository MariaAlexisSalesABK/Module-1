#include <iostream>

using namespace std;

int main()
{
	int year;

	cout << "Leap Year Checker" << endl;
	cout << "Insert a year: ";
	cin >> year;

	if (year % 4 == 0) {
		if (year % 100 == 0 && year % 400 != 0) {
			cout << "Not a leap year" << endl;
		} else {
			cout << "Leap year!" << endl;
		}
	}

	cout << "\n-------------------------------------\n" << endl;

	unsigned int n;

	cout << "Display all factors of a number:" << endl;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		if (n % i == 0) cout << i << " ";
	}
	
	return 0;
}