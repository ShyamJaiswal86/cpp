#include<iostream>
using namespace std;

// 1st way: - Converting by assignment operator

int main(){
    double x = 1.2;
    int sum = (int)x +1;       // datatype convertion is done forcefully by the users  
    cout<<sum<<endl;


// 2nd way:- Converting by cast operator


    float f = 35.556;
    int b = static_cast<int>(f);    
    cout<<b;
}