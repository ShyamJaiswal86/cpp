#include<iostream>
using namespace std;

class timee{
    int hr,min;
    public:
    timee(int h,int m){
        hr =h;
        min =m;
    }
    timee(){  
        cout<<"\nTime, object created";
    }
    int getminutes(){
        int total_min = (hr*60)+min;
        return total_min;
    }
    void display(){
        cout<<"Hours: "<<hr<<endl;
    }
};
    class minutee{
        int min;
        public:
        minutee(){
            min =0;
        }
        void operator = (timee T){
            min = T.getminutes();
        }
        void display(){
            cout<<"\nTotal Minutes: "<<min<<endl;
        }
};
int main(){
    timee A;
    timee t1(2,30);
    minutee m1;
    m1.display();
    m1 =t1;
    t1.display();
    m1.display();
}