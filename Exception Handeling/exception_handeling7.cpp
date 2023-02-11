// Uncaught exception In C++

#include <iostream>
using namespace std;
void lpu() {	
 cout << "inside new terminate handler\n";	
 abort();  }
main()
{ set_terminate(lpu);	 // set new terminate handler
try {
cout << "inside try block\n";
		throw 200;	
}
 catch (char a) 
// won't catch an int exception
{   cout << "inside catch block\n";	
   }
}
