#include<iostream>
using namespace std;

class MCA{
	public:
		int x;
		MCA()
		{
			cout<<"This is a constructor"<<endl;
		}
		
		MCA(int val)
		{
			cout<<"Constructor with one parameter of integer type "<<val<<endl;
			x = val;
		}
		
		MCA(string val)
		{
			cout<<"Constructor with one parameter of string type "<<val<<endl;
		}
		
		MCA(float val1, float val2)
		{
			cout<<"Constructor with two parameter of float type "<<val1 + val2<<endl;
		}
		
		MCA(MCA &obj)
		{
			x = obj.x;
			cout<<"value of x in copy constructor "<<x<<endl;
		}
};

int main()
{
	MCA obj1;
	MCA obj2(56);
	MCA obj3("Shyam");
	MCA obj4(22.35, 23.39);
	MCA obj5(obj2); //MCA obj5 = obj2;
}