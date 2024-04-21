#include<bits/stdc++.h>
using namespace std;

int n=9, a[10][10];

bool kt(int u, int v, int t){
    for(int i=0; i<n; i++) if(a[u][i]==t or a[i][v]==t) return 0;
    for(int i=u/3*3; i<u/3*3+3; i++)
    for(int j=v/3*3; j<v/3*3+3; j++) if(a[i][j]==t) return 0;
    return 1;
}

void TRY(int u, int v){
    if(u>8){
        for(int i=0; i<n; i++)
        for(int j=0; j<n; j++) cout<<a[i][j]<<(j==n-1?"\n":" ");
        return;
    }
    if(a[u][v]) TRY(u+v/8, (v+1)%9);
    else for(int t=1; t<=n; t++){
        if(kt(u,v,t)) {//dien dc t vao a[u][v]
            a[u][v]=t;
            TRY(u+v/8, (v+1)%9);
            a[u][v]=0; //lui
        }
    }
}

int main(){
    for(int i=0; i<n; i++)
    for(int j=0; j<n; j++) cin>>a[i][j];
    TRY(0,0);
}
