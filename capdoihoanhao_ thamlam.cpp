//http://laptrinhonline.club/problem/kv
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m, res=0; cin>>n>>m;
    int a[n], b[m];
    for(auto &x:a) cin>>x;
    for(auto &y:b) cin>>y;
    sort(a, a+n, greater<int>());
    sort(b, b+m, greater<int>());
    for(int i=0, j=0; i<n && j<m; i++, j++){
        while(j<m && a[i]<=b[j]) j++;
        if(j<m) res++;
    }
    cout<<res;
}
