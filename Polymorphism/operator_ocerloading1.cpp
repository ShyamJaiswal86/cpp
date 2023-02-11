   #include <iostream>
   using namespace std;
   class lpu {
   int x, y;
   public:
   lpu() {
       x=0;
       y=0; }
  void operator++() {                      //{operator that are overloaded:- +,++,-,--,*,**,&,&&,!,etc}, it is compile time ploymorphism
       x=x+1;
       y=y+1;  }
   void display(){
       cout<<x<<endl;
       cout<<y<<endl;  }
   };

int main(){  
   lpu obj,obj1;
   obj.display();
   ++obj;                                   // unary operator works on single operand/symbol(+,++,etc) on single objects
   obj.display();
  }
