//http://laptrinhonline.club/problem/tichpxongnuoc
#include<bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<long, vector<long>, greater<long>> Q;
    long n, k, x, a, res=0; cin>>n>>k;
    for(int i=0; i<n; i++){
        cin>>x; Q.push(x);
    }
    while(Q.size()>1){
        a=Q.top(); Q.pop();
        for(int i=0; i<k-1; i++){
            a+=Q.top(); Q.pop();
        }
        Q.push(a);
        res+=a;
    }
    cout<<res;
}
