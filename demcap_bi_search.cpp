//http://laptrinhonline.club/problem/tichpxcapso
#include<bits/stdc++.h>
using namespace std;

int main(){
    long n,m, res=0; cin>>n>>m;
    int A[n];
    for (auto &x:A) cin>>x;
    sort(A, A+n);
    for (int i=1; i<n; i++){
        res+=upper_bound(A,A+i,m-A[i])-A;
    }
    cout<<res;
}
