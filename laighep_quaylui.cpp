//http://laptrinhonline.club/problem/tichpxlaighep
#include<bits/stdc++.h>
using namespace std;
string A,B;
int n;

void TRY(string x, int k){
    if(k==n) cout<<x<<"\n";
    else{
        TRY(x+A[k],k+1);
        if(A[k]!=B[k]) TRY(x+B[k],k+1);
    }
}

int main(){
    cin>>A>>B;
    n=A.length();
    for(int i=0; i<n; i++) if(A[i]>B[i]) swap(A[i],B[i]);
    TRY("", 0);
}
