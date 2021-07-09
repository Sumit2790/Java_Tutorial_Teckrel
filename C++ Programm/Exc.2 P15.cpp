/*Write a program in C++ to calculate the volume of a cube.
Sample Output:
Calculate the volume of a cube :
---------------------------------------
Input the side of a cube : 5
The volume of a cube is : 125*/

#include <iostream>
#include<cmath>
using namespace std;

void cube(int &side)
{
float volume = pow(side,3);
cout << "Volume of cube is: " << volume;
}
int main()
{
int side;
cout << "Please enter side :" ;
cin >> side ;
cube(side);
}
