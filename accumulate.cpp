#include <bits/stdc++.h>
using namespace std;

int f(int a, int b) {return a+b;}
int mymax(int a, int b) {return a>b?a:b;}
int max2(int a, int b){
    if (a%2==0) return b%2==0?max(a,b):a;
    return b%2==0?b:-INT_MAX;
}

int main(){
    int a[] = {4,7,3,5,7,2,7,25,7,47,5,25};
    int n = sizeof(a) / sizeof(a[0]);
    cout<<accumulate(a, a+n, 0, f)<<"\n";
    cout<<accumulate(a, a+n, 1, multiplies<int>())<<"\n";
    cout<<accumulate(a, a+n, -INT_MAX, mymax)<<"\n";
    cout<<accumulate(a, a+n, -INT_MAX, max2)<<"\n";
}
