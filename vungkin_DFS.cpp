//http://laptrinhonline.club/problem/tichpxvungkin

#include <bits/stdc++.h>
using namespace std;

int m,n;
int a[205][205];
int hh[] = {0,0,-1,1};
int hc[] = {-1,1,0,0};

void DFS(int u, int v){
    stack<pair<int, int>> S;
    a[u][v] = -1;
    S.push({u,v});
    while (S.size()>0) {
        int x = S.top().first, y = S.top().second;
        S.pop();
        for (int h=0; h<4; h++){
            int i = x + hh[h], j = y + hc[h];
            if (i>=1 && i<=n && j>=1 && j<=m && a[i][j]==0){
                a[i][j]=-1;
                S.push({i,j});
            }
        }
    }
}

int main(){
    int k = 0;
    cin>>n>>m;
    for (int i = 1; i<=n; i++){
        for (int j = 1; j<=m; j++){
            cin>>a[i][j];
        }
    }
    for (int i = 1; i<=n; i++){
        if (a[i][1]==0) DFS(i,1);
        if (a[i][m]==0) DFS(i,m);
    }
    for (int j = 1; j<=m; j++){
        if (a[1][j]==0) DFS(1,j);
        if (a[n][j]==0) DFS(n,j);
    }
    for (int i = 1; i<=n; i++){
        for (int j = 1; j<=m; j++){
            if (a[i][j]==0){
                k++;
                DFS(i,j);
            }
        }
    }
    cout<<k;
}

/*Ð? quy
pair<int, int> Next[] = {{0,-1}, {0,1}, {-1,0}, {1,0}};
int a[205][205], n, m, res=0;
#define FOR(i,a,b) for(int i=1; i<=b; i++)
void DFS(int u, int v){
    a[u][v]=1;
    for(auto t:Next) if(a[u+t.first][v+t.second]==0) DFS(u+t.first, v+t.second);
}
int main(){
    cin>>n>>m;
    FOR(i,1,n)
    FOR(j,1,m) cin>>a[i][j];
    FOR(i,1,n){
        if (a[i][1]==0) DFS(i,1);
        if (a[i][m]==0) DFS(i,m);
    }
    FOR(j,1,m){
        if (a[1][j]==0) DFS(1,j);
        if (a[n][j]==0) DFS(n,j);
    }
    FOR(i,2,n-1)
    FOR(j,2,m-1){
        if(a[i][j]==0){
            res++;
            DFS(i,j);
        }
    }
    cout<<res;
}
*/
