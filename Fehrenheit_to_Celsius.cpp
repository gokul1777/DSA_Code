#include<iostream>
using namespace std;

int main()
{
    float fehrenheit;
    cin >> fehrenheit;
    float celsius = (5.0/9) * (fehrenheit -32);
    cout << fehrenheit << " F = " << celsius << " C" << endl;

    return 0;
}