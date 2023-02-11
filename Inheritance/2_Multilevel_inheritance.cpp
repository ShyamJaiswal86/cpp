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
class B:public A{
    public:
    int x;
    void displayage(){
        cout<<"Enter a Age: ";
        cin>>x;
    }
};
class C:public B{
    public:
    int y;
    void displayrollno(){
        cout<<"Enter a roll.no: ";
        cin>>y;
        
    }
    void output(){
        cout<<"Your Name is: "<<w<<endl;
        cout<<"Your Age is: "<<x<<endl;
        cout<<"Your Roll.No is: "<<y<<endl;
    }
};
int main(){
    C obj;
    obj.displayname();
    obj.displayage();
    obj.displayrollno();
    obj.output();

}