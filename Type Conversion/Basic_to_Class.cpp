#include<iostream>
using namespace std;

class timee{
    int hrs,min;
    public:
    timee(int m){
        hrs = m/60;
        min = m%60;
    }
    void display(){
        cout<<"The hour are = "<<hrs<<endl;
        cout<<"The minute are = "<<min<<endl;
    }
};
int main(){
    timee obj(85);
    obj.display();
}