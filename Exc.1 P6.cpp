/*Check whether the primitive values crossing the limits or not
The Gender is : F
Is she married? : 1
Number of sons she has : 2
Year of her appointment : 2009
Salary for a year : 1500000
Height is : 79.48
GPA is 4.69
Salary drawn upto : 1500000
Balance till : 995324987*/

#include <iostream>
using namespace std;



int main(){
   char gender = 'F';
   bool isEmployed = true;
   unsigned short numofsons = 2;
   short yearofAppt = 2009;
   unsigned int yearlyPackage = 1500000;
   double height = 79.48;
   float gapis = 4.69;
   long salary = 1500000L;
   long long balance = 995324987LL;

   cout << " The Gender is : " << gender << endl;
   cout << " Is she married? : " << isEmployed << endl;
   cout << " Number of sons she has : " << numofsons << endl;
   cout << " Year of her appointment : " << yearofAppt << endl;
   cout << " Salary for a year : " << yearlyPackage << endl;
   cout << " Height is : " << height << endl;
   cout << " GPA is: " << gapis << endl;
   cout << " Salary drawn upto : " << salary << endl;
   cout << " Balance till : " << balance << endl;
   return 0;
}
