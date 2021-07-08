//find the area of any triangle using Heron's Formula.

#include <iostream>
#include<cmath>
using namespace std;

void Triangle()
{
int a, b, c ;
cout <<  "Input the length of 1st side of the triangle : ";
cin>> a;
cout << "Input the length of 2nd side of the triangle : ";
cin >> b;
cout << "Input the length of 3rd side of the triangle : ";
cin >> c ;
int s = (a+b+c)/2;
int z= (s*(s-a)*(s-b)*(s-c));
int area = sqrt z;

cout << "Area of Triangle is : " << area << "\n";

}
int main()
{
Triangle();
return 0;
}
