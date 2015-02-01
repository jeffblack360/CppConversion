/*
    Conversion - Program to convert temperature from Celsius to Fahrenheit:
    Fahrenheit = Celsius * (212 - 32)/100 + 32
*/
#include <cstdio>
#include <cstdlib>
#include <iostream>

#include <boost/lambda/lambda.hpp>
#include <iterator>
#include <algorithm>

using namespace std;

int boostTest()
{

    using namespace boost::lambda;
    typedef std::istream_iterator<int> in;

    std::for_each(
        in(std::cin), in(), std::cout << (_1 * 3) << " " );

    return 0;

}

int main(int argcount, char* args[])
{
    int celsius;
    int fahrenheit;
    int factor;

    boostTest();

    return 0;

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
