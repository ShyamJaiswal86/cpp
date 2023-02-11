// Rethrowing exceptions
#include<iostream>
using namespace std;
main()
{	  try	
         {	
             int a, b;	
        	cout<<"enter two integer values: ";		
           cin>>a>>b;	
        	try	
             	{	
       	if(b == 0)		
        
	{   
          throw b;	 }		
     	else			
     {	cout<<(a/b);	}		
}
catch(...)		
{			
  throw; 
	}	
  }	
catch(int)	{
cout<<"Second value cant b zero";	}	
}
