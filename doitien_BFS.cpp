//http://laptrinhonline.club/problem/tichpxdoitien
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, q;
    cin>>n>>q;
    int a[n];
    for (auto &x:a){
        cin>>x;
    }
    queue<int> Q;
    map<int, int> M;
    Q.push(0); M[0] = 0;
    while (Q.size()){
        int u = Q.front(); Q.pop();
        for (int x:a){
            if (u+x<=1e4 && M.find(u+x)==M.end()){
                M[u+x]=M[u]+1;
                Q.push(u+x);
            }
        }
    }
    while(q){
        int m;
        cin>>m;
        if(M.find(m)==M.end()) M[m]=-1;
        cout<<M[m]<<"\n";
    }
}
