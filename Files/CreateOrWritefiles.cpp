// Basic file reading & writing on file
// ofstream => for output, creating files & writing of file
// ifstream +> for input file & reading files
// fstream +> for both read and write on file

#include<iostream>
#include<fstream>
using namespace std;

main(){
    ofstream file;
    file.open("lpu.txt");
    file<<"Welcome to lpu"<<endl;
    file<<"Good Morning LPU";
    file.close();
}
