//Convert kilometers per hour to miles per hour :

#include <iostream>
using namespace std;

int main()
{
   float kmph, mph;
   cout << " Input the distance in kilometer :  ";
   cin>> kmph;

   //formula: C = ( 5 x(F - 32))/9
   mph= (kmph * 0.6213712);
   //cout << " Input the distance in kilometer : " << kmph << "\n";
   cout << " Convert kilometers per hour to miles per hour : " << mph << "\n";

   return 0;


}
