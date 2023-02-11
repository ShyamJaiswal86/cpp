#include<iostream>
using namespace std;

class MCA{
    public:
    int a =10;
    MCA(){
        cout<<"The value of a is:"<<a<<endl;
    }
    MCA(int a){
        cout<<"The value of a is:"<<a<<endl;
    }
    MCA(int a,int b){
        cout<<"The sum of a&b is:"<<a+b;
    }
};
main(){
    MCA obj;
    MCA obj1(2);
    MCA obj2(23,32);
}