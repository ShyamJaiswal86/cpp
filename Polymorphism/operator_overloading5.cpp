#include<iostream>
using namespace std;

class multiply{
  int first,second;
  public:
  void getdata(int a, int b){ 
  first =a;
	second=b;
	}
  void display()
  { cout<<first<<","<<second<<endl; }
multiply operator *(multiply c); //declaration 
};
multiply multiply::operator *(multiply c)       //first multiply is class name, second multiply is for return type(class type return type)
{ multiply temp;
temp.first=first*c.first;           //here, first is of obj1 & c.first is of obj2
temp.second=second*c.second;
return temp;                        //temp will return the temp value of first & second
}
int main()
{
multiply obj1,obj2,obj3;   //object created 
obj1.getdata(15,20);  //value passed
obj2.getdata(2,45);
obj3=obj1*obj2;
obj1.display();
obj2.display();
obj3.display();
}

