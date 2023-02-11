#include<iostream>
using namespace std;

template<class A ,class B> 
void display(A a,B b){
    cout<<a<<"\t"<<b<<endl;
}
main(){
    display("Hello",123);
    display(22,1.2);
}