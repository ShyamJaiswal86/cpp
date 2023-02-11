#include<iostream>
using namespace std;
int main(){
    int x =10;
    char y ='a';
    // Implict converted to int,(ASCII) compilar itself convert from one data type to another 
    x = x+y;
    cout<<"x = "<<x<<endl;
}