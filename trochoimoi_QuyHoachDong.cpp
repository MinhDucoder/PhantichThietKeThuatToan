//http://laptrinhonline.club/problem/2018trochoimoi
#include<bits/stdc++.h>
using namespace std;

int main(){
    long n,x,c=-10,res=-10,s=0;
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>x;
        s+=x;
        x=x?-1:1;
        c=(c>0?c:0)+x;
        res=max(res,c);
    }
    cout<<res+s;
}
