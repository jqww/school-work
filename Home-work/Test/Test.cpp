#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
using namespace std;


int main()
{

}
/*

int main()
{
	unsigned int n;
	unsigned long long fac = 1;
	cout << "Insert a positive integer: ";
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		fac *= i;
	}
	cout << "Factorial of " << n << " = " << fac;
	return 0;
}
/*

int main()
{
	long n, n1 = 1, n2 = 1, n3;
	cout << "Enter how many times you would like the fibinaci sequence to go to: ";
	cin >> n;
	n3 = n1 + n2;
	for (int i = 4; i <= n; i++)
	{
		n3 = n2 + n3;
		n2 = n3 - n2;
	}
	cout << n3;
}


int main()
{
	long n = 0;
	int total = 0;
	cout << "This program will compute positive powers of 2 using whole numbers of 1 - 63 for input" << endl;
	cout << "Please enter a number in the range of 1 - 63: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		n = pow(2, i);
		total = n += n;
	}
	cout << total;
}


int main()
{
	int d1 = 1, d2 = 0, d3 = 0;
	double pi4 = 0.;
	long n;
	cout << "Number of iterations?: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			pi4 = pi4 + (1.0 / (2.0 * i + 1.0));
		}
		else
		{
			pi4 = pi4 - (1.0 / (2.0 * i + 1.0));
		}
	}
	cout.precision(20);
	cout << "Pi = " << (pi4 * 4.) << endl;
	return 0;
}
/*

int main()
{
	int c0, steps = 0;
	cout << "Enter a value above 0:";
	cin >> c0;
	while (c0 <= 0)
	{
		cout << c0 << " is at or below 0, please choose a number above 0:";
		cin >> c0;
	}
	while (c0 != 1)
	{
		if (c0 % 2 == 0)
		{
			c0 = c0 / 2;
			cout << c0 << endl;
		}
		else
		{
			c0 = (3 * c0) + 1;
			cout << c0 << endl;
		}
		steps++;
	}
	cout << steps << " steps";
}
*/