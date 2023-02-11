//Write a program to which will covert positive value to negative
#include<iostream>
using namespace std;
class lpu {
   int x, y;
   public:
   void getdata(int a, int b){
       x=a;
       y=b;
   }
   void display() {
       cout<<x<<endl;
       cout<<y<<endl;
   }
 void operator-();
};
void lpu::operator-(){
    x=-x;
    y=-y;
};
int main(){
 lpu obj;
 obj.getdata(10,20);
 obj.display();
 -obj; // or obj.operator-();
 obj.display();
}
