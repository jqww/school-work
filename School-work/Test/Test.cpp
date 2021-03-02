#include <cstdio>
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main(void)
{
    string retry;
    double pi = 3.141526;
    do
    {
        int choice = 0;
        cout << "What calculation would you like to do?\n   [1] Calculate Radians and Revolutions from degrees\n   [2] Convert Horsepower to Wattage and Foot Pounds\n   [3] Convert Wattage to Horsepower and Foot Pounds\n   [4] Convert Foot Pounds to Horsepower and Wattage\n   [5] Convert Radians to Revolutions\n   [6] Convert Revolutions to Radians\n   [7] Convert Radians to Degrees\n(BTW use the numbers at the front of what you want so that it works properly)" << std::endl;
        cin >> choice;
        switch (choice)
        {
            case 1:
            {
                float degrees;
                cout << "Enter the degrees you would like to calcluate into radians and revolutions: ";
                cin >> degrees;
                double radians = degrees * pi / 180;
                double revolutions = radians / (2 * pi);
                cout << "result: Radians:" << radians << " and Revolutions:" << revolutions << endl;
                break;
            }
            case 2:
            {
                float horsepower;
                cout << "Enter the number of HP to convert: ";
                cin >> horsepower;
                float watts = horsepower * 746;
                float kw = watts / 1000;
                float ftlbs = horsepower * 550;
                cout << "results: Wattage:" << watts << " kiloWatts:" << kw << " Foot Lbs:" << ftlbs << endl;
                break;
            }
            case 3:
            {
                float Watts;
                cout << "Enter the number of Watts to convert: ";
                cin >> Watts;
                float Horsepower = Watts / 746;
                float Ftlbs = Horsepower / 550;
                cout << "results: Horsepower:" << Horsepower << " Foot Lbs:" << Ftlbs << endl;
                break;
            }
            case 4:
            {
                float FtLbs;
                cout << "Enter the number of Foot Lbs to convert: ";
                cin >> FtLbs;
                float HorsePower = FtLbs / 550;
                float WattS = HorsePower * 746;
                float kW = WattS / 1000;
                cout << "results: Horsepower:" << HorsePower << " Watts:" << WattS << " kiloWatts:" << kW << endl;
                break;
            }
            case 5:
            {
                float Radians;
                cout << "Enter the number of radians you want to convert: ";
                cin >> Radians;
                float Revolutions = Radians / (2*pi);
                float Degrees = Radians * (180 / pi);
                cout << "results: Revolutions:" << Revolutions << " Degrees:" << Degrees << endl;
                break;
            }
            case 6:
            {
                float RevolutionS;
                cout << "Enter the number of revolutions you want to convert: ";
                cin >> RevolutionS;
                float RadianS = RevolutionS * (2*pi);
                float DegreeS = RadianS * (180 / pi);
                cout << "results: Radians:" << RadianS << " Degrees:" << DegreeS << endl;
                break;
            }
            case 7:
            {
                float rAdians;
                cout << "Enter the number of radians you would like to convert: ";
                cin >> rAdians;
                float dEgrees = rAdians * (180 / pi);
                cout << "results: Degees:" << dEgrees << endl;
                break;
            }
            default:
                cout << "This is unfinished, please only use what is available, thank you." << endl;
        }
        cout << "Would you like to do another calculation? [Y/N]" << endl;
        cin >> retry;
        if (retry != "yes" || retry != "Yes" || retry != "ye" || retry != "Ye" || retry != "y" || retry != "Y" || retry != "YEs" || retry != "YES")
        {
            cout << "Have a good rest of your day then, hope I helped!";
        }
        else
        {
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        }
    } while (retry == "yes" || retry == "Yes" || retry == "ye" || retry == "Ye" || retry == "y" || retry == "Y" || retry == "YEs" || retry == "YES");
    return(0);
}