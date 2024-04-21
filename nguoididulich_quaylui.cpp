//https://laptrinhonline.club/problem/tichpxnguoidulich
#include<bits/stdc++.h>
using namespace std;

int a[20][20], c[400], d[20]={}, n, m=0, res=1e9;
void TRY(int k, int t, int T){ //gia su x[1]=1...x[k-1]=t tong duong di T
    if(k-1==n) res=min(res, T+a[t][1]);
    else{
        for(int z=2; z<=n; z++){
            if(d[z]==0 && (T + a[t][z] + c[n-(k-1)])<res){ //d[z] ktra tp nay da check chua? c[n-(k-1)] = max duong di con lai->optimize
                d[z]=1;
                TRY(k+1, z, T+a[t][z]); 
                d[z]=0;
            }
        }
    }
}

int main(){
    cin>>n;
    for (int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin>>a[i][j];
            if(i<j) c[++m]=a[i][j];
        }
    }
    sort(c+1, c+m+1);
    partial_sum(c+1, c+m+1, c+1);
    TRY(2,1,0);
    cout<<res;
}
