#include<iostream>
using namespace std;
class A{ 
  private: 
  int a; 
  public: 
  void set_a(){
     a=10;
     } 
  void disp_a(){  
    cout<<a<<endl;  
    }
  friend A operator-(A); // Friend function which takes an object of A 					and return an object of A(class) type.
};
  //Definition of overloaded unary minus operator - friend function 
A operator-(A ob) 
{  ob.a = -(ob.a); 
 return ob;  
} 
int main(){   
  A ob; 
  ob.set_a(); 
  cout<<"The value of a is : "; 
  ob.disp_a();
  ob = -ob; 
  cout<< "Value after calling operator overloading friend function is : "; 
  ob.disp_a();
}

