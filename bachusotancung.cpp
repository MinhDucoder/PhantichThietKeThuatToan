//http://laptrinhonline.club/problem/tichpxbacstc
#include<bits/stdc++.h>
using namespace std;

long long M=1000;
long long POW(long long a, long long n){
    if (n==0) return 1;
    if (n%2==0) return POW(a*a%M, n/2)%M;
    return POW(a*a%M, n/2)*a%M;
}

int main(){
    long long a,n;
    cin>>a>>n;
    a%=M;
    n%=400;
    if (n==0) n=400;
    cout<<setw(3)<<setfill('0')<<POW(a,n);
}

//http://laptrinhonline.club/problem/tichpxll3cstc
// int main(){
//     long long a=0,n=0;
//     string A,N;
//     cin>>A>>N;
//     for(auto z:A) a=(a*10+z-'0')%M;
//     for(auto z:N) n=(n*10+z-'0')%400;
//     a%=M;
//     n%=400;
//     if (n==0) n=400;
//     cout<<setw(3)<<setfill('0')<<POW(a,n);
// }
