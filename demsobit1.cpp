//http://laptrinhonline.club/problem/tichpxsobit1
/*
Bn  = 0 n?u n=0
    = 1 n?u n=1
    ...
    n+1 Dk + n - ((2^k)-1) + B(n-2^k) (k=log2(n+1))
*/
#include<bits/stdc++.h>
using namespace std;

long long D[100]={0,1};
long long demBit(long long n){
    if(n<1) return 0;
    long long k=log2(n+1);
    return D[k] + (n-(1LL<<k)+1) + demBit(n-(1LL<<k)); //1LL<<k = 2^k
}

int main(){
    for (int i=2; i<60; i++){
        D[i] = D[i-1]*2+(1LL<<(i-1));
    }
    long long n; cin>>n;
    cout<<demBit(n);
}
