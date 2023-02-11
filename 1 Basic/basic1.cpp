#include<iostream>
using namespace std;
main(){   
    cout<<sizeof(int)<<endl;            //4 or 2 depend on archicture and compilor
    cout<<sizeof(char)<<endl;           //1
    cout<<sizeof(string)<<endl;         //32
    cout<<sizeof(float)<<endl;          //4
    cout<<sizeof(double)<<endl;         //8
    cout<<sizeof(bool)<<endl;           //1  basically(0/1) -> True/Fale 
    cout<<sizeof(int*)<<endl;           //8 Pointer is always integer type
    cout<<sizeof(long int)<<endl;       //4 or 8 depend on archicture and compilor
    cout<<sizeof(short int)<<endl;      //2
    cout<<sizeof(unsigned int)<<endl;   //4 only store positive integer
    cout<<sizeof(signed int)<<endl;     //4
    
}