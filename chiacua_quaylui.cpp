//http://laptrinhonline.club/problem/tichpxchiacua
#include<bits/stdc++.h>
using namespace std;

int n, a[25], A, B;
double T=0, res=1e9;

void TRY(int k, int A, int B){
    if(k-1==n) res=min(res, (B-A)*1.0);
    else{
        if(A+a[k]<=T) TRY(k+1, A+a[k], B); //anh<=Tong/2
        if(B+a[k]<T+res/2) TRY(k+1, A, B+a[k]); //em<Tong/2 + diff/2
    }
}

int main(){
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>a[i];
        T+=a[i];
    }
    T/=2;
    TRY(1,0,0);
    cout<<res;
}
