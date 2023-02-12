//Print the N integers of the array in the reverse order, space-separated on a single line.
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,arry1[n];;
    cin>>n; 
    for(int i = 0;i<n;i++){
        cin>>arry1[i];
    }
    for(int j = n-1;j>=0;j--){
        cout<<arry1[j]<<" ";
    }
    return 0;
}
