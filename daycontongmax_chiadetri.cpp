//http://laptrinhonline.club/problem/tichpxdclttm
#include<bits/stdc++.h>
using namespace std;
//O(nlogn)

long long a[100005], n;
long long submax(int L, int R){
    if(L==R-1) return a[L];
    long long M=(L+R)/2, X=a[M-1], t=X, Y=a[M], z=Y;
    for(int i=M-2; i>=L; i--){
        t+=a[i]; X=max(X,t);
    }
    for(int i=M+1; i<R; i++){
        z+=a[i]; Y=max(Y,z);
    }
    return max({X+Y, submax(L,M), submax(M,R)});
}

int main(){
    cin>>n;
    for(int i=0; i<n; i++) cin>>a[i];
    cout<<submax(0,n);
}
