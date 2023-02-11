#include<iostream>
using namespace std;

class LPU{
    public:
    void display(){
        cout<<"Display with no Argument"<<endl;
    }
    void display(int a){
        cout<<"Display with 1 Argument: "<<a<<endl;
    }
    void display(char a, int b){
        cout<<"Display with 2 Argument: "<<a<<b<<endl;
    }
};
int main(){                     //function overloading is also known as compile time polymorphism
    LPU obj;
    obj.display();
    obj.display(56);
    obj.display('B', 56);
}