// Exception in constructor
#include<iostream>
using namespace std;

class test
 {  public:	
     test()	{	
   	cout << "constructing an object of class test"<< endl;	}	
   ~test()	{
  		cout << "destructing the object of class test "<< endl;	}
   };
int main()
{	  try
   {	test t1;   
    	throw 10;		
   } 	  
catch (int i) {
cout << "caught " << i << endl;	
}
}
