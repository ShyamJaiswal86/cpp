#include<iostream>
#include<fstream>
using namespace std;

main(){
    ofstream file;
    file.open("Abc.txt");
    file<<"Hello World"<<endl<<"Wlecome to Abc.pdf file"<<endl
    <<"This is my file"<<endl;                                  // this code will print only1 line, to print multiine we hace to put condition(if condition)
    file.close();
    string srg;  
    ifstream file2;  
    file2.open("Abc.txt");
    getline (file2,srg);
    cout << srg <<endl; 
    file2.close();     
} 