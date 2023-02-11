#include<iostream>
using namespace std;
template< class A, class B>          //keyword   , A will store the data type which have been pass eexample- int,float
class LPU{
    A a;
    B b;                 // A will store data type of a paramete.
public:
void Val(A i, B j){
    a =i;
    b = j;
    cout<<a<<"\t"<<b<<endl;
}

};
main(){
    LPU<int,char>obj;            // <int>: -  keyword or method to define the datatype of the object
    LPU<float,string>obj1;         // <float>: -  keyword or method to define the datatype of the object
    obj.Val(10,'A');
    obj1.Val(22.2,"Apple");
}