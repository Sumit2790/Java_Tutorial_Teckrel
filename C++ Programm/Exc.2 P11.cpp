/*
Write a program in C++ to print the result of the specified operations.
Sample Output:
Print the result of some specific operation :
--------------------------------------------------
Result of 1st expression is : 23
Result of 2nd expression is : 5
Result of 3rd expression is : 12
Result of 4th expression is : 3
*/

#include <iostream>
using namespace std;

void fun1()
{
int a=11;
int b= 12;
cout << " Result of 1st expression is : " << a+b << "\n";
}

void fun2()
{
int a=1;
int b= 5;
cout << " Result of 2nd expression is : " << a*b << "\n";
}

void fun3()
{
int a=20;
int b= 8;
cout << " Result of 3rd expression is : " <<  a-b << "\n";
}

void fun4()
{
int a=6;
int b= 2;
cout <<  " Result of 4th expression is : " << a/b << "\n";
}

int main()
{
 fun1();
 fun2();
 fun3();
 fun4();
return 0;
}
