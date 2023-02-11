#include <iostream>
using namespace std;
class Shape // Abstract class         are those class which contain pure virtual function
{  public:   
   float dimension;   
       void getDimension() {
        cin >> dimension;    } 
	  virtual float calculateArea() = 0; // pure virtual Function  /it is tamplate which can be used in derived class and with different works 
 }; 
// Derived class               // pure virtual is use when we want to use same function for different work. 
 class Square : public Shape
 {  public:  
    float calculateArea()  {  
   cout<< dimension * dimension;    }
};
// Derived classclass
 class Circle : public Shape 
{  
    public: 
      float calculateArea() {  
      cout<<3.14 * dimension * dimension;    
    }
};
 main() 
{    
 Square squareobj;  
 Circle circleobj;    
 cout << "Enter the length of the square: ";      
 squareobj.getDimension();   
 cout << "Area of square = ";      
 squareobj.calculateArea();
 cout << "\n Enter radius of the circle: ";    
 circleobj.getDimension(); 
 cout << "Area of circle = ";  
 circleobj.calculateArea();
}
