#include <iostream>
using namespace std;

int main()
{
	//задание 1
    setlocale(0, "");
    cout << "Задание 1" << endl;
    cout << "int: " << sizeof(int) << endl;
    cout << "short int: " << sizeof(short int) << endl;
    cout << "long int: " << sizeof(long int) << endl;
    cout << "float: " << sizeof(float) << endl;
    cout << "long double: " << sizeof(long double) << endl;
    cout << "char: " << sizeof(char) << endl;
    cout << "bool: " << sizeof(bool) << endl;
    cout << "\n";

	//задание 2
    cout << "Задание 2" << endl;
	cout << "Введите число: ";

	int value;
	cin >> value;
	unsigned int order = sizeof(int)*8; 
	unsigned int mask = 1 << order - 1; 
	for (int i = 1; i <= order; i++)
	{
		if (value & mask) {
			cout << '1';
		}
		else {
			cout << '0';
		}
		mask >>= 1;
		if (i % 8 == 0 || i % order - 1 == 0)
		{
			cout << ' ';
		}

	}

	cout << "\n";

	//задание 3
	cout << "Задание 3" << endl;
	cout << "Введите число: ";

	union {
		float y;
		int x2;
	};

	order = sizeof(float) * 8;
	mask = 1 << order - 1;
	cin >> y;
	for (int i = 1; i <= order; i++) {
		if (x2 & mask) {
			cout << '1';
		}
		else {
			cout << '0';
		}
		mask >>= 1;
		if (i % 8 == 0 || i % order - 1 == 0)
		{
			cout << ' ';
		}

		
	}
	cout << "\n";

	//Задание 4
	cout << "Задание 4" << endl;
	union {
		double y2;
		long long int x;
	};
	unsigned long long newmask = 1LL << sizeof(double) * 8 - 1;
	cin >> y2;
	for (int j = 1; j <= sizeof(double) * 8; j++, newmask >>= 1) {
		if (x & newmask) {
			cout << '1';
		}
		else {
			cout << '0';
		}
		if (j % 8 == 0 || j % sizeof(double) * 8 - 1 == 0)
		{
			cout << ' ';
		}

	}
    
}