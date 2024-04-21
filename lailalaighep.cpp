//http://laptrinhonline.club/problem/tichpxlailalaighep
#include<bits/stdc++.h>
using namespace std;
string A,B;
int n;

void TRY(string x, int k, int d){
    if(d==3) return;
    if(k==n) cout<<x<<"\n";
    else{
        TRY(x+A[k],k+1, A[k]=='A'?0:d+1);
        if(A[k]!=B[k]) TRY(x+B[k],k+1, B[k]=='A'?0:d+1);
    }
}

int main(){
    cin>>A>>B;
    n=A.length();
    for(int i=0; i<n; i++) if(A[i]>B[i]) swap(A[i],B[i]);
    TRY("", 0, 0);
}
