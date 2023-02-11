// Dynamic/Late Binding : (Run time polymorphism) it is overriding ,overriding mean each class will call its own function only.
#include<iostream>
using namespace std;
class Base{
public:
virtual void show(){ 
    cout<<" In Base \n"; 
    }
};

class Derived: public Base{
public:
void show(){ 
    cout<<"In Derived \n"; 
    }
};
int main(void){
Base *bp = new Derived;   // new keyword is used to dynamically allocate memory and also used in creating object 
//Derived obj;
bp->show(); // RUN-TIME POLYMORPHISM
//obj.show();
}

