#include <cstdio>
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <random>
using namespace std;


int main()
{

}
/*

void reverse(string& str, int k)
{
	static int i = 0;
	if (k == str.length())
		return;
	reverse(str, k + 1);
	if (i <= k)
		swap(str[i++], str[k]);
}
int main()
{
	string strings;
	cout << "Enter first string: ";
	getline(cin, strings);
	reverse(strings, 0);
	cout << "Reverse of your string is: " << strings;
	return 0;
}


int recursiveSum(int m, int n)
{
	if (m > n)
	{
		int nce = m;
		m = n;
		n = nce;
	}
	else if (m == n)
		return m;
	return m + recursiveSum(m + 1, n);
}
//Sum numbers between m-n
int main()
{
	int m, n;
	cout << "Enter smaller value: ";
	cin >> m;
	cout << "Enter larger value: ";
	cin >> n;
	cout << "Sum = \033[32m" << recursiveSum(m, n)<<"\033[94m";
	system("pause>0");
}


int sum(int a, int b);
double sum(double a, double b);
float sum(float a, float b, float c);
int main()
{
	cout << sum(4, 3) << endl;
	cout << sum(4.4, 3.3) << endl;
	cout << sum(4.4, 3.3, 2.2) << endl;
	system("pause>0");
}
int sum(int a, int b)
{
	return a + b;
}
double sum(double a, double b)
{
	return a + b;
}
float sum(float a, float b, float c)
{
	return a + b + c;
}


bool isPrime(int number)
{
	for (int i = 2; i < number; i++)
	{
		if (number % i == 0)
			return false;
	}
	return true;
}
int main()
{
	int number;
	cout << "Number: \033[96m";
	cin >> number;
	bool isPrimey = isPrime(number);
	if (isPrimey)
		cout << "\033[32m" << number << " is Prime.\033[0m";
	else
		cout << "\033[31m" << number << " is not Prime.\033[0m";
}


int main()
{
	int length;
	cout << "Length: ";
	cin >> length;
	char symbol;
	cout << "Symbol: ";
	cin >> symbol;
	for (int i = 1; i <= length; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << setw(3) << symbol;
		}
		cout << endl;
	}
}


int  main()
{
	int height, width;
	cout << "Height: ";
	cin >> height;
	cout << "Width: ";
	cin >> width;
	char symbol;
	cout << "Symbol: ";
	cin >> symbol;
	for (int h = 0; h < height; h++)
	{
		for (int w = 0; w < width; w++)
		{
			cout << setw(3) << symbol;
		}
		cout << endl;
	}
	system("pause>0");
}


int main()
{

	char sName[99] = "";
	cout << "Enter your name: ";
	cin >> sName;
	for (char i = 0; i < sizeof(sName); i++)
		cout << *(sName + i) << "\n";
}


struct student
{
	char id_num[7];
	char name[11];
	char gender;
	int age;
};
int main()
{
	struct student student1;
	cout << "Emter student ID num (6 max): ";
	cin >> student1.id_num;
	cout << "Enter student name (10 max): ";
	cin >> student1.name;
	cout << "Enter gender: [M/F]: ";
	cin >> student1.gender;
	cout << "Enter age: ";
	cin >> student1.age;
	cout << "\n------------------------\n";
	cout << "ID number:	" << student1.id_num << endl;
	cout << "Name:		" << student1.name << endl;
	cout << "Gender:		" << student1.gender << endl;
	cout << "Age:		" << student1.age;
	cout << "\n------------------------\n";
	return 0;
}


int main()
{
	int year, month, day;
	struct DATE DoB[100];
	DoB[0].year = 2012;
	DoB[0].month = 1;
}
struct DATE
{
	int year, month, day;
};


int main()
{
	struct STUDENT stdnt[100000];
	stdnt[3].time = 4;
	stdnt[0].name = "Bond";
	stdnt[0].time = 3.5;
	stdnt[0].rtChapter = 2;
}
struct STUDENT
{
	string name;
	float time;
	int rtChapter;
};


int main()
{
	int guest[3][15][20];
	int room;
	int vacancy = 0;
	for (room = 0; room < 20; room++)
	{
		if (guest[2][14][room] == 0)
		{
			vacancy++;
		}
	}
}


int main()
{
	//ARRAYS WILL ALWAYS START AT 0 NEVER ANYTHING ELSE!!!!
	float temp[31][24];
	float max = -100;
	for (int day = 0; day < 31; day++)
	{
		for (int hour = 0; hour < 24; hour++)
		{
			if (temp[day][hour] > max)
			{
				max = temp[day][hour];
			}
		}
	}
	cout << "The highest temperature was " << max << endl;
}


int main()
{
	double firstNum, secondNum;
	int choice;
	do
	{
		cout << "\nMENU:\n[0] Exit\n[1] Add\n[2] Subtract\n[3] Multiply\n[4] Divide\nWhat would you like to do (0-4): ";
		cin >> choice;
		while (choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 0 || !cin)
		{
			cout << "\nInvalid input, try again.\n";
			cout << "MENU:\n[1] Add\n[2] Subtract\n[3] Multiply\n[4] Divide\nWhat would you like to do (0-4): ";
			cin.clear();
			cin.ignore(256, '\n');
			cin >> choice;
		}
		switch (choice)
		{
			case 1:
			{
				cout << "Enter your first number: ";
				cin >> firstNum;
				cout << "Enter your second number: ";
				cin >> secondNum;
				double answer = firstNum + secondNum;
				cout << "The answer is: " << answer;
				break;
			}
			case 2:
			{
				cout << "Enter your first number: ";
				cin >> firstNum;
				cout << "Enter your second number: ";
				cin >> secondNum;
				double answer = firstNum - secondNum;
				cout << "The answer is: " << answer;
				break;
			}
			case 3:
			{
				cout << "Enter your first number: ";
				cin >> firstNum;
				cout << "Enter your second number: ";
				cin >> secondNum;
				double answer = firstNum * secondNum;
				cout << "The answer is: " << answer;
				break;
			}
			case 4:
			{
				cout << "Enter your first number: ";
				cin >> firstNum;
				cout << "Enter your second number: ";
				cin >> secondNum;
				if (secondNum == 0)
				{
					cout << "Dividing by zero will not equal a real number.";
				}
				else
				{
					double answer = firstNum / secondNum;
					cout << "The answer is: " << answer;
				}
				break;
			}
		}
	} while (choice != 0);
	return(0);
}


int main()
{
	string retry;
	int num;
	do
	{
		cout << "Enter the height of the triangle between [2 - 45]: ";
		cin >> num;
		while (num > 45 || num < 2)
		{
			cout << "That number is either too large (over 45) or too small (under 2)" << endl;
			cout << "enter a number between [2 - 45]";
			cin >> num;
		}
		for (int i = 1, k = 0; i <= num; ++i, k = 0)
		{
			for (int space = 1; space <= num - i; ++space)
				cout << " ";
			while (k != 2 * i - 1)
			{
				cout << "*";
				++k;
			}
			cout << endl;
		}
		cout << "\n\n\n\n";
		cout << "Would you like to do this again? [Y/N]: ";
		cin >> retry;
	} while (retry == "Y" || retry == "Yes" || retry == "yes" || retry == "y");
	return 0;
}


int main()
{
	string retry;
	int num;
	do
	{
		cout << "Enter the size of the rectangle between [1 - 50]: ";
		cin >> num;
		while (num > 50 || num < 1)
		{
			cout << "That number is either too large (over 50) or too small (under 1)" << endl;
			cout << "enter a number between [1 - 50]";
			cin >> num;
		}
		cout << '+';
		for (int i = 0; i < num; i++)
			cout << '-';
		cout << '+' << endl;
		for (int i = 0; i < num; i++)
		{
			cout << '|';
			for (int j = 0; j < num; j++)
				cout << ' ';
			cout << '|' << endl;
		}
		cout << '+';
		for (int i = 0; i < num; i++)
			cout << '-';
		cout << '+';
		cout << "\n\n\n\n";
		cout << "Would you like to do this again? [Y/N]: ";
		cin >> retry;
	} while (retry == "Y" || retry == "Yes" || retry == "yes" || retry == "y");
	return 0;
}


int main()
{
	long n;
	int total = 1;
	float result = 0;
	cout << "Please enter a negative number: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		total *= 2;
		result = 1 / (float)total;
	}
	cout.precision(20);
	cout << result;
}


int main()
{
	long n;
	int total = 1;
	cout << "This program will compute positive powers of 2 using whole numbers of 1 - 63 for input" << endl;
	cout << "Enter a number in the range of 1 - 63: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		total *= 2;
	}
	cout << total;
}


int main()
{
	int c0, i=0;
	cout << "Enter a positive value above 0: ";
	cin >> c0;
	do
	{
		if (c0 % 2 == 0)
		{
			c0 = c0 / 2;
			cout << c0 << endl;
			i++;
		}
		else if (c0 % 2 == 1)
		{
			c0 = (3 * c0) + 1;
			cout << c0 << endl;
			i++;
		}
	} while (c0 != 1);
	cout << "steps = " << i;
}


int main()
{
	int y, a, b, c, d, e;
	cout << "Enter year: ";
	cin >> y;
	a = y % 19;
	b = y % 4;
	c = y % 7;
	d = ((a * 19) + 24) % 30;
	e = ((2*b) + (4*c) + (6*d) + 5) % 7;
	if ((d + e) < 10)
	{
		cout << "March " << (d + e + 22);
	}
	else
	{
		cout << "April " << (d + e + 22);
	}
}


int main(void)
{
	int y, m, d;
	cout << "Enter a year: ";
	cin >> y;
	cout << "Enter a month (1-12): ";
	cin >> m;
	while (m < 1 || m > 12)
	{
		cout << "Not a valid month." << endl;
		cout << "Enter a month (1-12): ";
	}
	cout << "Enter day (1-?): ";
	cin >> d;
	while (d > 31 || d <1)
	{
		cout << "Not a valid day." << endl;
		cout << "Enter a day (1-?): ";
	}
	m = m - 2;
	if (m > 0)
	{
		m = m + 12;
		y = y - 1;
	}
	m = (m * 83) / 32;
	m = m + d;
	m = y + m;
	m = m + (y / 4);
	m = m - (y / 100);
	m = m + (y / 400);
	d = m % 7;
	if (d == 0)
	{
		cout << "Sunday";
	}
	else if (d == 1)
	{
		cout << "Monday";
	}
	else if (d == 2)
	{
		cout << "Teusday";
	}
	else if (d == 3)
	{
		cout << "Wednesday";
	}
	else if (d == 4)
	{
		cout << "Thursday";
	}
	else if (d == 5)
	{
		cout << "Friday";
	}
	else if (d == 6)
	{
		cout << "Saturday";
	}
}


int main()
{
	string leave;
	int choice;
	float m, ft, in;
	float length;
	cout << "[0] To input Metric\n[1] To input Imperial (Freedom Units)\n" << endl;
	cin >> choice;
	switch (choice)
	{
		case 0:
		{
			cout << "Enter amount of meters would you like to convert: ";
			cin >> m;
			while (m <= 0)
			{
				cout << "Any value at or below zero makes no sense to convert." << endl;
				cout << "Enter amount of meters you would like to convert: ";
				cin >> m;
			}
			length = 100 * m / 2.54;
			ft = floor(length / 12);
			in = length - (12 * ft);
			cout << ft << "' " << in << '"';
			break;
		}
		case 1:
		{
			cout << "Enter amount of feet you would like to convert: ";
			cin >> ft;
			cout << "Enter amount of inches you would like to convert: ";
			cin >> in;
			while (ft < 0 || in < 0)
			{
				cout << "Any value at or below zero makes no sense to convert." << endl;
				cout << "Enter how many feet you would like to convert: ";
				cin >> ft;
				cout << "Enter how many inches you would like to convert: ";
				cin >> in;
			}
			m = (ft * .3048) + (in * .0254);
			cout << m << "m";
			break;
		}
		default:
			cout << "Would you like to exit instead? [Y/N]";
			cin >> leave;
			if(leave == "yes" || leave == "Yes" || leave == "ye" || leave == "Ye" || leave == "y" || leave == "Y" || leave == "YEs" || leave == "YES")
			{
				return(0);
			}
			else
			{
				main();
			}
			break;
	}
	return(0);
}


int main(void)
{
	float grossprice, taxrate, netprice, taxvalue;
	cout << "Enter a gross price: ";
	cin >> grossprice;
	if (grossprice < 0)
	{
		do
		{
			cout << "Please enter a value greater than 0 for the gross price: ";
			cin >> grossprice;
		} while (grossprice < 0);
	}
	cout << "Enter a tax rate: ";
	cin >> taxrate;
	if(taxrate < 0 || taxrate > 100)
	{
		do
		{
			cout << "Please enter a valid tax rate within the range of 0 and 100: ";
			cin >> taxrate;
		} while (taxrate > 100 || taxrate < 0);
	}
	taxrate = taxrate / 100;
	netprice = grossprice / (1 + taxrate);
	taxvalue = grossprice - netprice;
	cout << "Net price " << netprice << endl;
	cout << "Tax value: " << taxvalue << endl;
}


int main()
{
	//There is no reason to continue with this unfunny bit there is so much useless code that shoud be removed!
	//Global obj;
	int year;
	cout << "Enter a year: ";
	cin >> year;
	if (!year / 4)
	{
		cout << year << " is a common year.";
	}
	else if (!year / 100)
	{
		cout << year << " is a lear year.";
	}
	else if (!year / 400)
	{
		cout << year << " is a common year.";
	}
	else
	{
		cout << year << " is a leap year.";
	}
}
void commonYear()
{
	Global obj{};
	cout << obj.year << " is a common year.";
}
void leapYear()
{
	Global obj{};
	cout << obj.year << " is a leap year.";
}


int main(void)
{
	int num1;
	int num2;
	int num3;
	int num4;
	cout << "Enter the first number for the ip address: " << endl;
	cin >> num1;
	cout << "Enter the second number for the ip address: " << endl;
	cin >> num2;
	cout << "Enter the third number for the ip address: " << endl;
	cin >> num3;
	cout << "Enter the fourth number for the ip address: " << endl;
	cin >> num4;
	if (num1 > 255 || num2 > 255 || num3 > 255 || num4 > 255)
		cout << "IP addresses cannot have over 255 in their number scheme.";
	else
		cout << num1 << "." << num2 << "." << num3 << "." << num4;
}


int main(void)
{
	int num1;
	int num2;
	cout << "Please enter a number: " << endl;
	cin >> num1;
	cout << "Please enter another number: " << endl;
	cin >> num2;
	float num1div = (float)1/(float)num1;
	float num2div = (float)1/(float)num2;
	if(num1div==num2div)
		cout << "Results are equal (by 0.000001 epsilon)";
	else
		cout << "Results are not equal (by 0.000001 epsilon)";
}

int main(void)
{
	float v1 = 2.3;
	float v2 = 2.3;
	float v3 = 2.123456;
	float v4 = 2.123456;
	float v5 = 2.123456;
	float v6 = 2.123456;
	cout << fixed;
	cout.precision(1);
	cout << "v1 = " << v1 << endl;
	cout.precision(2);
	cout << "v2 = " << v2 << endl;
	cout.precision(6);
	cout << "v3 = " << v3 << endl;
	cout.precision(2);
	cout << "v4 = " << v4 << endl;
	cout.precision(0);
	cout << "v5 = " << v5 << endl;
	cout.precision(255);
	cout << "v6 = " << v6 << endl;
}


int main(void)
{
	bool answer;
	int value;
	cout << "Enter a value: ";
	cin >> value;
	int X = value;
	answer = ((X >= 0) && (X < 10)) || (((X * 2) < 20) && ((X - 2) > -2)) || (((X - 1) > 1) && ((X / 2) < 10)) || (X == 111);
	cout << (answer ? "THAT'S TRUE :)" : "THAT'S NOT TRUE :(") << endl;
	return 0;
}


int main(void)
{
	float pi = 3.14159265359;
	float x = 0;
	cout << "Enter value for x: ";
	cin >> x;
	float xsqr = pow(x, 2);
	float pisqr = pow(pi, 2);
	float c = xsqr - .5;
	float y = (xsqr / (pisqr * (xsqr + .5))) * (1 + (xsqr / (pisqr * (pow(c, 2)))));
	cout << "y = " << y;
	return 0;
}


int main(void)
{
	int square_side;
	cout << "What is the side length of your square?" << endl;
	cin >> sqare_side;
	cout << "The perimeter of the square is: "<< 4*square_side;
}
*/