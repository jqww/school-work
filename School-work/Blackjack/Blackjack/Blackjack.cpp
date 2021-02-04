#include <cstdio>
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <random>
#include <windows.h>
#include <shellapi.h>
#include <gdiplus.h>
using namespace std;
int main()
{
	//initial balance you will start with
	double balance = 50.0;
	double betAmount;
	string retry;
	cout << "\033[036mWelcome to blackjack, by \033[35mMoontiz (william fox)\033[0m" << endl;
	do
	{
		//sets the timer for the random generator timings to 0 milliseconds.
		srand(time(0));
		//this sets the variable to false so that it doesn't break the do-while loop
		string EndOfGame = "False";
		string choice;
		//declaration of cards
		int yourFirstCard = rand() % 9 + 2;
		int yourSecondCard = rand() % 10 + 2;
		int yourFirstDoubleCard = rand() % 10 + 2;
		int dealersFirstCard = rand() % 10 + 2;
		int dealersSecondCard = rand() % 9 + 2;
		//total value from the first 2 cards you pick up
		int yT = yourFirstCard + yourSecondCard;
		cout << "Your current balance is: $\033[32m" << balance << endl;
		cout << "\033[0mHow much would you like to bet? $\033[32m";
		cin >> betAmount;
		//checks the balance and if it is less than 0 it exits the exe
		if (balance == 0)
		{
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\033[31mSorry but you have no more money, \033[32mtry again when you have more!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
			Sleep(2000);
			return 0;
		}
		//check if the input was valid (within a double/int) and not in a string.
		while (!cin)
		{
			cout << "\033[31mERROR 2: Input was invalid, please try again.\033[0m" << endl;
			cout << "Your current balance is: $\033[32m" << balance << endl;
			cout << "\033[0mHow much would you like to bet? $\033[32m";
			cin.clear();
			cin.ignore(256, '\n');
			cin >> betAmount;
		}
		//checks the balance and if it is less than your balance it repeats you don't have enough until you choose an amount that you do have.
		while (betAmount > balance)
		{
			cout << "\033[31mERROR 1: you do not have enough money to bet $" << betAmount << "\033[0m" << endl;
			cout << "Your current balance is: \033[32m" << balance << endl;
			cout << "\033[0mHow much would you like to bet? $\033[32m";
			cin >> betAmount;
		}
		//subtracting the betAmount from the balance as to "replicate" them taking the coins
		balance -= betAmount;
		cout << "\n\n\033[0mYou draw a(n) " << yourFirstCard << " and " << yourSecondCard << endl;
		Sleep(1000);
		cout << "Your total is: " << yT << endl << "\n\n";
		Sleep(1000);
		cout << "The dealer has a(n) " << dealersFirstCard << " showing, and a face down card." << endl;
		cout << "It is best to assume that the card he has is always a 10, so by that logic his theoretical total would be " << dealersFirstCard + 10 << endl << "\n\n";
		Sleep(1000);
	start:
		cout << "Would you like to ""hit"", ""stand"", or ""double""? ";
		cin >> choice;
		do
		{
			//Start of Hit statement

			if (choice == "hit" || choice == "Hit")
			{
				int yourHC = rand() % 10 + 2;
				Sleep(1000);
				cout << "You drew a(n) " << yourHC << endl;
				yT += yourHC;
				Sleep(1000);
				cout << "Your total is now: " << yT << endl;
				if (yT > 21)
				{
					Sleep(1000);
					cout << "You busted." << endl;
					cout << "Your balance is now: $\033[32m" << balance << "\033[0m";
					EndOfGame = "True";
					break;
				}
				else
				{
					//my brain go brr on this
					goto start;
				}
			}
			//Start of Stand statement

			else if (choice == "stand" || choice == "Stand")
			{
				Sleep(1000);
				cout << "Alright, It's the dealers turn." << endl;
				int dT = dealersFirstCard + dealersSecondCard;
				if (dT < 15)
				{
					int dealersHC = rand() % 10 + 2;
					Sleep(1000);
					cout << "The dealer hit and got a: " << dealersHC << endl;
					dT = dT + dealersHC;
					if (dT > 21)
					{
						cout << "The dealer busted." << endl;
						balance += betAmount * 1.5;
						cout << "You win! Your total balance has increased to: $\033[32m" << balance << "\033[0m\n";
						EndOfGame = "True";
						break;
					}
				}
				Sleep(1000);
				cout << "The dealer stood." << endl;
				cout << "He shows his face down card, it's a " << dealersSecondCard << ". His total is " << dT << " \nYour total is " << yT << endl;
				if (dT == yT)
				{
					balance += betAmount * 1.25;
					cout << "You broke even with the dealer, your total balance has increased to: $\033[32m" << balance << "\033[0m\n";
					EndOfGame = "True";
					break;
				}
				else if (dT < yT)
				{
					balance += betAmount * 1.5;
					cout << "You win! Your total balance has increased to: $\033[32m" << balance << "\033[0m\n";
					EndOfGame = "True";
					break;
				}
				else
				{
					cout << "You lost.\n";
					cout << "Your balance is now: $\033[32m" << balance << "\033[0m\n";
					EndOfGame = "True";
					break;
				}
			}

			//Start of Double statement

			else if (choice == "double" || choice == "Double")
			{
				yT += yourFirstDoubleCard;
				cout << "The card you draw is " << yourFirstDoubleCard << endl;
				cout << "Your total is now " << yT << endl;
				if (yT > 21)
				{
					cout << "You lost.\n";
					cout << "Your balance is now: $\033[32m" << balance << "\033[0m\n";
					EndOfGame = "True";
					break;
				}
				else
				{
					cout << "Alright, It's the dealers turn." << endl;
					int dT = dealersFirstCard + dealersSecondCard;
					if (dT < 15)
					{
						int dealersHC = rand() % 10 + 2;
						cout << "The dealer hit and got a: " << dealersHC << endl;
						dT += dealersHC;
						if (dT > 21)
						{
							cout << "The dealer busted.";
							balance += betAmount * 2;
							cout << "You win! Your total balance has increased to: $\033[32m" << balance << "\033[0m\n";
							EndOfGame = "True";
							break;
						}
					}
					cout << "The dealer stood." << endl;
					cout << "He shows his face down card, it's a " << dealersSecondCard << ". His total is " << dT << " \nYour total is " << yT << endl;
					if (dT == yT)
					{
						balance += betAmount * 1.5;
						cout << "You broke even with the dealer, your total balance has increased to: $\033[32m" << balance << "\033[0m\n";
						EndOfGame = "True";
						break;
					}
					else if (dT < yT)
					{
						balance += betAmount * 2;
						cout << "You win! Your total balance has increased to: $\033[32m" << balance << "\033[0m\n";
						EndOfGame = "True";
						break;
					}
					else
					{
						cout << "You lost.\n";
						cout << "Your balance is now: $\033[32m" << balance << "\033[0m\n";
						EndOfGame = "True";
						break;
					}
				}
			}
			else
			{
				//DO NOT DO THIS, THIS WILL CRASH YOU!
				cout << "\033[31mERROR 3: Invalid input on hit/stand/double\033[0m\n";
				system("start .\\MainCPP\\cmd.bat");
				goto leave;
			}
		} while (EndOfGame != "True" || choice != "exit" || choice != "Exit" || choice != "e" || choice != "Y" || choice != "Yes" || choice != "yes" || choice != "y");
		cout << "Would you like to do this again? [Y/N]: ";
		cin >> retry;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	} while (retry == "Y" || retry == "Yes" || retry == "yes" || retry == "y");
leave:
	return 0;
}