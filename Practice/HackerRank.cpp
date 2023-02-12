#include <iostream>
using namespace std;

int main() {
    int i,j;
    cin>>i;
    cin>>j;
    for (;i<=j; i++) {
        if (i>=10)
        {
            for(int n =0;i<=j;i++){
                n = i % 2;
                if(n==1){
                cout<<"odd"<<endl;
                }else if(n==0){
                cout<<"even"<<endl;
                }
            }
        }
        
        else if (i==9) {
            cout<<"nine"<<endl;
        }else if (i==8) {
            cout<<"eight"<<endl;
        }else if (i==7) {
            cout<<"seven"<<endl;
        }else if (i==6) {
            cout<<"six"<<endl;
        }else if (i==5) {
            cout<<"five"<<endl;
        }else if (i==4) {
            cout<<"four"<<endl;
        }else if (i==3) {
            cout<<"three"<<endl;
        }else if (i==2) {
            cout<<"two"<<endl;
        }else if (i==1) {
            cout<<"one"<<endl;
        }
    }
    return 0;
}
