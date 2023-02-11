#include<iostream>
using namespace std;
class A{
    public:
    void show(){
        cout<<"This is A\n";}
};
class B:virtual public A{
    public:
    void show(){
        cout<<"This is B\n";
    }
};
class C:virtual public A{
    public:
    void show(){
        cout<<"This is C\n";
    }
};
class D:public B,public C{
    public:
    void show(){
        cout<<"This is D";
    }
};
main(){
    D d;
    d.A::show();        // we use class_name along with scope resolution(::) to call a function of the perticular class we want to call
    d.B::show();       
    d.C::show();
    d.show();
}