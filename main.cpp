/*
    Conversion - Program to convert temperature from Celsius to Fahrenheit:
    Fahrenheit = Celsius * (212 - 32)/100 + 32
*/
#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argcount, char* args[])
{
    int celsius;
    int fahrenheit;
    int factor;

    cout << "Enter the temperature in Celsius: ";
    cin >> celsius;

    // Calculate conversion factor for Fahrenheit conversion
    factor = 212 - 32;

    // Use conversion factor to calculate Fahrenheit
    fahrenheit = factor * celsius/100 + 32;

    // Output results
    cout << "Fahrenheit value is: " << fahrenheit << endl;

    // Wait on user...
    cout << "Press Enter to continue..." << endl;
    cin.ignore(10, '\n');
    cin.get();

    return 0;
}
