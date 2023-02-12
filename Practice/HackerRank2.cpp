#include <iostream>
using namespace std;
void update(int *a,int *b) {
    int sum = *a + *b;
    int diff;
    if (*a > *b) {
        diff = *a - *b;
    }else {
        diff = *b - *a;
    }
    *a = sum;
    *b = diff;
     
      
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    cin>>a;
    cin>>b;
    update(pa, pb);
    cout<<a<<endl;
    cout<<b;

    return 0;
}