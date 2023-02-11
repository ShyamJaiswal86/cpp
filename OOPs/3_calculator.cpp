#include<iostream>
using namespace std;
class calculator{
    public:

    void add(float a,float b){
        float w = a+b;
        cout<<"Addition of two number is= "<<w<<endl;
    }
    void sub(float a,float b){
        float x = a-b;
        cout<<"Subtractoin of two number is= "<<x<<endl;
    }
    void mul(float a,float b){
        float y = a*b;
        cout<<"Multiplication of two number is= "<<y<<endl;
    }
    void div(float a,float b){
        float z = a/b;
        cout<<"Division of two number is= "<<z<<endl;
    }
    void dif(float a,float b){
        if(a>b){
            float x = a-b;
            cout<<"Difference of two number is= "<<x<<endl;
        }else{
            float x = b-a;
            cout<<"Difference of two number is= "<<x<<endl;
        }
    }
        
};
     main(){
        float num1,num2;
        calculator cal;
			cout<<"Enter a First Number: ";
			cin>>num1;
			cout<<"Enter a Second Number: ";
			cin>>num2;
            cal.add(num1,num2);
            cal.sub(num1,num2);
            cal.mul(num1,num2);
            cal.div(num1,num2);
            cal.dif(num1,num2);
    }