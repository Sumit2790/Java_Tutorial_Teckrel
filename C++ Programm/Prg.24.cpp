//convert temperature in Kelvin to Fahrenheit.

#include <iostream>
using namespace std;

int main()
{
   float Kel, frh;
   cout << " Input the temperature in Kelvin :   ";
   cin>> Kel;

   //(K − 273.15) × 9/5 + 32
   frh = ((( Kel - 273.15) * (9.0/5) )+32);
   cout << " Input the temperature in Kelvin :  " << Kel << "\n";
   cout << " The temperature in Fahrenheit :  " << frh << "\n";

   return 0;


}
