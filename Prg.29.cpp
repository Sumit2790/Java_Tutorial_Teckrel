//Write a program in C++ to compute quotient and remainder.

#include <iostream>
#include <conio.h>
using namespace std;
//user define function for find quotient

 void findQuotient(int a, int b)
 {
   int Quotient= a/b;
   cout<<"Quotient =" <<Quotient;
 }
    //user define function for find remainder

    void findRemainder(int a, int b)
 {
   int Remainder =a%b;
    cout<<"\nRemainder= "<<Remainder;
 }

int main()
{
    int dividend=25,divisor=3;      //integer variable declaration

    findQuotient(dividend,divisor);    //Call the function for display quotient

    findRemainder(dividend,divisor);   //Call the function for display remainder

    getch();
    return 0;
}
