//http://laptrinhonline.club/problem/tichpxsotamgiac
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int a[n];
    for(auto &x:a) cin>>x;
    sort(a, a+n);
    int res=1, L=0;
    for(int R=1; R<n; R++){
        while(a[L]+a[L+1]<=a[R]) L++;
        if(res<R-L) res=R-L;
    }
    if(res+1<3) cout<<"Khong the tao ra day thoa man";
    else cout<<res+1;
}
