#include<iostream>
using namespace std;

//Area Of Square
class square{
    int num;
    public:
    int x;
    square(){
    cout<<"Enter a length of a Square: ";
    cin>>x;
    num = x;
    cout<< "Area of Suqare of Length "<<num<<" is "<<num*num;
    }
};

    //Area of Circle
class circle{
    int num;
    public:
    int r;
    float pi = 3.14;
    circle(){
    cout<<"Enter a Radius of a Circle: ";
    cin>>r;
    num = r;
    cout<< "Area of Circle of Radius "<<num<<" is "<<pi*num*num;
    }
};

    //Area of Rectangle
class rectangle{
    int num1, num2,l,b;
    rectangle(){
    cout<<"Enter a Length of a Rectangle: ";
    cin>>l;
    cout<<"Enter a Breath of a Rectangle: ";
    cin>>l;
    num1 = l;
    num2 = b;
    cout<< "Area of Rectangle of Length "<<num1<<"& Breath"<<num2<<" is "<<num1*num2;
    }
};

int main(){
    int num;
    cout<<"You Want To Find the Are of: -"<<endl;
    cout<<"{Press 1 for Square}\n";
    cout<<"{Press 2 for Circle}\n";
    cout<<"{Press 3 for Rectangle}\n";
    cin>>num;

    if(num =1){
            square obj1;
    }
    if(num =2){
            circle obj2;
    }
    if(num=3){
            rectangle obj3();
    }
}