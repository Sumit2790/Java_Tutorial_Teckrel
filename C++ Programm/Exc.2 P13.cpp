/*Write a program in C++ to swap two numbers.
Sample Output:
Swap two numbers :
-----------------------
Input 1st number : 25
Input 2nd number : 39
After swapping the 1st number is : 39
After swapping the 2nd number is : 25
*/
#include<iostream>
using namespace std;

void swapNums(int &x, int &y)
{
  int z = x;
  x = y;
  y = z;
}

int main() {
    int firstNum;
    int secondNum;
    cout<< "Input 1st number :";
    cin>> firstNum;
    cout<< "Input 2nd number :";
    cin>> secondNum;

  swapNums(firstNum, secondNum);

  cout << "After swapping the 1st number is :" <<firstNum << "\n";
  cout<< "After swapping the 2nd number is :" <<secondNum ;

  return 0;
}
