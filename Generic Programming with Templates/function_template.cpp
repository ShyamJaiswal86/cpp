#include<iostream>
using namespace std;
template<class A>           //keyword(template<class variable_name>  , A will store the data type of parameter
 A sum(A a, A b){              // variable function_name(parameter)) , A is a return type
   A result = a + b;
    cout<<result<<endl;
}
int main(){
    sum(2,3);               // int data type
    sum(2.2, 7.3);          // float data type
}