#include<iostream>
using namespace std;

class MCA{
    public:
    int roll_no;
    string name;
};
class Performance{
    public:
    int marks;
    float percentage;
    char grade;
};

main(){
    MCA student1,student2;
    Performance obj1,obj2;
    student1.roll_no = 56;
    student1.name = "Shyam";


    cout<<"Name is: "<<student1.name<<endl;
    cout<<"Roll_No is: "<<student1.roll_no<<endl;
    
    // student2.roll_no = 05;
    // student2.name = "Ram";

    // cout<<"Name is: "<<student2.name<<endl;
    // cout<<"Roll_No is: "<<student2.roll_no<<endl;

    
    obj1.marks = 89;
    obj1.grade= 'A';
    obj1.percentage= 89.9;


    cout<<"Marks is: "<<obj1.marks<<endl;
    cout<<"Grade is: "<<obj1.grade<<endl;
    cout<<"Percentage is: "<<obj1.percentage<<endl;

}