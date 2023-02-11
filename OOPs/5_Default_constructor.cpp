#include<iostream>
using namespace std;

class MCA{
    public:
    int a =10;
    MCA(){          // the return type of a constructor is a class type
        cout<<"The value of a is:"<<a;
    }
};
main(){
    MCA obj;
}