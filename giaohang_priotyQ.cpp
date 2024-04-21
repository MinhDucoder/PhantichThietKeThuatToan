// http://laptrinhonline.club/problem/tichpxshipper
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> A[100005];
    priority_queue<long> Q;
    long n, t, v, res=0, M=0;
    cin>>n;
    while(n--){
        cin>>t>>v;
        A[t].push_back(v);
        M=max(M,t);
    }
    for(int i=M; i>=1; i--){
        for(auto x:A[i]) Q.push(x);
        if(Q.size()){
            res+=Q.top();
            Q.pop();
        }
    }
    cout<<res;
}
