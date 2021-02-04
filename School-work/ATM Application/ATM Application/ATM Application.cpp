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

void showMenu(int balance)
{
	cout << "*********MENU*********\nCurrent Balance: " << balance << "\n[1] Deposit\n[2] Withdraw\n[3] Exit\n**********************\n";
}
int main()
{
	int option;
	long double balance = 100.0;
	//Menu.
	do
	{
		showMenu(balance);
		cout << "Please choose an option: ";
		cin >> option;
		system("cls");
		switch (option)
		{
		case 1:
		{
			long double depositAmount;
			cout << "Deposit amount: ";
			cin >> depositAmount;
			while (!cin)
			{
				cout << "That is an invalid type, please type a value you would like to deposit: ";
				cin.clear();
				cin.ignore(256, '\n');
				cin >> depositAmount;
			}
			while (depositAmount < 1)
			{
				cout << "You cannot deposit less than 1 dollar.\n Deposit amount: ";
				cin >> depositAmount;
			}
			balance += depositAmount;
			break;
		}
		case 2:
		{
			double withdrawAmount;
			cout << "Withdraw amount: ";
			cin >> withdrawAmount;
			if (balance > withdrawAmount)
				cout << "You currently do not have enough money to withdraw.\n";
			else if (withdrawAmount < 1)
				cout << "You cannot withdraw a value below 1 dollar.";
			else
				balance -= withdrawAmount;
			break;
		}
		case 3:
			return(0);
		default:
			cout << "Not a valid choice.\n";
			break;
		}
	} while (option != 4);
}