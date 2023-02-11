#include<iostream>
using namespace std;
class MyClass
 {    private:    
    int a=111;    
friend void display(MyClass);
 };

void display(MyClass A)
 {    
cout<<A.a;
 }
int main()
 {  
  MyClass obj;  
    display(obj);
}
