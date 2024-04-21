//http://laptrinhonline.club/problem/3535
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,y; cin>>n>>m;
    int A[n];
    for(auto &x:A) cin>>x;
    sort(A, A+n);
    while (m--){
        cin>>y;
        cout<<upper_bound(A,A+n,y)-A<<"\n";
    }
}
