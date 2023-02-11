#include<iostream>
using namespace std;

class A{
    public:
    void a(){
        cout<<"This is A\n";
    }
};
class B{
    public:
    void b(){
        cout<<"This is B\n";
    }
};
class C{
    public:
    void c(){
        cout<<"This is C\n";
    }
};
class D:public A,public B,public C{
    public:
    void d(){
        cout<<"This is D\n";
    }
};
class E:public D{
    public:
    void e(){
        cout<<"This is E\n";
    }
};
class F:public D{
    public:
    void f(){
        cout<<"This is F\n";
    }
};
int main(){
    E obj1;
    F obj;
    obj.a();
    obj.b();
    obj.c();
    obj.d();
    obj1.e();
    obj.f();
}