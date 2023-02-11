#include<iostream>
#include<fstream>
using namespace std;

main(){
    string st;
    ifstream file;
    file.open("lpu.txt");
    file.getline("lpu.txt",10);
    cout<<st;
    file.close();
}