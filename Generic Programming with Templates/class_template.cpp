#include<iostream>
using namespace std;
template< class A>          //keyword   , A will store the data type which have been pass eexample- int,float
class LPU{
    A a, b;                 // A will store data type of a paramete.
public:
A Setval(A i, A j){
    a =i;
    b = j;
}
A sum(){                    // A is a return type, i.e.,int or folat or other data type.
    A z = a+b;
    cout<<z<<endl;
    return z;
}
};
main(){
    LPU<int>obj;            // <int>: -  keyword or method to define the datatype of the object
    LPU<float>obj1;         // <float>: -  keyword or method to define the datatype of the object
    obj.Setval(10,5);
    obj.sum();
    obj1.Setval(22.2,33.3);
    obj1.sum();
}