#include<iostream>
using namespace std;

class A{
	public:
		int a = 10;
		
		void Aa()
		{
			cout<<"This is class A"<<endl;
		}
};

// Single
class B : public A{
	public:
		int b = 20;
		void Bb()
		{
			cout<<"class B inherited class A"<<endl;
		}
};

// Multilevel & Hierarcheal
class C : public B{
	public:
		int c = 30;
		void Cc()
		{
			cout<<"class C inherited class A"<<endl;
		}
};

// Multilevel & Hierarcheal
class D : public B{
	public:
		int d = 40;
		void Dd()
		{
			cout<<"class D also inherited class B"<<endl;
		}
};

// Multiple
class E : public C, public D{
	public:
		int e = 50;
		void Ee()
		{
			cout<<"class E inherited both class D and class E"<<endl;
		}
};

int main()
{
	A objA;
	B objB;
	C objC;
	D objD;
	E objE;
	
	objD.Aa();
	
	cout<<objD.b;
}