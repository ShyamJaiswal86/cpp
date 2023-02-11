#include<iostream>
using namespace std;
class lpu 
{
public:
int x;
lpu (int a) 
{ 
    x =a;
cout<<"value of a in contructor "<<x<<endl; 
} 
lpu(lpu &i){
    x = i.x;
cout<<"value of x in copy constructor "<<x<<endl; 
} 
}; 
int main (){ 
lpu a1(40); // Calling the parameterized constructor. 
lpu a2=a1; // Calling the copy constructor. 
} 
