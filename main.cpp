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

class Cents
{
private:
    int m_nCents;

public:
    Cents(int nCents)
    {
        m_nCents = nCents;
    }

    // Add Cents + Cents
    friend Cents operator+(const Cents &c1, const Cents &c2);

    int GetCents()
    {
        return m_nCents;
    }

};

Cents operator+(const Cents &c1, const Cents &c2)
{
    return Cents(c1.m_nCents + c2.m_nCents);
}

int boostTest()
{

    using namespace boost::lambda;
    typedef std::istream_iterator<int> in;

    std::for_each(
        in(std::cin), in(), std::cout << (_1 * 3) << " " );

    return 0;

}

int centsTest()
{
    Cents cCents1(6);
    Cents cCents2(8);

    Cents cCentsSum = cCents1 + cCents2;

    cout << "I have " << cCentsSum.GetCents() << " cents." << endl;

    return 0;

}

int conversionTest()
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

int main(int argc, char* args[])
{

    centsTest();
    //conversionTest();
    // boostTest();

    return 0;

}
