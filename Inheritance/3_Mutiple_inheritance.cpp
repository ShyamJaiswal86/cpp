#include<iostream>
using namespace std;

class A{
    public:
    string w;
    void displayname(){
        cout<<"Enter a name: ";
        cin>>w;
    }
};
class B{
    public:
    int x;
   void displayrollno(){
        cout<<"Enter a roll.no: ";
        cin>>x;
        
    }
};
class C{
    public:
    string y;
    void displayaddress(){
        cout<<"Enter your address: ";
        cin>>y;
        
    }
};
class D:public A,public B,public C{
    public:
    float z;
    void displaypercent(){
        cout<<"Enter your percentage: ";
        cin>>z;
    }
    void output(){
        cout<<"Your name is: "<<w<<endl;
        cout<<"Your Roll.No is: "<<x<<endl;
        cout<<"Your Address is: "<<y<<endl;
        cout<<"Your Percentage is: "<<z<<endl;
    }
};
int main(){
    D obj;
    obj.displayname();
    obj.displayrollno();
    obj.displayaddress();
    obj.displaypercent();
    obj.output();

}