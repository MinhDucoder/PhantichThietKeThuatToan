//http://laptrinhonline.club/problem/cotyey024

/*
S(k,n)=:
TH1: k=1, n=1 -> A
TH2: k=1, n=1 -> B
TH3: k<=|Gn-2| -> S(k,n-2)
TH4: k>|Gn-2| -> S(k-|Gn-2|, n-1)
(|Gn|=Fn)
*/

#include<bits/stdc++.h>
using namespace std;

long long F[105]={0,1,1};

char xFibo(long long k, long long n){
    if(n==1) return 'A';
    if(n==2) return 'B';
    if(k<=F[n-2]) return xFibo(k,n-2);
    return xFibo(k-F[n-2], n-1);
}

int main(){
    for(int i=3; i<100; i++) F[i]=F[i-1]+F[i-2];
    long long t,k,n;
    cin>>t;
    while(t--){
        cin>>n>>k;
        cout<<xFibo(k,n)<<"\n";
    }
}
