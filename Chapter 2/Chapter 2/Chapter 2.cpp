#include <iostream>

using namespace std;

/*Function Declaration*/
int findSum(int x, int y, int z);
int findAverage(int x, int y, int z);

int main()
{
    int x, y, z;

    cout << "Challenge 1: Find \"Sum\" and \"Average\"." << endl;

    cin >> x;
    cin >> y;
    cin >> z;

    cout << "Sum of 3 #s: " << findSum(x, y, z) << endl;
    cout << "Average of 3 #s: " << findAverage(x, y, z) << endl;

    cout << "\n-------------------------------------\n" << endl;

    cout << "Challenge 2: Cubed Value." << endl;

    cin >> x;
    
    cout << "Cubed value: " << pow(x, 3) << endl;

    return 0;
}

/*Function Definition*/

int findSum(int x, int y, int z) {
    return x + y + z;
}

int findAverage(int x, int y, int z) {
    return (x + y + z) / 3;
}