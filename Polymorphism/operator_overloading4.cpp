#include <iostream>
using namespace std;
class Time{
int hr, min,sec;
public:
void setTime(int x, int y, int z)
{   hr = x;
    min = y;
    sec = z;   }
void showTime(){  cout<<hr<<":"<<min<<":"<<sec<<endl;   }
void normalize()
{   min = min + sec/60;
    sec = sec%60;
    hr = hr + min/60;
    min = min%60;   }
    Time operator + (Time t){         // or without operator overloading  //Time add(Time t){   // Time is class type return type
    Time temp;
    temp.sec = sec + t.sec;
    temp.min = min + t.min;
    temp.hr = hr + t.hr;
    temp.normalize();
    return(temp);   }
};
int main(){
    Time t1,t2,t3;
    t1.setTime(5,10,55);
    t2.setTime(7,10,55);
    t3 =t1+t2;   //or t3 = t.operator+(t2);                          //or without operator overloading  //t3 = t1.add(t2);
    t1.showTime();
    t2.showTime();
    t3.showTime();  }

    // Binary operator works on two operands/symbol(=&+) used in this program to add two objects