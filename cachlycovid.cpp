//http://laptrinhonline.club/problem/tichpxcovid19
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m,x,y; cin>>n>>m;
    list<int> A[n+5];
    set<int> C[n+5];
    while(m--){
        cin>>x>>y;
        A[x].push_back(y);
        A[y].push_back(x);
    }
    queue<int> Q; 
    map<int,int> M, F;
    cin>>F[0];
    for (int i=0; i<F[0]; i++){
        cin>>x;
        Q.push(x);
        M[x]=0;
    }
    while(Q.size()){
        int u=Q.front(); Q.pop();
        for(int v:A[u]){
            if(M.find(v)==M.end()){
                M[v]=M[u]+1;
                Q.push(v);
                C[M[v]].insert(v);
                F[M[v]]++;
            }
        }
    }
    for(auto f:F){
        cout<<"\nF"<<f.first<<": "<<f.second<<" gom ";
        for(auto z:C[f.first]) cout<<z<<" ";
    }
}
