// mULTiPLE CATCH statements
#include <iostream>
using namespace std;
main(){  
 int choice;    
try  {     
   cout<<"enter any choice: ";  
    cin>>choice;                 
     if(choice == 0)   cout<<"hello lpu!"<<endl;   
     else if(choice == 1)    throw (100);      
      else if(choice == 2)    throw ('x');  
   else if(choice == 3)    throw (1.23f);       
     else  cout<<"bye lpu !!!"<<endl;    }
catch(int a)    {   
     cout<<"Integer Exception Block, value   is:     "<<a<<endl;    }  
  catch(char b)    {    
    cout<<"Character Exception Block, value is: "<<b<<endl;    }  
     catch(float c)    {   
     cout<<"Float Exception Block, value is: "<<c<<endl;    }     
  }
