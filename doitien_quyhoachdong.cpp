//http://laptrinhonline.club/problem/tichpxdoitien
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,q,M,x,C[10004]={};
    fill(C+1, C+10001, 1e9);
    cin>>n>>q;
    for(int i=1; i<=n; i++){
        cin>>x;
        for(int j=1; j<=1e4; j++) C[j]=min(C[j],1+C[j-x]);
    }
    while(q--){
        cin>>M;
        if(C[M]==1e9) C[M]=-1;
        cout<<C[M]<<"\n";
    }
}

// int a[1005], C[105][10004]={}, n, q, M;

// void trace(int n, int M){
//     if(C[n][M]==0) return;
//     while(C[n][M]==C[n-1][M]) n--;
//     trace(n,M-a[n]);
//     cout<<a[n]<<" ";
// }

// int main(){
//     cin>>n>>q;
//     fill(C[0]+1, C[0]+M+1, 1e9);
//     for(int i=1; i<=n; i++){
//         cin>>a[i];
//         for(int j=0; j<=M; j++){
//             if(j<a[i]) C[i][j]=C[i-1][j];
//             else C[i][j]=min(C[i-1][j], 1+C[i][j-a[i]]);
//         }
//     }
//     while (q--){
//         if(C[n][M]==1e9) cout<<"khong doi duoc";
//         else{
//             cout<<"\nSo to it nhat "<<C[n][M]<<"\n";
//             trace(n,M);
//         }
//     }
// }
