//Make a rectangular shape by a single digit number :


#include <iostream>
using namespace std;

class Num
{
public:
void myMethod(int Number)
{
  if (Number==0)
  {
  cout << "Entered number is Zero";
  }
  else if (Number > 0)
  {
  cout << "Entered number is Positive";
  }
  else
  {
  cout << "Entered number is negative ";
  }
}
};


int main ()
{
int Number;
cout << "Please enter a number to be checked :" ;
cin >> Number;
Num obj;
obj.myMethod(Number);
return 0;
}
