#include<iostream>
using namespace std;
class calculator{
    public:

    void add(float a,float b){
        float w = a+b;
        cout<<"Addition of two number is= "<<w<<endl;
    }
    void sub(float a,float b){
        float x = a-b;
        cout<<"Subtractoin of two number is= "<<x<<endl;
    }
    void mul(float a,float b){
        float y = a*b;
        cout<<"Multiplication of two number is= "<<y<<endl;
    }
    void div(float a,float b){
        float z = a/b;
        cout<<"Division of two number is= "<<z<<endl;
    }
};
     main(){
        calculator cal;
            float num1,num2;
			char op;
			cout<<"Enter a First Number: ";
			cin>>num1;
			cout<<"Enter a Operator('+' or '-' or '*' or '/' ): ";
			cin>>op;
			cout<<"Enter a Second Number: ";
			cin>>num2;
			
			if (op == '+'){
				cal.add(num1,num2);
			}else if (op == '-')
			{
				cal.sub(num1,num2);
			}else if (op == '*')
			{
				cal.mul(num1,num2);
			}else if(op == '/'){
				cal.div(num1,num2);
			}else{
				cout<<"You have enterded a wrong operator";
			}
		}

   
