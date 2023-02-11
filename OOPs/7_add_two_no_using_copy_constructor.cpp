#include<iostream>
using namespace std;
class Add
{
public:
int x, y;
Add()
{
x = 0;
y = 0;
}
Add(Add &A)       //Add is name of class , &A is a variable which store the address of object which is passed as a parameter
{
int a = A.x;
int b = A.y;
cout << "sum of "<<a<<" & "<<b <<" = " <<(a + b)<<endl;
}
void input()
{
cout << "Enter 1st no. : ";
cin >> x;
cout << "Enter 2nd no. : ";
cin >> y;
}
};
int main()
{
Add obj1;
obj1.input();
Add obj2(obj1);
}