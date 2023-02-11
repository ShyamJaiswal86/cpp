#include<iostream>
using namespace std;

class MCA{
    public:
    int age,rn;
    string name;
    void input();
    void output(){
        cout<<"Your name is: "<<name<<endl;
        cout<<"Your age is: "<<age<<endl;
        cout<<"Your Reg.No is: "<<rn<<endl;
    }
};
void MCA :: input(){
        cout<<"Enter Your name: ";
        cin>>name;
        cout<<"Enter Your age: ";
        cin>>age;
        cout<<"Enter Your Reg.No: ";
        cin>>rn;
}
int main(){
    MCA obj;
    obj.input();
    obj.output();
}