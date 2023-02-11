#include<iostream>
using namespace std;
class LPU{
    public:
   
   virtual void show()=0;                       
};
class MCA: public LPU{
    public:
    int C,Cpp;
    void get(){
        cout<<"Enter a Marks of C: ";
        cin>>C;
        cout<<"Enter a Marks of C++: ";
        cin>>Cpp;
    }
    void show()
    {
        cout<<"The marks of C = "<<C<<endl;
        cout<<"The marks of C++ = "<<Cpp<<endl;
        cout<<"The Total marks of C & Cpp = "<<C+Cpp<<endl;
    }
};
class BCA: public MCA{
    public:
    void show()
    {
        cout<<"The marks of C = "<<C<<endl;
        cout<<"The marks of C++ = "<<Cpp<<endl;
        cout<<"The Total marks of C & Cpp = "<<C*Cpp<<endl;
    }
   
};

int main(){
    MCA obj;
    obj.get();
    obj.show();
    BCA obj1;
    obj1.get();
    obj1.show();
}