//Convert temperature in Fahrenheit to Celsius :

#include <iostream>
using namespace std;

int main()
{
   float fer, cel;
   cout << " Input the temperature in Fahrenheit: ";
   cin>> fer;

   //formula: C = ( 5 x(F - 32))/9
   cel= (5*(fer-32))/9;
   cout << " The temperature in Fahrenheit : " << fer << "\n";
   cout << " The temperature in Celsius : " << cel << "\n";

   return 0;


}
