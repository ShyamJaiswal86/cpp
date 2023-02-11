#include<iostream>
using namespace std;
template<class t>
class mca{
public:
t a,b,c;
mca()
{
cout<<"Enter two number: ";
cin>>a;
cin>>b;
c=a+b;
cout<<c;

}
};

template<class t>
class bca:public mca<int>
{

};
main()
{
bca<int> obj;
// mca<float> obj1;
}