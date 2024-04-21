//http://laptrinhonline.club/problem/tichpxnhomban
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m,x,y;
    cin>>n>>m;
    vector<int> A[n+5]; //danh sach ke
    int d[n+5] = {}, G[n+5] = {}, k=0;
    for (int i=1; i<=m; i++) {
        cin>>x>>y;
        A[x].push_back(y);
        A[y].push_back(x);
    }
    for (int i=1; i<=m; i++){
        if (d[i]==0){
            G[++k]++;
            d[i]=k;
            stack<int> S;
            S.push(i);
            while(S.size()){
                int u=S.top(); S.pop();
                for (int v:A[u]){
                    if (d[v]==0){
                        d[v] = k;
                        G[k]++;
                        S.push(v);
                    }
                }
            }
        }
    }
    cout<<k<<" "<<*max_element(G+1, G+k+1);
}
