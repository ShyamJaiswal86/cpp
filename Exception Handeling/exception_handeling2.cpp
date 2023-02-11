#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter your Age: ";
    cin>>age;
    try{
        if(age>=18){
            cout<<"Access Granted - You are old enough.\n";
        }
        else{
            throw "sds";
        }
    }
    catch(...){
        cout<<"Access denied -  You must be at least 18 years old.\n";
        
    }
}