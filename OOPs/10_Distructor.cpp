#include<iostream>
using namespace std;

class MCA{
    public:
        MCA(){
            cout<<"Hello World"<<endl;
        }
        MCA(int a){
            cout<<"abc"<<endl;
        }
        ~MCA(){                 // distructor destroy/de-allocate the memory that has been allocated for the object by the constructor
        cout<<"Distructor Called"<<endl;
        }
       
};
main(){
    MCA obj,obj1(23);
}