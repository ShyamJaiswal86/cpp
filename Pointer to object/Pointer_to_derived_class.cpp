#include <iostream>
using namespace std;
class lpu {
public:
	int var_base;
	void display()
	{
		cout << "Diiiisplaying Base class"
			<< " variable var_base: " << var_base << endl;
	}
};
class mca : public lpu {
public:
	int var_derived;
	void display()
	{
		cout << "Displayingggg Base class"
			<< "variable var_base: " << var_base << endl;
		cout << "Displaying Derived "
			<< " class variable var_derived: "
			<< var_derived << endl;
	}
};
int main()
{   // Pointer to base class
	lpu *lpuptr;
	lpu obj_base;
	mca obj_derived;
	// Pointing to derived class
	lpuptr = &obj_derived;

	lpuptr->var_base = 34;

	// Calling base class member function
	lpuptr->display();   //Dislaying lpu var_Base class  34 
	mca *derived_class_pointer;
	derived_class_pointer = &obj_derived;
	derived_class_pointer->var_base = 9448;
	derived_class_pointer->var_derived = 98;
	derived_class_pointer->display(); 
//Display mca Base class variable 9448
//Displaying mca derived class variable: 98

}
