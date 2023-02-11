#include<iostream>
using namespace std;

// class MCA{
//     private:
//     int a =10;
//     MCA(){
//         cout<<"The value of a is:"<<a;
//     }
// };
// main(){
//     MCA obj;
//     obj.a;
// }
// This program will throw error.
class MCA{
    private:
    int a =10;
    friend void display(MCA obj1){
            cout<<"The value of a is= "<<obj1.a;
    }
};
main(){
    MCA obj;
    display(obj);
}
