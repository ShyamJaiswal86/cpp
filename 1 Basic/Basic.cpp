// this sign is use for single line comment,which will not affect he actual code
/*
This is amultiple line comment
(;) ->  is for terminate a line  
*/

#include<iostream>          // Header file which cointain the meaning of cout,cin,etc..
using namespace std;        // standerd namespace help to reduce the code for writting the syntex for cout  (std::cout)
int main(){  
    cout<<"Hello World\n";  // Basic syntex for printing/output..,(<<) -> Angular/lessthen/Insertion operator

    int a = 10;             // int -> It is a integer data types & "a" -> is a variable(containor) which is of integer type which will store the value.It is of 2 or 4 byte.
    float b = 2.5f;         // float data type use to store small decimal data, it is of 4 bytes.
    char c = 'A';           // character data type, and value is assigned in single bracket('data'), size is 1 byte.
    double d = 2.673762;    // Double data type is for long decimal values, it is of 8 bytes, variable name can be any name.
    string e = "Shyam";     // String is use to store a line of text, data is asigned in doublu quote("Shyam")

    cout<<a<<endl;          //this is a method to feth value from variable, endl for endline.
    cout<<b<<"\n";          // (\n) -> backslash n is use for newline/nextline.
    cout<<c<<endl;
    cout<<d;
    return 0;               // Exit status not complsary
}