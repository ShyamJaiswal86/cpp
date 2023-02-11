#include<iostream>
using namespace std;
class Employee{
public:
int id;
string name;
float salary;

Employee(int id, string name,float salary){
this->id=id;                       //this keyword is use when name of the global_variable and name of the local_variable is same in a class 
this->name=name;                   //it is also use to run a perticular objet which is called.
this->salary=salary;}              //and it works on a constructor.
                                   // it is also known as run time polymorphism
void display(){
cout<<this->id<<"  "<<this->name<<" "<<this->salary<<endl;} 
// Example in normal we have to use e1.id & e2.id to print id, but using this pointer we dont need to call every object.
};

int main(){
Employee e1(101,"yash",26890);
Employee e2(102,"ram",59000);
e1.display();
e2.display();
}