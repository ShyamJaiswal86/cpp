#include<iostream>
using namespace std;

class timee{
    int hrs,min;
    public:
    void getdata(){
        cout<<"Enter the value of Hours And Minutes"<<endl;
        cin>>hrs>>min;
    }
    operator int(){
        int m;
        m = hrs*60+min;
        return m;
    }
};
int main()
{
    timee T;
    T.getdata();
    int x;
    x =T; // Class to base type
    cout<<"The integer value is: "<<x<<endl;
}
    