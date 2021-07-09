/*Write a program in C++ to find the Area and Perimeter of a Rectangle.
Sample Output:
Find the Area and Perimeter of a Rectangle :
-------------------------------------------------
Input the length of the rectangle : 10
Input the width of the rectangle : 15
The area of the rectangle is : 150
The perimeter of the rectangle is : 50 */

#include <iostream>
#include<cmath>
using namespace std;

void Rectangle()
{
int length, width;
cout << "Input the length of the rectangle : ";
cin>> length;
cout<<  "Input the width of the rectangle : " ;
cin >> width;
int area = (length*width);
int perimeter = 2*(length+width);
cout << "Area of Rectangle is : " << area << "\n";
cout << "Perimeter of Rectangle is : " << perimeter;
}
int main()
{
Rectangle();
return 0;
}
