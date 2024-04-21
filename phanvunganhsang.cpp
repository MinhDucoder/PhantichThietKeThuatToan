//http://laptrinhonline.club/problem/tichpxphanvung

#include <bits/stdc++.h>
using namespace std;

int m,n;
int a[205][205];

int DFS(int u, int v){
    stack<pair<int, int>> S;
    int dem = 1;
    a[u][v] = -1;
    S.push({u,v});
    while (S.size()>0) {
        int x = S.top().first, y = S.top().second;
        S.pop();
        for (int i = x-1; i<=x+1; i++){
            for (int j = y-1; j<=y+1; j++){
                if (i>=1 && i<=n && j>=1 && j<=m && a[i][j]==0){
                    a[i][j]=-1;
                    dem++;
                    S.push({i,j});
                }
            }
        }
    }
    return dem;
}

int main(){
    int k=0, g[1000];
    cin>>n>>m;
    for (int i = 1; i<=n; i++){
        for (int j = 1; j<=m; j++){
            cin>>a[i][j];
        }
    }
    for (int i = 1; i<=n; i++){
        for (int j = 1; j<=m; j++){
            if (a[i][j]==0){
                k++;
                g[k]=DFS(i,j);
            }
        }
    }
    sort(g+1,g+k+1);
    cout<<k<<"\n";
    for (int i = 1; i<=k; i++){cout<<g[i]<<" ";}
}
