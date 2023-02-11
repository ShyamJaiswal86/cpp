#include<iostream>
#include<fstream>
using namespace std;

main(){
    ofstream file;
    file.open("Abc.pdf");
    file<<"Hello World"<<endl;
    file<<"Wlecome to Abc.pdf file"<<endl;
    file<<"This is my file"<<endl;
  string srg;  
  ifstream file2("Abc.pdf");  
  if (file2.is_open())  
  {  
    while ( getline (file2,srg) )  
    {  
      cout << srg <<endl;  
    }  
    file2.close();  
  }  
  else {  
      cout << "File opening is fail."<<endl;   
    }    
} 