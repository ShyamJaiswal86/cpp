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
    void displayrollno(){
        cout<<"Enter a roll.no: ";
        cin>>x;
        
    }
    void output(){
        cout<<"Your name is: "<<w<<endl;
        cout<<"Your Roll.No is: "<<x<<endl;
    }
};
int main(){
    B obj;
    obj.displayname();
    obj.displayrollno();
    obj.output();

}