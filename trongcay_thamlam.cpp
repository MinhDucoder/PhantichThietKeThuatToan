//http://laptrinhonline.club/problem/ssptrees
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n+3];
    for(int i=1; i<=n; i++) cin>>a[i];
    sort(a+1, a+n+1, greater<int>());
    for(int i=1; i<=n; i++){
        a[i]+=i;
    }
    cout<<1+*max_element(a+1, a+n+1);
}
