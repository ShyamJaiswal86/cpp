#include<iostream>
using namespace std;
class My_Class {
   int num;
public:
   void set_num(int val) 
         {num = val;}
   void show_num()
   {
       cout << num << "\n";
   }
};

int main()
{
  My_Class ob, *p; // declare an object and pointer to it

  ob.set_num(10); // access ob directly
  ob.show_num();

  p = &ob; // assign p the address of ob
  p->show_num(); // access ob using pointer
}
