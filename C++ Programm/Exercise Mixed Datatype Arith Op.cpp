#include <iostream>
using namespace std;

int main()
{
int x,y;
float w,z;
cout << "Please enter 2 integer numbers";
cin >> x >> y ;
cout << "Please enter 2 float numbers";
cin >> w >> z ;
cout << "Below is the output of Arithmatic Operation \n";
cout<< x+y << "\n" <<w+z <<"\n" << x+z <<"\n" << x-y <<"\n" <<w-z << "\n"
<< x-z << "\n"<< x*y <<"\n" << z*w << "\n" << x*z <<"\n" << x/y <<"\n" << w/z <<"\n" << x/z <<"\n";
return 0;
}
