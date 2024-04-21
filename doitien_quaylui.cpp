#include<bits/stdc++.h>
using namespace std;

int n, M, a[100], res=1e9;

void TRY(int k, int T, int t){ //gia su a1...a[k-1], tong tien T<=M, tong to t<res
    if(k-1==n-1){
        if((M-T)%a[n]==0) {
            res = min(res, t+(M-T)/a[n]);
            return;
        }
    } 
    else{
        for(int z = min(res-t-1, (M-T)/a[k]); z>=0; z--){
            TRY(k+1, T+a[k]*z, t+z);
        }
    }
}

int main(){
    cin>>n>>M; for(int i=1; i<=n; i++) cin>>a[i];
    sort(a+1, a+n+1, greater<int>());
    TRY(1,0,0);
    cout<<res;
}
