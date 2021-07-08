/*  Write a program in C++ to calculate the volume of a cylinder.
Sample Output:
Calculate the volume of a cylinder :
-----------------------------------------
Input the radius of the cylinder : 6
Input the height of the cylinder : 8
The volume of a cylinder is : 904.32
*/

#include <iostream>
#include<cmath>
using namespace std;

void cylinder(int &rad, int &h)
{
float pi =3.14;
float volume = (pi*pow(rad,2)*h);
cout << "Volume of cylinder is: " << volume;
}
int main()
{

int rad,h;
cout << "Enter the radius of the cylinder : " ;
cin >> rad ;
cout << "Enter the Height of the cylinder : " ;
cin >> h ;
cylinder(rad,h);
}
