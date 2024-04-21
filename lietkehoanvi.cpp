//http://laptrinhonline.club/problem/mah1
#include<bits/stdc++.h>
using namespace std;
int d[100]={};
void TRY(int *x, int k, int n){
    if(k-1==n) for (int i=1; i<=n; i++) cout<<x[i]<<(i<n?" ":"\n");
    else{
        for(int i=1; i<=n; i++){
            if(d[i]==0){
                d[i]=1;
                x[k]=i;
                TRY(x,k+1,n);
                d[i]=0;
            }
        }
    }
}
int main(){
    int n, x[100];
    cin>>n;
    TRY(x,1,n);
}
