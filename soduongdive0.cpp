//http://laptrinhonline.club/problem/tichpxzerodem
#include<bits/stdc++.h>
using namespace std;

long long D[100005]={}, M=1e9+7;

long long Zero(int n){
    if(n==0) return D[0]=1;
    if(D[n]) return D[n];
    for (long long a=1; a*a<=n; a++){
        if (n%a==0) D[n]=(D[n]+Zero((a-1)*(n/a+1)))%M;
    }
    return D[n];
}

int main(){
    int t,n;
    cin>>t; while(t--) {cin>>n; cout<<Zero(n)<<"\n";}
}
