/*Write a program in C++ to calculate the volume of a sphere.
Sample Output:
Calculate the volume of a sphere :
---------------------------------------
Input the radius of a sphere : 6
The volume of a sphere is : 904.32
*/

#include <iostream>
#include<cmath>
using namespace std;

void sphere(int &rad)
{
float pi =3.14;
float volume = (4*pi*pow(rad,3))/3;
cout << "Volume of Sphere is: " << volume;
}
int main()
{

int rad;
cout << "Please enter radius :" ;
cin >> rad ;
sphere(rad);
}
